// FUN_0065d2d0  0065d2d0

void __fastcall FUN_0065d2d0(undefined4 param_1)

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
  
  FUN_0065bb00(param_1);
  uVar9 = 0xffffffff;
  uVar8 = 0x12;
  uVar7 = 1;
  uVar6 = 3;
  uVar5 = 3;
  uVar4 = 0x19;
  uVar3 = 0x142;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_SHELL_LOADFACE",0x49,0x142,0x19,3,3,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  FUN_005fa880(0,0,0x149,1,3,0xda,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x149,1,4,0xdb,1,0xff,0xff,0xff,0,0,0);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_SHELL_LOAD",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x50,0xe1,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  uVar6 = 0x1b;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,1,0x30d4de,0xaa,0xe1,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  FUN_0065c820(3,0,DAT_016306a4 + 0x1bc,1);
  return;
}

