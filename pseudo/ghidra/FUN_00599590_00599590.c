// FUN_00599590  00599590

void __thiscall FUN_00599590(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char *local_7f0;
  int local_7e8;
  undefined1 local_7e4 [128];
  char local_764 [1028];
  undefined2 local_360 [5];
  char local_355;
  char local_354 [64];
  undefined1 local_314 [516];
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_7e8 = 0; local_7e8 < 4; local_7e8 = local_7e8 + 1) {
    local_360[local_7e8] = 0;
  }
  FUN_00462a40(4,param_1 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_360);
  local_110 = FUN_00462ba0(local_360,4,0);
  local_355 = FUN_00590850(param_2);
  if (local_110 == -1) {
    FUN_005e9f20("handType != -1","..\\Casino\\fourcardpokerstate.cpp",0x26f);
  }
  sprintf(local_354,"Four Card Poker Tutorial: handType %hd\n",local_110);
  FUN_0062fde0(local_354);
  FUN_00462f40(local_110,local_7e4);
  if (local_355 == '\0') {
    local_7f0 = (char *)FUN_00630f40("SID_FOURCARDPOKER_PLAY");
  }
  else {
    local_7f0 = (char *)FUN_00630f40("SID_FOURCARDPOKER_FOLD");
  }
  strcpy(local_10c,local_7f0);
  FUN_00590340(param_2,local_110,local_355,local_314);
  pcVar1 = (char *)FUN_00630f40("SID_FOURCARDPOKER_CURRENTHAND_FORMAT",local_7e4,local_10c,local_314
                               );
  sprintf(local_764,pcVar1);
  pcVar1 = local_764;
  uVar2 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar1);
  FUN_0057be80(1,uVar2,pcVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

