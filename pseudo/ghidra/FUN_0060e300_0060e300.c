// FUN_0060e300  0060e300

void __fastcall FUN_0060e300(int *param_1)

{
  char cVar1;
  HPALETTE pHVar2;
  BOOL bForceBkgd;
  
  if (param_1[0x23] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 != '\0') {
      FUN_0060dc50(param_1[0x23]);
      *(undefined1 *)((int)param_1 + 0x95) = 0;
    }
    if (param_1[0x24] != 0) {
      bForceBkgd = 0;
      pHVar2 = GetStockObject(0xf);
      pHVar2 = SelectPalette((HDC)param_1[0x24],pHVar2,bForceBkgd);
      DeleteObject(pHVar2);
      ReleaseDC((HWND)param_1[0x23],(HDC)param_1[0x24]);
      param_1[0x24] = 0;
    }
    DestroyWindow((HWND)param_1[0x23]);
  }
  return;
}

