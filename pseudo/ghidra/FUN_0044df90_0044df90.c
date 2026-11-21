// FUN_0044df90  0044df90

void __thiscall FUN_0044df90(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *local_9e4;
  undefined1 local_9dc [128];
  char local_95c [1031];
  char local_555;
  char local_554 [64];
  undefined1 local_514 [1028];
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_555 = FUN_004466b0(param_2);
  uVar3 = 0;
  uVar1 = FUN_0044ce00(param_2);
  local_110 = FUN_00462ba0(param_1 + 0x98 + param_2 * 10,uVar1,uVar3);
  if (local_110 == -1) {
    FUN_005e9f20("handType != -1","..\\Casino\\letitridestate.cpp",0x286);
  }
  sprintf(local_554,"Let it Ride Tutorial: handType %hd\n",local_110);
  FUN_0062fde0(local_554);
  FUN_00462f40(local_110,local_9dc);
  if (local_555 == '\0') {
    local_9e4 = (char *)FUN_00630f40("SID_LETITRIDE_TAKEBETBACK");
  }
  else {
    local_9e4 = (char *)FUN_00630f40("SID_LETITRIDE_LETITRIDE");
  }
  strcpy(local_10c,local_9e4);
  FUN_00446990(param_2,local_110,local_555,local_514);
  pcVar2 = (char *)FUN_00630f40("SID_LETITRIDE_CURRENTHAND_FORMAT",local_9dc,local_10c,local_514);
  sprintf(local_95c,pcVar2);
  pcVar2 = local_95c;
  uVar1 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar2);
  FUN_0057be80(1,uVar1,pcVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

