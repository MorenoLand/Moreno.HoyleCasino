// FUN_005fa790  005fa790

int * __thiscall
FUN_005fa790(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined1 param_11,undefined1 param_12,undefined1 param_13,
            undefined1 param_14,undefined1 param_15,undefined1 param_16,undefined1 param_17)

{
  uint uVar1;
  void *pvVar2;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa40c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar2 = operator_new(0x6c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_00625f10();
    }
    param_2 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  FUN_006260e0(param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
               param_14,param_15,param_16,param_17,param_3);
  (**(code **)(*param_2 + 0x74))(uVar1);
  ExceptionList = local_10;
  return param_2;
}

