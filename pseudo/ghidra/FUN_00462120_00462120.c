// FUN_00462120  00462120

void __thiscall FUN_00462120(undefined4 param_1,short param_2,char *param_3)

{
  char *_Source;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_3c,"SID_PAIGOWPOKER_RECOMMENDATION%d",(int)param_2,param_1);
  _Source = (char *)FUN_00630f40(local_3c);
  strcpy(param_3,_Source);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

