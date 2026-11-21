// FUN_006007b0  006007b0

void __thiscall FUN_006007b0(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar1 = FUN_005f3e50();
    iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    *(uint *)(param_1 + 0x28) = iVar1 + (uint)*(byte *)(iVar2 + 1 + *(int *)(param_1 + 0x24) * 2);
    FUN_006004e0(param_2,CONCAT31((int3)((uint)*(int *)(param_1 + 0x24) >> 8),param_3));
  }
  return;
}

