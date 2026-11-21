// FUN_00607a20  00607a20

void __thiscall FUN_00607a20(int *param_1,undefined4 param_2,float param_3)

{
  char local_14c [256];
  char local_4c [68];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_4c,"%f",(double)param_3);
  (**(code **)(*param_1 + 0x10))(param_2,local_4c,local_14c,0x40);
  atof(local_14c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

