// FUN_00405c40  00405c40

void FUN_00405c40(void)

{
  undefined8 uVar1;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar2;
  undefined1 local_128 [28];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (in_stack_00000014 < 1000000) {
    FUN_005ecc60(0x41);
    uVar2 = extraout_var_00;
  }
  else {
    FUN_005ecc60(0x55);
    uVar2 = extraout_var;
  }
  uVar1 = FUN_0064c8a0(in_stack_00000014,in_stack_00000018,uVar2);
  FUN_0064c8d0(uVar1,local_128,1,1,0);
  sprintf(local_10c,"%s",local_128);
  (**(code **)(*in_stack_00000010 + 0xb4))(local_10c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

