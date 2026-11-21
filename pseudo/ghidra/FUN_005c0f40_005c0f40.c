// FUN_005c0f40  005c0f40

void __thiscall
FUN_005c0f40(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  uint local_a0;
  int *local_9c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8477;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005c49f0(param_3,0);
  for (local_14 = 0; (int)local_14 < param_3; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_9c = (int *)0x0;
    }
    else {
      local_9c = (int *)FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    FUN_005eae80(param_2,*param_4,param_4[1],param_5 + local_14,0xffffffff);
    FUN_005eb000(local_14);
    (**(code **)(*local_9c + 0x74))();
    if (*(int *)(param_1 + 0x2c) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
    }
    if (local_a0 <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(int **)(*(int *)(param_1 + 0x2c) + local_14 * 4) = local_9c;
  }
  ExceptionList = local_10;
  return;
}

