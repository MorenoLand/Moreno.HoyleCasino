// FUN_0060cbb0  0060cbb0

void __thiscall FUN_0060cbb0(int param_1,code *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(int *)(param_1 + 4); local_8 = local_8 + 1) {
    for (local_14 = 0; local_14 < (*(int *)(param_1 + 4) + -1) - local_8; local_14 = local_14 + 1) {
      uVar1 = FUN_0060ca40(local_14);
      uVar2 = FUN_0060ca40(local_14 + 1);
      iVar3 = (*param_2)(uVar1,uVar2);
      if (0 < iVar3) {
        FUN_0060ca70(local_14,uVar2);
        FUN_0060ca70(local_14 + 1,uVar1);
      }
    }
  }
  return;
}

