// FUN_0049cc90  0049cc90

void __thiscall
FUN_0049cc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a0ea9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004646a0(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
  local_8 = 0;
  FUN_004646f0();
  FUN_004649c0(param_1);
  FUN_004966e0(local_1c,local_18,local_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11);
  local_8 = 0xffffffff;
  FUN_004646e0();
  ExceptionList = local_10;
  return;
}

