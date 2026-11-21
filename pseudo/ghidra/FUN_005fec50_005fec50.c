// FUN_005fec50  005fec50

void FUN_005fec50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined1 local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_005fe770(param_4,local_3c);
  uVar1 = (**(code **)(*DAT_015e55e8 + 0x14))(param_2,uVar1,extraout_var);
  FUN_005fea30(uVar1,param_2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

