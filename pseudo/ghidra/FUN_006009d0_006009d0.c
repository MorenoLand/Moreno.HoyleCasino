// FUN_006009d0  006009d0

void __fastcall FUN_006009d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
      (**(code **)(**(int **)(param_1 + 4) + 0xb0))
                (*(undefined1 *)(iVar1 + *(int *)(param_1 + 0x24) * 2));
      iVar1 = FUN_005f3e50();
      iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
      *(uint *)(param_1 + 0x28) = iVar1 + (uint)*(byte *)(iVar2 + 1 + *(int *)(param_1 + 0x24) * 2);
    }
  }
  return;
}

