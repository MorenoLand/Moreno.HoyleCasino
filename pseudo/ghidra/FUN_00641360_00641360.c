// FUN_00641360  00641360

void FUN_00641360(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  char local_38 [32];
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_006413c0(local_18,param_1,param_2,CONCAT31((int3)(local_8 >> 8),param_3));
  sprintf(local_38,"SID_CARD_%s",local_18);
  FUN_00630f40(local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

