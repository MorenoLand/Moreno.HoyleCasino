// FUN_0053ce20  0053ce20

void FUN_0053ce20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_var;
  int local_1c;
  char *local_18 [4];
  undefined4 local_8;
  
  local_18[2] = "SID_THREECARDPOKER_FOLD";
  local_18[3] = "SID_THREECARDPOKER_PLAY";
  local_18[0] = (char *)0x0;
  local_18[1] = (char *)0x1;
  local_8 = *(undefined4 *)(DAT_007933ec + 0xe8);
  FUN_005f83d0(0x424,0);
  uVar1 = extraout_var;
  FUN_005f89d0(0x14);
  uVar5 = 3;
  uVar3 = 0;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_GENERIC_ACTIONS",0x49,0,3,uVar1);
  FUN_005f73e0(uVar1,uVar2,uVar3,uVar5);
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    uVar6 = 0;
    uVar4 = 0xffffffff;
    uVar5 = 0x4a;
    uVar3 = 0x4b;
    uVar2 = 0x48;
    uVar1 = FUN_00630f40(local_18[local_1c + 2],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_18[local_1c],0x30d4de,10,local_1c * 0x23 + 0x26,2,uVar1,uVar2,uVar3,uVar5,
                 uVar4,uVar6);
    uVar1 = 1;
    FUN_005fb300(local_1c);
    FUN_005eb700(uVar1);
  }
  return;
}

