// FUN_00584ae0  00584ae0

void __thiscall FUN_00584ae0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_005f6210(param_2,param_3);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x44))(param_2,param_3);
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar1 = FUN_005f5590();
    iVar2 = FUN_005f5590();
    (**(code **)(**(int **)(param_1 + 0x60) + 0x44))(param_2,(iVar1 + param_3) - (iVar2 + -1));
    iVar1 = FUN_005f5590();
    (**(code **)(**(int **)(param_1 + 100) + 0x44))(param_2,iVar1 + param_3);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x54))();
    iVar2 = FUN_005f5590();
    iVar1 = iVar1 - iVar2;
    uVar3 = (**(code **)(**(int **)(param_1 + 100) + 0x54))(iVar1);
    FUN_00584210(uVar3,iVar1);
  }
  else {
    iVar1 = FUN_005f5550(param_3);
    iVar2 = FUN_005f5550();
    (**(code **)(**(int **)(param_1 + 0x60) + 0x44))((iVar1 + param_2) - (iVar2 + -1));
    iVar1 = FUN_005f5550(param_3);
    (**(code **)(**(int **)(param_1 + 100) + 0x44))(iVar1 + param_2);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x4c))();
    iVar2 = FUN_005f5550();
    iVar1 = iVar1 - iVar2;
    uVar3 = (**(code **)(**(int **)(param_1 + 100) + 0x4c))(iVar1);
    FUN_00584210(uVar3,iVar1);
  }
  iVar1 = FUN_00584260();
  iVar2 = FUN_00584240();
  *(int *)(param_1 + 0x70) = iVar1 - iVar2;
  return;
}

