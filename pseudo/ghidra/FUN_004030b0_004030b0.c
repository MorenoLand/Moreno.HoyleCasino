// FUN_004030b0  004030b0

void __fastcall FUN_004030b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_34;
  int local_30;
  char local_2c [12];
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_20 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0x19;
  FUN_005f83d0(0x31128e,0);
  FUN_005f89d0(0x14);
  uVar11 = 0xd;
  uVar9 = 0xffffffff;
  uVar7 = 0x4a;
  uVar6 = 0x4b;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_BACCARAT_CLOSE",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x14,0x17b,2,uVar1,uVar4,uVar6,uVar7,uVar9,uVar11);
  FUN_005f9ce0(0,1,0x311291,0x75,0x22,1,0,0xff,0);
  local_14 = 10;
  local_10 = 0x23;
  local_1c = 0x32;
  local_c = 0x41;
  uVar12 = 0xffffffff;
  uVar10 = 1;
  uVar8 = 10;
  uVar11 = 0x23;
  uVar9 = 10;
  uVar7 = 0x15;
  uVar6 = 0x32;
  uVar4 = 0x1f;
  uVar1 = FUN_00630f40("SID_BACCARAT_SHOE_COLON",0x1f,0x32,0x15,10,0x23,10,1,0xffffffff);
  FUN_005fa5b0(0,2,uVar1,uVar4,uVar6,uVar7,uVar9,uVar11,uVar8,uVar10,uVar12);
  FUN_005fa5b0(0,3,&DAT_006b2b64,0x1f,0x14,0x15,local_c,local_10,10,2,0xffffffff);
  iVar2 = local_10 + local_8;
  uVar8 = 0xffffffff;
  uVar11 = 1;
  uVar9 = 10;
  uVar7 = 0x15;
  uVar6 = 0x1f;
  uVar1 = local_1c;
  iVar5 = local_14;
  local_10 = iVar2;
  uVar4 = FUN_00630f40("SID_BACCARAT_HANDS_COLON",0x1f,local_1c,0x15,local_14,iVar2,10,1,0xffffffff)
  ;
  FUN_005fa5b0(0,4,uVar4,uVar6,uVar1,uVar7,iVar5,iVar2,uVar9,uVar11,uVar8);
  FUN_005fa5b0(0,5,&DAT_006b2b64,0x1f,0x14,0x15,local_c,local_10,10,2,0xffffffff);
  iVar2 = local_10 + local_8;
  uVar8 = 0xffffffff;
  uVar11 = 1;
  uVar9 = 10;
  uVar7 = 0x15;
  uVar6 = 0x1f;
  uVar1 = local_1c;
  iVar5 = local_14;
  local_10 = iVar2;
  uVar4 = FUN_00630f40("SID_BACCARAT_PLAYED_COLON",0x1f,local_1c,0x15,local_14,iVar2,10,1,0xffffffff
                      );
  FUN_005fa5b0(0,6,uVar4,uVar6,uVar1,uVar7,iVar5,iVar2,uVar9,uVar11,uVar8);
  FUN_005fa5b0(0,7,&DAT_006b2b64,0x1f,0x14,0x15,local_c,local_10,10,2,0xffffffff);
  iVar2 = local_10 + local_8;
  uVar8 = 0xffffffff;
  uVar11 = 1;
  uVar9 = 10;
  uVar7 = 0x15;
  uVar6 = 0x1f;
  uVar1 = local_1c;
  iVar5 = local_14;
  local_10 = iVar2;
  uVar4 = FUN_00630f40("SID_BACCARAT_WON_COLON",0x1f,local_1c,0x15,local_14,iVar2,10,1,0xffffffff);
  FUN_005fa5b0(0,8,uVar4,uVar6,uVar1,uVar7,iVar5,iVar2,uVar9,uVar11,uVar8);
  FUN_005fa5b0(0,9,&DAT_006b2b64,0x1f,0x14,0x15,local_c,local_10,10,2,0xffffffff);
  iVar2 = local_10 + local_8;
  uVar8 = 0xffffffff;
  uVar11 = 1;
  uVar9 = 10;
  uVar7 = 0x15;
  uVar6 = 0x1f;
  uVar1 = local_1c;
  iVar5 = local_14;
  local_10 = iVar2;
  uVar4 = FUN_00630f40("SID_BACCARAT_LOST_COLON",0x1f,local_1c,0x15,local_14,iVar2,10,1,0xffffffff);
  FUN_005fa5b0(0,10,uVar4,uVar6,uVar1,uVar7,iVar5,iVar2,uVar9,uVar11,uVar8);
  FUN_005fa5b0(0,0xb,&DAT_006b2b64,0x1f,0x14,0x15,local_c,local_10,10,2,0xffffffff);
  local_14 = 0x7c;
  local_10 = 0x3c;
  local_8 = 0x12;
  local_34 = 0x14;
  for (local_18 = 1; local_18 < 0x14; local_18 = local_18 + 1) {
    sprintf(local_2c,"%d",local_18);
    FUN_005fa5b0(0,local_34,local_2c,0x1f,0x13,0x11,local_14,local_10,5,0x30,0xffffffff);
    local_34 = local_34 + 1;
    local_10 = local_10 + local_8;
  }
  local_14 = 0x90;
  local_10 = 0x3c;
  local_34 = 0x28;
  local_30 = 0x28;
  for (local_18 = 1; local_18 < 0x14; local_18 = local_18 + 1) {
    FUN_005fa5b0(0,local_34,&PTR_006b27f8,0x1f,0x19,0x11,local_14,local_10,10,0x30,0xffffffff);
    local_34 = local_34 + 1;
    FUN_005f9ce0(0,local_30,0x311290,local_14 + 2,local_10,5,0,0xff,0);
    piVar3 = (int *)FUN_005fb2b0(local_30);
    (**(code **)(*piVar3 + 0x70))();
    local_30 = local_30 + 1;
    local_10 = local_10 + local_8;
  }
  local_14 = 0xaa;
  local_10 = 0x3c;
  local_34 = 0x3c;
  local_30 = 0x3c;
  for (local_18 = 1; local_18 < 0x14; local_18 = local_18 + 1) {
    FUN_005fa5b0(0,local_34,&PTR_006b27f8,0x1f,0x19,0x11,local_14,local_10,10,0x30,0xffffffff);
    local_34 = local_34 + 1;
    FUN_005f9ce0(0,local_30,0x311290,local_14 + 2,local_10,5,0,0xff,0);
    piVar3 = (int *)FUN_005fb2b0(local_30);
    (**(code **)(*piVar3 + 0x70))();
    local_30 = local_30 + 1;
    local_10 = local_10 + local_8;
  }
  FUN_00403630();
  uVar1 = FUN_004035b0();
  (**(code **)(**(int **)(param_1 + 0x1bc) + 0xbc))(uVar1);
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

