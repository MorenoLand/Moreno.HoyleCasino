// FUN_0051a830  0051a830

void __fastcall FUN_0051a830(int param_1)

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
  int local_90;
  undefined1 local_8c [104];
  uint local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_005f83d0(0x30e7f3,0);
  FUN_005f89d0(0x14);
  uVar10 = 0xffffffff;
  uVar9 = 0x11;
  uVar8 = 2;
  uVar7 = 3;
  uVar6 = 5;
  uVar5 = 0x19;
  uVar4 = 0x100;
  uVar3 = 0x49;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_ENDOFTOURNAMENT",0x49,0x100,0x19,5,3,2,0x11,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  uVar10 = 0xffffffff;
  uVar9 = 5;
  uVar8 = 1;
  uVar7 = 0x2c;
  uVar6 = 0x10;
  uVar5 = 0x1a;
  uVar4 = 0x80;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_WINNER_COLON",0x1f,0x80,0x1a,0x10,0x2c,1,5,0xffffffff);
  FUN_005fa5b0(0,0,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  FUN_006311e0(*(undefined4 *)(param_1 + 0x1c0),local_8c);
  FUN_005fa5b0(0,2,local_8c,0x1f,0x80,0x1a,0x14,0x5f,1,5,0xffffffff);
  uVar10 = 0xffffffff;
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0x6d;
  uVar6 = 0x6e;
  uVar5 = 0x18;
  uVar4 = 0x3a;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PLACE",0x1f,0x3a,0x18,0x6e,0x6d,1,0x30,0xffffffff);
  FUN_005fa5b0(0,3,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  local_8 = 0x3a;
  local_14 = 0x18;
  local_1c = 0x6e;
  local_10 = 0x19;
  iVar2 = 0x86;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x6e;
  uVar5 = 0x18;
  uVar4 = 0x3a;
  uVar3 = 0x1f;
  local_18 = iVar2;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_2ND",0x1f,0x3a,0x18,0x6e,0x86,1,0x30,0xffffffff);
  FUN_005fa5b0(0,4,uVar1,uVar3,uVar4,uVar5,uVar6,iVar2,uVar7,uVar8,uVar9);
  iVar2 = local_18 + local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x1f;
  uVar1 = local_8;
  uVar3 = local_14;
  uVar4 = local_1c;
  local_18 = iVar2;
  uVar5 = FUN_00630f40("SID_POKERTOURNAMENT_3RD",0x1f,local_8,local_14,local_1c,iVar2,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,5,uVar5,uVar6,uVar1,uVar3,uVar4,iVar2,uVar7,uVar8,uVar9);
  iVar2 = local_18 + local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x1f;
  uVar1 = local_8;
  uVar3 = local_14;
  uVar4 = local_1c;
  local_18 = iVar2;
  uVar5 = FUN_00630f40("SID_POKERTOURNAMENT_4TH",0x1f,local_8,local_14,local_1c,iVar2,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,6,uVar5,uVar6,uVar1,uVar3,uVar4,iVar2,uVar7,uVar8,uVar9);
  iVar2 = local_18 + local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x1f;
  uVar1 = local_8;
  uVar3 = local_14;
  uVar4 = local_1c;
  local_18 = iVar2;
  uVar5 = FUN_00630f40("SID_POKERTOURNAMENT_5TH",0x1f,local_8,local_14,local_1c,iVar2,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,7,uVar5,uVar6,uVar1,uVar3,uVar4,iVar2,uVar7,uVar8,uVar9);
  iVar2 = local_18 + local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x1f;
  uVar1 = local_8;
  uVar3 = local_14;
  uVar4 = local_1c;
  local_18 = iVar2;
  uVar5 = FUN_00630f40("SID_POKERTOURNAMENT_6TH",0x1f,local_8,local_14,local_1c,iVar2,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,8,uVar5,uVar6,uVar1,uVar3,uVar4,iVar2,uVar7,uVar8,uVar9);
  iVar2 = local_18 + local_10;
  uVar9 = 0xffffffff;
  uVar8 = 0x30;
  uVar7 = 1;
  uVar6 = 0x1f;
  uVar1 = local_8;
  uVar3 = local_14;
  uVar4 = local_1c;
  local_18 = iVar2;
  uVar5 = FUN_00630f40("SID_POKERTOURNAMENT_7TH",0x1f,local_8,local_14,local_1c,iVar2,1,0x30,
                       0xffffffff);
  FUN_005fa5b0(0,9,uVar5,uVar6,uVar1,uVar3,uVar4,iVar2,uVar7,uVar8,uVar9);
  local_18 = local_18 + local_10;
  uVar10 = 0xffffffff;
  uVar9 = 0x30;
  uVar8 = 1;
  uVar7 = 0x6d;
  uVar6 = 0xa9;
  uVar5 = 0x18;
  uVar4 = 0x59;
  uVar3 = 0x1f;
  uVar1 = FUN_00630f40("SID_POKERTOURNAMENT_PRIZE",0x1f,0x59,0x18,0xa9,0x6d,1,0x30,0xffffffff);
  FUN_005fa5b0(0,10,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  local_8 = 0x59;
  local_14 = 0x18;
  local_1c = 0xa9;
  local_10 = 0x19;
  local_18 = 0x86;
  local_90 = 1;
  for (local_20 = 0xb; local_20 < 0x11; local_20 = local_20 + 1) {
    FUN_006311e0(*(undefined4 *)(param_1 + 0x1c0 + local_90 * 4),local_8c);
    FUN_005fa5b0(0,local_20,local_8c,0x1f,local_8,local_14,local_1c,local_18,1,0x30,0xffffffff);
    local_18 = local_18 + local_10;
    local_90 = local_90 + 1;
  }
  FUN_005fa5b0(0,0x11,&PTR_006b27f8,0x48,0x80,0x1a,0x14,0x41,1,5,0xffffffff);
  for (local_c = 1; local_c < 7; local_c = local_c + 1) {
    FUN_005fa5b0(0,local_c + 0x11,&PTR_006b27f8,0x1f,99,0x18,0xe,(local_c + -1) * 0x19 + 0x86,1,0x10
                 ,0xffffffff);
  }
  uVar7 = 0xd;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0xb0,0x127,2,uVar1,uVar3,uVar4,uVar5,uVar6,uVar7);
  FUN_0051aca0();
  FUN_0051ae40();
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

