// FUN_005f9b40  005f9b40

int FUN_005f9b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined1 param_12)

{
  void *pvVar1;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa26f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    pvVar1 = operator_new(400);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005f5f50();
    }
    param_1 = local_20;
  }
  local_8 = 0xffffffff;
  FUN_005f9c10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_11,
               param_12);
  FUN_005f6050(param_9);
  ExceptionList = local_10;
  return param_1;
}

