// FUN_005fab80  005fab80

int * __thiscall
FUN_005fab80(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa4a4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar2 = operator_new(0x70);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_00614810();
    }
    param_2 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  FUN_00614b60(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
               param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_22,
               param_3);
  (**(code **)(*param_2 + 0x74))(uVar1);
  ExceptionList = local_10;
  return param_2;
}

