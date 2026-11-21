// FUN_00584c90  00584c90

void __thiscall FUN_00584c90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_005f6240(param_2,param_3);
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  iVar2 = (**(code **)(*param_1 + 0x54))();
  (**(code **)(*(int *)param_1[0x17] + 0x44))(iVar1,iVar2);
  if (param_1[0x1a] == 0) {
    iVar3 = FUN_005f5590();
    iVar4 = FUN_005f5590();
    (**(code **)(*(int *)param_1[0x18] + 0x44))(iVar1,(iVar3 + iVar2) - (iVar4 + -1));
    iVar3 = FUN_005f5590();
    (**(code **)(*(int *)param_1[0x19] + 0x44))(iVar1,iVar3 + iVar2);
    iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x54))();
    iVar2 = FUN_005f5590();
    iVar1 = iVar1 - iVar2;
    uVar5 = (**(code **)(*(int *)param_1[0x19] + 0x54))(iVar1);
    FUN_00584210(uVar5,iVar1);
  }
  else {
    iVar3 = FUN_005f5550(iVar2);
    iVar4 = FUN_005f5550();
    (**(code **)(*(int *)param_1[0x18] + 0x44))((iVar3 + iVar1) - (iVar4 + -1));
    iVar2 = FUN_005f5550(iVar2);
    (**(code **)(*(int *)param_1[0x19] + 0x44))(iVar2 + iVar1);
    iVar1 = (**(code **)(*(int *)param_1[0x18] + 0x4c))();
    iVar2 = FUN_005f5550();
    iVar1 = iVar1 - iVar2;
    uVar5 = (**(code **)(*(int *)param_1[0x19] + 0x4c))(iVar1);
    FUN_00584210(uVar5,iVar1);
  }
  iVar1 = FUN_00584260();
  iVar2 = FUN_00584240();
  param_1[0x1c] = iVar1 - iVar2;
  return;
}

