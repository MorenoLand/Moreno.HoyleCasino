// FUN_0068fbb0  0068fbb0

undefined4 __thiscall FUN_0068fbb0(int param_1,undefined **param_2,int param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  PDEVMODEA pDevModeOutput;
  HDC pHVar5;
  bool bVar6;
  DOCINFOA local_20;
  int local_c;
  HANDLE local_8;
  
  memset((void *)(param_1 + 8),0,0x42);
  *(undefined4 *)(param_1 + 8) = 0x42;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x14010c;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0x26) = 0xffff;
  BVar1 = PrintDlgA((LPPRINTDLGA)(param_1 + 8));
  if (BVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x26);
    if ((uVar3 & 1) == 0) {
      DeleteDC(*(HDC *)(param_1 + 0x18));
      FUN_0068fb10("Printer cannot display bitmaps.");
      uVar2 = 0;
    }
    else {
      puVar4 = GlobalLock(*(HGLOBAL *)(param_1 + 0x14));
      BVar1 = OpenPrinterA((LPSTR)((uint)puVar4[1] + (int)puVar4),&local_8,(LPPRINTER_DEFAULTSA)0x0)
      ;
      if (BVar1 != 0) {
        pDevModeOutput = GlobalLock(*(HGLOBAL *)(param_1 + 0x10));
        if ((pDevModeOutput->dmFields & 1) != 0) {
          bVar6 = false;
          if (param_3 == 1) {
            if ((pDevModeOutput->field6_0x2c).field0.dmOrientation != 1) {
              (pDevModeOutput->field6_0x2c).field0.dmOrientation = 1;
              bVar6 = true;
            }
          }
          else if ((param_3 == 2) &&
                  (bVar6 = (pDevModeOutput->field6_0x2c).field0.dmOrientation != 2, bVar6)) {
            (pDevModeOutput->field6_0x2c).field0.dmOrientation = 2;
          }
          if (bVar6) {
            pDevModeOutput->dmFields = 1;
            DocumentPropertiesA(*(HWND *)(*(int *)(DAT_007960d8 + 0x10) + 0x8c),local_8,
                                (LPSTR)((uint)puVar4[1] + (int)puVar4),pDevModeOutput,pDevModeOutput
                                ,10);
            DeleteDC(*(HDC *)(param_1 + 0x18));
            pHVar5 = CreateDCA((LPCSTR)((uint)*puVar4 + (int)puVar4),
                               (LPCSTR)((uint)puVar4[1] + (int)puVar4),(LPCSTR)0x0,pDevModeOutput);
            *(HDC *)(param_1 + 0x18) = pHVar5;
          }
          ClosePrinter(local_8);
        }
        GlobalUnlock(*(HGLOBAL *)(param_1 + 0x10));
        ClosePrinter(local_8);
      }
      GlobalUnlock(*(HGLOBAL *)(param_1 + 0x14));
      local_20.cbSize = 0x14;
      if (param_2 == (undefined **)0x0) {
        local_20.lpszDocName = (LPCSTR)&PTR_006b27f8;
      }
      else {
        local_20.lpszDocName = (LPCSTR)param_2;
      }
      local_20.lpszOutput = (LPCSTR)0x0;
      local_20.lpszDatatype = (LPCSTR)0x0;
      local_20.fwType = 0;
      local_c = StartDocA(*(HDC *)(param_1 + 0x18),&local_20);
      if (local_c == -1) {
        DeleteDC(*(HDC *)(param_1 + 0x18));
        FUN_0068fb10("StartDoc");
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

