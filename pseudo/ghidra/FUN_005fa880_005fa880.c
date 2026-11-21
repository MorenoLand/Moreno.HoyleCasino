// FUN_005fa880  005fa880

int * __thiscall
FUN_005fa880(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9,
            undefined1 param_10,undefined1 param_11,undefined1 param_12,undefined1 param_13,
            undefined1 param_14)

{
  void *pvVar1;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa432;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == (int *)0x0) {
    pvVar1 = operator_new(0x5c);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_20 = (int *)FUN_005f6130();
    }
    param_2 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_0060c840(param_2);
  param_2[1] = param_1;
  FUN_005f61d0(param_4,param_5,param_6,param_7,param_8,param_3);
  FUN_005f6490(param_9,param_10,param_11);
  FUN_005f6580(param_12,param_13,param_14);
  (**(code **)(*param_2 + 0x74))();
  ExceptionList = local_10;
  return param_2;
}

