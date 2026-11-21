// FUN_005a3c40  005a3c40

void __thiscall FUN_005a3c40(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char local_4a4 [11];
  undefined1 local_499;
  undefined4 local_498;
  undefined1 local_494 [135];
  undefined1 local_40d;
  char local_40c [1028];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_498 = FUN_00462ba0(param_1 + 200 + param_2 * 6,2,0);
  FUN_00462f40(local_498,local_494);
  local_4a4[0] = '\0';
  if ((*(ushort *)(DAT_007935d0 + 0x120) < 2) || (10 < *(ushort *)(DAT_007935d0 + 0x120))) {
    if (*(short *)(DAT_007935d0 + 0x120) == 0xb) {
      sprintf(local_4a4,"Jack");
    }
    else if (*(short *)(DAT_007935d0 + 0x120) == 0xc) {
      sprintf(local_4a4,"Queen");
    }
    else if (*(short *)(DAT_007935d0 + 0x120) == 0xd) {
      sprintf(local_4a4,"King");
    }
    else if (*(short *)(DAT_007935d0 + 0x120) == 0xe) {
      sprintf(local_4a4,"Ace");
    }
  }
  else {
    sprintf(local_4a4,"%d",(uint)*(ushort *)(DAT_007935d0 + 0x120));
  }
  uVar1 = FUN_0059b080(param_2,&local_40d,&local_499);
  pcVar2 = (char *)FUN_00630f40("SID_BIGRAISE_CURRENTHAND_FORMAT",local_494,local_4a4,uVar1);
  sprintf(local_40c,pcVar2);
  pcVar2 = local_40c;
  uVar1 = FUN_00630f40("SID_GENERIC_STRATEGY",pcVar2);
  FUN_0057be80(1,uVar1,pcVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

