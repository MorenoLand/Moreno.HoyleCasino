// FUN_005785b0  005785b0

void __fastcall FUN_005785b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0062fbf0(8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_0062fbf0(8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    uVar1 = FUN_0062fbf0(7);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    if (*(int *)(param_1 + 4) <= *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  else {
    uVar1 = FUN_0062fbf0(8);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}

