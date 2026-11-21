// FUN_005fac90  005fac90

int * __thiscall
FUN_005fac90(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
            undefined4 param_22,undefined4 param_23,undefined4 param_24,undefined4 param_25,
            undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29,
            undefined4 param_30,undefined1 param_31,undefined1 param_32,undefined1 param_33,
            undefined4 param_34)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa4ca;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar2 = operator_new(0xcc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_006280d0();
    }
    param_2 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  FUN_00628540(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
               param_14,param_15,param_16,param_17,param_18,param_19,param_20,param_21,param_22,
               param_23,param_24,param_25,param_26,param_27,param_28,param_29,param_30,param_31,
               param_32,param_33,param_34,param_3);
  (**(code **)(*param_2 + 0x74))(uVar1);
  ExceptionList = local_10;
  return param_2;
}

