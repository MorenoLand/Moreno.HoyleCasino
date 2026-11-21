// FUN_0056b800  0056b800

void __fastcall FUN_0056b800(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_114;
  int local_110;
  char local_10c [256];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  local_110 = 0;
  FUN_0062fde0("Payouts:\n",param_1,0);
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    cVar1 = FUN_0056b950(local_8,0);
    if ((cVar1 != '\0') && (local_110 = FUN_0056b710(local_8,&local_114), local_110 != 0)) {
      iVar2 = iVar2 + local_110;
      FUN_0056b2b0(local_8,0);
      sprintf(local_10c,"\t(wins %d credits with hand index #%d)\n",local_110,local_114,param_1,
              iVar2);
      FUN_0062fde0(local_10c);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

