// FUN_005faee0  005faee0

int * __thiscall
FUN_005faee0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
            undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa516;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar2 = operator_new(0x1fc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_00605b90(param_8,2,param_9,1);
    }
    param_2 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  FUN_005eae80(param_4,param_5,param_6,param_7,param_3);
  if (param_11 != -1) {
    (**(code **)(*param_2 + 0xdc))(param_10,param_11,param_12,param_13,param_14,0,0,uVar1);
  }
  (**(code **)(*param_2 + 0x74))();
  ExceptionList = local_10;
  return param_2;
}

