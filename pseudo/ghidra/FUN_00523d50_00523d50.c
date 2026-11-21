// FUN_00523d50  00523d50

void __thiscall FUN_00523d50(int *param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a40b1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1[0x2b8] == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005eaaf0();
    }
    param_1[0x2b8] = local_20;
  }
  local_8 = 0xffffffff;
  uVar3 = (**(code **)(*param_1 + 0xd8))(param_2,0,10,0xffffffff,uVar1);
  uVar5 = 0;
  uVar4 = (**(code **)(*param_1 + 0xd4))(param_2,0,uVar3);
  FUN_005eae80(0x186aa,uVar4,param_2,uVar5,uVar3);
  (**(code **)(*(int *)param_1[0x2b8] + 0x74))();
  ExceptionList = local_10;
  return;
}

