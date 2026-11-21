// FUN_00541e90  00541e90

void __thiscall FUN_00541e90(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char *local_7e4;
  undefined1 local_7dc [128];
  char local_75c [1031];
  char local_355;
  char local_354 [64];
  undefined1 local_314 [516];
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_355 = FUN_00539f40(param_2);
  local_110 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
  if (local_110 == -1) {
    FUN_005e9f20("handType != -1","..\\Casino\\threecardpokerstate.cpp",0x281);
  }
  sprintf(local_354,"Three Card Poker Tutorial: handType %hd\n",local_110);
  FUN_0062fde0(local_354);
  FUN_00462f40(local_110,local_7dc);
  if (local_355 == '\0') {
    local_7e4 = (char *)FUN_00630f40("SID_THREECARDPOKER_PLAY");
  }
  else {
    local_7e4 = (char *)FUN_00630f40("SID_THREECARDPOKER_FOLD");
  }
  strcpy(local_10c,local_7e4);
  FUN_0053a050(param_2,local_110,local_355,local_314);
  pcVar1 = (char *)FUN_00630f40("SID_THREECARDPOKER_CURRENTHAND_FORMAT",local_7dc,local_10c,
                                local_314);
  sprintf(local_75c,pcVar1);
  pcVar1 = local_75c;
  uVar2 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

