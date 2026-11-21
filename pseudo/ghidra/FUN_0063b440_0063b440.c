// FUN_0063b440  0063b440

void FUN_0063b440(int param_1)

{
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  undefined4 uVar1;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _itoa(param_1,local_74,10);
  uVar1 = extraout_var;
  FUN_0063b3c0(local_74);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar1);
  return;
}

