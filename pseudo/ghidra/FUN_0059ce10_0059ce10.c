// FUN_0059ce10  0059ce10

void __fastcall FUN_0059ce10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_24;
  char *local_20 [4];
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  local_20[3] = "SID_BIGRAISE_RISK_ANTE";
  local_10 = "SID_BIGRAISE_RISK_BIG_RAISE";
  local_c = "SID_BIGRAISE_ALL_IN";
  local_20[0] = (char *)0x0;
  local_20[1] = (char *)0x1;
  local_20[2] = (char *)0x2;
  local_8 = FUN_005a2020(param_1);
  FUN_005f83d0(0xfdea,0);
  FUN_005f89d0(0x14);
  uVar5 = 3;
  uVar3 = 0;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_GENERIC_ACTIONS",0x49,0,3);
  FUN_005f73e0(uVar1,uVar2,uVar3,uVar5);
  for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
    uVar6 = 0;
    uVar4 = 0xffffffff;
    uVar5 = 0x4a;
    uVar3 = 0x4b;
    uVar2 = 0x48;
    uVar1 = FUN_00630f40(local_20[local_24 + 3],0x48,0x4b,0x4a,0xffffffff,0);
    FUN_005f9de0(0,local_20[local_24],0xfdee,10,local_24 * 0x23 + 0x26,2,uVar1,uVar2,uVar3,uVar5,
                 uVar4,uVar6);
    uVar1 = 1;
    FUN_005fb300(local_24);
    FUN_005eb700(uVar1);
  }
  return;
}

