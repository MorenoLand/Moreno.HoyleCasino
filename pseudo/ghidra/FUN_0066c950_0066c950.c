// FUN_0066c950  0066c950

void __fastcall FUN_0066c950(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
  iVar2 = iVar1 - *(int *)(param_1 + 0x80);
  if (iVar2 < 0x3fd) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x78) + 1;
    iVar1 = FUN_005eb240();
    if (iVar1 < *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    FUN_005eb5d0(0xff);
    FUN_005eb5d0(0);
    (**(code **)(**(int **)(param_1 + 0x70) + 0xb0))(*(undefined4 *)(param_1 + 0x7c));
  }
  else if (iVar2 < 0x7f9) {
    FUN_005eb5d0((int)((0x7f8 - iVar2) + (0x7f8 - iVar2 >> 0x1f & 3U)) >> 2);
    FUN_005eb5d0((int)(iVar2 + -0x3fc + (iVar2 + -0x3fc >> 0x1f & 3U)) >> 2);
  }
  else if (iVar2 < 0xbf5) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x7c) + 1;
    iVar1 = FUN_005eb240();
    if (iVar1 < *(int *)(param_1 + 0x78)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    FUN_005eb5d0(0);
    FUN_005eb5d0(0xff);
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(*(undefined4 *)(param_1 + 0x78));
  }
  else if (iVar2 < 0xff1) {
    FUN_005eb5d0((int)(iVar2 + -0xbf4 + (iVar2 + -0xbf4 >> 0x1f & 3U)) >> 2);
    FUN_005eb5d0((int)((0xff0 - iVar2) + (0xff0 - iVar2 >> 0x1f & 3U)) >> 2);
  }
  else {
    *(int *)(param_1 + 0x80) = iVar1;
  }
  return;
}

