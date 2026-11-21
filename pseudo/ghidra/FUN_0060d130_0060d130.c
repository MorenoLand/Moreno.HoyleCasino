// FUN_0060d130  0060d130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060d130(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char *_Dest;
  HICON pHVar7;
  HCURSOR pHVar8;
  HGDIOBJ pvVar9;
  int local_10;
  
  uVar3 = FUN_006135c0();
  if ((param_2 == (uVar3 & 0xffff)) && (uVar3 = FUN_006135e0(), param_3 == (uVar3 & 0xffff))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_00613360(param_2,param_3);
  if (bVar2) {
    cVar1 = *(char *)((int)param_1 + 0x95);
    DAT_015e55d2 = 1;
    (**(code **)(*param_1 + 0x34))();
    DAT_00795f97 = FUN_00607900("FullScreen",DAT_00795f97);
    GetSystemMetrics(0);
    iVar4 = GetSystemMetrics(1);
    if (iVar4 <= (int)param_3) {
      *(undefined1 *)((int)param_1 + 0x96) = 1;
      DAT_00795f97 = '\x01';
    }
    param_1[0x26] = 0x20;
    param_1[0x27] = (int)FUN_0060e5e0;
    sVar5 = strlen(&DAT_00795738);
    sVar6 = strlen(" Class");
    _Dest = operator_new(sVar5 + 1 + sVar6);
    strcpy(_Dest,&DAT_00795738);
    strcat(_Dest," Class");
    param_1[0x2f] = (int)_Dest;
    param_1[0x28] = 0;
    param_1[0x29] = 4;
    param_1[0x2a] = (int)DAT_016306b4;
    pHVar7 = LoadIconA(DAT_016306b4,(LPCSTR)0x63);
    param_1[0x2b] = (int)pHVar7;
    pHVar8 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    param_1[0x2c] = (int)pHVar8;
    pvVar9 = GetStockObject(4);
    param_1[0x2d] = (int)pvVar9;
    param_1[0x2e] = 0;
    RegisterClassA((WNDCLASSA *)(param_1 + 0x26));
    DAT_015e55d2 = 1;
    if (((DAT_00795f97 == '\x01') || (cVar1 != '\0')) && ((char)param_1[0x17] == '\0')) {
      FUN_0060e050();
    }
    else {
      FUN_0060dd10(1);
    }
    DAT_015e55d2 = 0;
    (**(code **)(*param_1 + 0x10))(param_1 + 10);
    FUN_0060d6a0();
    if (DAT_015e51c0 != 0xb13) {
      memset(&DAT_015e51d0,0,0x400);
      _DAT_015e51a8 = 0x28;
      _DAT_015e51ac = FUN_00613580();
      _DAT_015e51ac = _DAT_015e51ac & 0xffff;
      _DAT_015e51b0 = FUN_006135a0();
      _DAT_015e51b0 = _DAT_015e51b0 & 0xffff;
      _DAT_015e51b4 = 1;
      _DAT_015e51b6 = 0x10;
      _DAT_015e51b8 = 0;
      _DAT_015e51bc = 0;
      DAT_015e51c0 = 0xb13;
      _DAT_015e51c4 = 0xb13;
      _DAT_015e51c8 = 0;
      _DAT_015e51cc = 0;
    }
    joySetCapture((HWND)param_1[0x23],0,0x10,1);
    joySetThreshold(0,0x200);
    joySetCapture((HWND)param_1[0x23],1,0x10,1);
    joySetThreshold(1,0x200);
    DAT_015e55d8 = operator_new(0x20);
    DAT_015e55dc = operator_new(0x20);
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      *(undefined4 *)((int)DAT_015e55dc + local_10 * 0x10) = 0x8000;
      *(undefined4 *)((int)DAT_015e55dc + local_10 * 0x10 + 4) = 0x8000;
      *(undefined4 *)((int)DAT_015e55dc + local_10 * 0x10 + 0xc) = 0;
      *(undefined4 *)((int)DAT_015e55d8 + local_10 * 0x10) = 0x8000;
      *(undefined4 *)((int)DAT_015e55d8 + local_10 * 0x10 + 4) = 0x8000;
      *(undefined4 *)((int)DAT_015e55d8 + local_10 * 0x10 + 0xc) = 0;
    }
  }
  return;
}

