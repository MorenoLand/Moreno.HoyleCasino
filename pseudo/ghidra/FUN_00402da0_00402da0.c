// FUN_00402da0  00402da0

void __thiscall FUN_00402da0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  local_8 = 0;
  switch(param_4) {
  case 0:
    local_8 = 1;
    break;
  case 1:
  case 8:
    local_8 = 0;
    break;
  case 2:
    local_8 = 3;
    break;
  case 9:
    local_8 = 0;
  }
  (**(code **)(*(int *)param_1[0x2b9] + 0xb0))(local_8);
  uVar1 = (**(code **)(*param_1 + 0xd8))(param_2,param_3);
  uVar1 = (**(code **)(*param_1 + 0xd4))(param_2,param_3,uVar1);
  (**(code **)(*(int *)param_1[0x2b9] + 0x44))(uVar1);
  (**(code **)(*(int *)param_1[0x2b9] + 0x74))();
  return;
}

