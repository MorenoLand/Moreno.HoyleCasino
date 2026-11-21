// FUN_00659cc0  00659cc0

void __thiscall FUN_00659cc0(int param_1,char param_2)

{
  char cVar1;
  char local_24 [28];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  strcpy(local_24,(char *)(param_1 + 0x1bc));
  if ((param_2 == '\0') || (cVar1 = FUN_00659fa0(local_24), cVar1 != '\0')) {
    FUN_00659d30(local_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

