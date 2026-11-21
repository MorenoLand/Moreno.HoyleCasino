// FUN_00675560  00675560

void FUN_00675560(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *local_34;
  char local_30 [32];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_c = 1;
  local_8 = 0;
  cVar1 = FUN_00675100(&local_34,param_2);
  if (cVar1 != '\0') {
    sprintf(local_30,"%d",local_c);
    local_8 = FUN_00607960(local_30,0);
    while (local_8 != 0) {
      FUN_006764e0(local_8);
      local_c = local_c + 1;
      sprintf(local_30,"%d",local_c);
      local_8 = FUN_00607960(local_30,0);
    }
    if (local_34 != (undefined4 *)0x0) {
      (**(code **)*local_34)(1);
    }
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

