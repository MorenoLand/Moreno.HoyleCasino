// FUN_00408f10  00408f10

void __thiscall FUN_00408f10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_10c,"Round: %d\n",param_2,param_1);
  FUN_0062fde0(local_10c);
  uVar1 = FUN_004091b0();
  sprintf(local_10c,"Player has: %d\n",uVar1);
  FUN_0062fde0(local_10c);
  uVar1 = FUN_004091d0();
  sprintf(local_10c,"Banker has: %d\n",uVar1);
  FUN_0062fde0(local_10c);
  FUN_0062fde0("---------------------\n");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

