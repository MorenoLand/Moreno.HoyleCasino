// FUN_005784e0  005784e0

void __fastcall FUN_005784e0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) &&
     (*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc))) {
    if (*(int *)(param_1 + 4) == 7) {
      uVar1 = FUN_00578630();
      *(undefined4 *)(param_1 + 0x10) = uVar1;
    }
    else {
      if (*(int *)(param_1 + 0x10) == -1) {
        *(int *)(param_1 + 0x18) =
             *(int *)(param_1 + 0x18) +
             *(int *)(&DAT_007493ec + *(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 4) * 0xc);
      }
      else {
        *(int *)(param_1 + 0x1c) =
             *(int *)(&DAT_007493ec + *(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 4) * 0xc) *
             *(int *)(&DAT_007493d8 + *(int *)(param_1 + 0x10) * 4) + *(int *)(param_1 + 0x1c);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}

