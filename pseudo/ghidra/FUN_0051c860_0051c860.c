// FUN_0051c860  0051c860

void __fastcall FUN_0051c860(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  FUN_005f87d0();
  iVar2 = FUN_0051c580();
  if ((-1 < iVar2) && (iVar2 < 8)) {
    FUN_005e2f90();
    DAT_007947e0[0x13bf] = iVar2;
    DAT_007947e0[0x13c0] = *(int *)(param_1 + 0x1c0);
    *(undefined1 *)(DAT_007947e0 + 0x13c1) = 1;
    iVar3 = FUN_0051c820(*(undefined4 *)(param_1 + 0x1c0));
    DAT_007947e0[0x13bb] = iVar3;
    DAT_007947e0[0x13bc] = 200;
    *(undefined1 *)((int)DAT_007947e0 + 0x4ee9) = 1;
    iVar3 = FUN_0051c9b0(*(undefined4 *)(&DAT_007217e8 + iVar2 * 4));
    DAT_007947e0[0x13c6] = iVar3;
    iVar2 = FUN_0051c9b0(*(undefined4 *)(&DAT_007217e8 + iVar2 * 4));
    DAT_007947e0[0x13c9] = iVar2;
    *(undefined1 *)((int)DAT_007947e0 + 0x4eea) = 0;
    iVar2 = FUN_0051ca40(0x30e792);
    DAT_007947e0[0x13c3] = iVar2;
    cVar1 = (**(code **)(*DAT_007947e0 + 0x334))(0xb,0xffffffff);
    if (cVar1 == '\0') {
      FUN_005e3130();
    }
  }
  return;
}

