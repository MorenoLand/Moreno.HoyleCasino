// FUN_0051a070  0051a070

void __fastcall FUN_0051a070(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_c;
  int local_8;
  
  FUN_005f83d0(0x30e7f2,0);
  FUN_005f89d0(0x14);
  uVar10 = 0xffffffff;
  uVar9 = 0x11;
  uVar8 = 2;
  uVar7 = 3;
  uVar6 = 5;
  uVar5 = 0x19;
  uVar4 = 500;
  uVar3 = 0x49;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_STATISTICS",0x49,500,0x19,5,3,2,0x11,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 0x20;
  uVar8 = 1;
  uVar7 = 0x1b;
  uVar6 = 0x88;
  uVar5 = 0x23;
  uVar4 = 99;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_TOURNAMENTS",0x1f,99,0x23,0x88,0x1b,1,0x20,0xffffffff);
  FUN_005fa5b0(0,1,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 0x20;
  uVar8 = 1;
  uVar7 = 0x2b;
  uVar6 = 0x88;
  uVar5 = 0x23;
  uVar4 = 99;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PLAYED",0x1f,99,0x23,0x88,0x2b,1,0x20,0xffffffff);
  FUN_005fa5b0(0,2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0x1b;
  uVar6 = 0xec;
  uVar5 = 0x23;
  uVar4 = 0x4a;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PERCENTWON",0x1f,0x4a,0x23,0xec,0x1b,1,0x30,0xffffffff);
  FUN_005fa5b0(0,3,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0x1b;
  uVar6 = 0x137;
  uVar5 = 0x23;
  uVar4 = 99;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PERCENT_HANDSWON",0x1f,99,0x23,0x137,0x1b,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,4,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0x1b;
  uVar6 = 0x19b;
  uVar5 = 0x23;
  uVar4 = 99;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PRIZEMONEY",0x1f,99,0x23,0x19b,0x1b,1,0x30,0xffffffff);
  FUN_005fa5b0(0,5,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  local_8 = 6;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    uVar9 = 0xffffffff;
    uVar8 = 0x10;
    uVar7 = 1;
    iVar2 = local_c * 0x19 + 0x3f;
    uVar6 = 9;
    uVar5 = 0x18;
    uVar4 = 0x7e;
    uVar3 = 0x1f;
    uVar1 = FUN_00630f40((&PTR_s_SID_POKERTOURNAMENT_GAME_5CARDDR_00721838)[local_c],0x1f,0x7e,0x18,
                         9,iVar2,1,0x10,0xffffffff);
    FUN_005fa5b0(0,local_8,uVar1,uVar3,uVar4,uVar5,uVar6,iVar2,uVar7,uVar8,uVar9);
    iVar2 = FUN_0051a3a0(local_c);
    *(int *)(param_1 + 0x1bc + iVar2 * 4) = local_8 + 1;
    FUN_005fa5b0(0,local_8 + 1,&DAT_006b2b64,0x1f,100,0x18,0x88,local_c * 0x19 + 0x3f,1,0x30,
                 0xffffffff);
    FUN_005fa5b0(0,local_8 + 2,&DAT_006b2b64,0x1f,0x4d,0x18,0xec,local_c * 0x19 + 0x3f,1,0x30,
                 0xffffffff);
    FUN_005fa5b0(0,local_8 + 3,&DAT_006b2b64,0x1f,100,0x18,0x137,local_c * 0x19 + 0x3f,1,0x30,
                 0xffffffff);
    FUN_005fa5b0(0,local_8 + 4,&DAT_006b2b64,0x1f,100,0x18,0x19b,local_c * 0x19 + 0x3f,1,0x30,
                 0xffffffff);
    local_8 = local_8 + 5;
  }
  uVar7 = 0xd;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x1a8,0x114,2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar7 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_CLEAR",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,1,0x30d4de,0x11,0x114,2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  FUN_0051a460();
  return;
}

