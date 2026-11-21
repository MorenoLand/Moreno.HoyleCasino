// FUN_0045fde0  0045fde0

void __thiscall FUN_0045fde0(int param_1,int param_2)

{
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_3c,"Player %d Low Hand:\n",param_2);
  FUN_0062fde0(local_3c);
  FUN_0045fa10(CONCAT22((short)((uint)local_3c >> 0x10),
                        *(undefined2 *)(param_1 + 0xa2 + param_2 * 2)),local_3c);
  FUN_0062fde0(local_3c);
  FUN_0045fa10(CONCAT22((short)((uint)local_3c >> 0x10),
                        *(undefined2 *)(param_1 + 0xac + param_2 * 2)),local_3c);
  FUN_0062fde0(local_3c);
  FUN_0062fde0(&DAT_006ba518);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

