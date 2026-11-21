// FUN_005e5b10  005e5b10

void __fastcall FUN_005e5b10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 0xffffffff;
  uVar8 = 0x12;
  uVar7 = 1;
  uVar6 = 3;
  uVar5 = 3;
  uVar4 = 0x18;
  uVar3 = 0xc3;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_VIDEOPOKER",0x49,0xc3,0x18,3,3,1,0x12,0xffffffff,param_1);
  FUN_005fa5b0(0,0xffffffff,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0x311b7c,0x30d4e5,8,0xb2,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0x311b7d,0x30d4de,0x74,0xb2,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  uVar1 = 0xd;
  FUN_005fb300(0x311b7c);
  FUN_006026f0(uVar1);
  uVar1 = 0x1b;
  FUN_005fb300(0x311b7d);
  FUN_006026f0(uVar1);
  uVar7 = 0;
  uVar6 = 0x14;
  uVar5 = 0xffffffff;
  uVar4 = 0x42;
  uVar3 = 0x45;
  uVar2 = 0x1f;
  uVar1 = FUN_00630f40("SID_VP_JACKBACK",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,0x311b82,0x311b7e,0x30d4ca,0xf,0x32,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar7 = 0;
  uVar6 = 0x14;
  uVar5 = 0xffffffff;
  uVar4 = 0x42;
  uVar3 = 0x45;
  uVar2 = 0x1f;
  uVar1 = FUN_00630f40("SID_VP_WILDCOUNTRY",0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,0x311b83,0x311b7e,0x30d4ca,0xf,0x4b,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar1 = 0x311b82;
  FUN_005fb3a0(0x311b7e);
  FUN_006065d0(uVar1);
  FUN_005fa790(0,0xffffffff,0,0xffffffff,200,0x3c,4,0x72,1,0x78,0x7c,0xa1,0xff,0xff,0xff,0);
  FUN_005fa5b0(0,0xffffffff,
               "Hoyle Casino features 9 exciting Video Poker machines, in denominations from $1 to $100!"
               ,0x23,0xc0,0x32,8,0x77,1,0x30,0xffffffff);
  return;
}

