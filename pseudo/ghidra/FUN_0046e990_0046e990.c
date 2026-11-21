// FUN_0046e990  0046e990

void FUN_0046e990(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 extraout_var;
  undefined1 local_1c [8];
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f81b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  DAT_00791048 = FUN_0047e3b0();
  FUN_004c7c40(local_1c);
  local_8 = 0;
  if ((&DAT_00790fb8)[iVar1] != 1) {
    FUN_0046e6f0();
  }
  FUN_0046e1f0(1,param_2);
  local_14 = FUN_0046ea60(local_1c);
  FUN_00498c70(CONCAT22(extraout_var,*(undefined2 *)(&DAT_00791030 + iVar1 * 2)),param_1,
               CONCAT22(extraout_var,local_14));
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

