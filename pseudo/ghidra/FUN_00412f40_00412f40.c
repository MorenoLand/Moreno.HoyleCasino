// FUN_00412f40  00412f40

void __fastcall FUN_00412f40(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 9) == '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    FUN_0040cdc0(4,0,0,0);
    iVar2 = DAT_00790324;
    *(undefined4 *)(DAT_00790324 + 0x4ec) = 9;
    *(undefined4 *)(iVar2 + 0x4f0) = 4;
    (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  }
  else {
    iVar2 = FUN_0041a780();
    if (iVar2 == -1) {
      FUN_004190b0(0xffffffff,0);
      FUN_0040daf0();
    }
    else {
      FUN_004190b0(iVar2,0);
      if (*(char *)(param_1 + 10) == '\0') {
        *(undefined1 *)(param_1 + 10) = 1;
        iVar1 = DAT_00790324;
        *(undefined4 *)(DAT_00790324 + 0x4ec) = 2;
        *(int *)(iVar1 + 0x4f0) = iVar2;
        (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        FUN_0041b620(iVar2);
        (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
      }
    }
  }
  return;
}

