// FUN_0068e9d0  0068e9d0

void __thiscall FUN_0068e9d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_1c;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_0068f580(*(undefined4 *)(*(int *)(param_2 + 4) + 4),*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x45) == '\0') {
    for (local_1c = *(int **)(*(int *)(param_1 + 4) + 4); *(char *)(*local_1c + 0x45) == '\0';
        local_1c = (int *)*local_1c) {
    }
    **(undefined4 **)(param_1 + 4) = local_1c;
    local_28 = *(int *)(*(int *)(param_1 + 4) + 4);
    while (*(char *)(*(int *)(local_28 + 8) + 0x45) == '\0') {
      local_28 = *(int *)(local_28 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = local_28;
  }
  else {
    **(undefined4 **)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 4);
  }
  return;
}

