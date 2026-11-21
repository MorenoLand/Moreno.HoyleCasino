// FUN_00585150  00585150

void __thiscall FUN_00585150(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = FUN_00584240();
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xb0))();
    iVar2 = (**(code **)(*param_1 + 0xb4))();
    if (iVar1 - iVar2 <= param_2) {
      local_8 = local_8 + param_1[0x1c];
      goto LAB_005851d0;
    }
  }
  iVar1 = FUN_00585470();
  if (iVar1 != 0) {
    iVar1 = param_1[0x1c];
    iVar2 = FUN_00585470();
    local_8 = (iVar1 * param_2) / iVar2 + local_8;
  }
LAB_005851d0:
  if (param_1[0x1a] == 0) {
    uVar3 = (**(code **)(*(int *)param_1[0x19] + 0x4c))(local_8);
    (**(code **)(*(int *)param_1[0x19] + 0x44))(uVar3);
  }
  else {
    uVar3 = (**(code **)(*(int *)param_1[0x19] + 0x54))();
    (**(code **)(*(int *)param_1[0x19] + 0x44))(local_8,uVar3);
  }
  return;
}

