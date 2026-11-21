// FUN_00461f80  00461f80

void FUN_00461f80(undefined4 param_1)

{
  undefined2 extraout_var;
  char *pcVar1;
  undefined4 uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined4 extraout_var_02;
  undefined1 local_7d4 [128];
  char local_754 [1024];
  char local_354 [64];
  undefined1 local_314 [516];
  short local_110;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_110 = FUN_00452500(param_1);
  if (local_110 == -1) {
    FUN_005e9f20("handType != -1","..\\Casino\\paigowstate.cpp",0x39f,extraout_var_02);
  }
  sprintf(local_354,"Paigow Tutorial: handType %hd\n",(int)local_110);
  FUN_0062fde0(local_354);
  FUN_004620c0(CONCAT22(extraout_var_00,local_110),local_7d4);
  FUN_00462120(CONCAT22(extraout_var,local_110),local_10c);
  FUN_00462180(CONCAT22(extraout_var_01,local_110),local_314);
  pcVar1 = (char *)FUN_00630f40("SID_PAIGOWPOKER_CURRENTHAND_FORMAT",local_7d4,local_10c,local_314);
  sprintf(local_754,pcVar1);
  pcVar1 = local_754;
  uVar2 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

