// FUN_0050c7a0  0050c7a0

void FUN_0050c7a0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a32c1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  DAT_007926f8 = FUN_0047e390(param_1);
  FUN_004c7c40(local_18);
  local_8 = 0;
  FUN_0049db00(param_2,&DAT_00792f90 + param_1 * 8,&DAT_00792fd0 + param_1 * 8);
  local_8 = 0xffffffff;
  FUN_00484470(uVar1);
  ExceptionList = local_10;
  return;
}

