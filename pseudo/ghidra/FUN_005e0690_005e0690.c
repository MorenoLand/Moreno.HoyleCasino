// FUN_005e0690  005e0690

void FUN_005e0690(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 extraout_var;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined1 local_b4 [108];
  undefined1 local_48 [52];
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_005d5a90(&local_10);
  local_e0 = FUN_0064c8a0(0,0,extraout_var);
  local_d0 = local_e0;
  local_e8 = FUN_0064c8a0(0,0);
  local_c8 = local_e8;
  local_f0 = FUN_0064c8a0(0,0);
  local_c0 = param_2;
  local_8 = 0;
  local_bc = local_f0;
  cVar1 = FUN_005da7b0();
  if (cVar1 != '\0') {
    iVar2 = FUN_0063aac0();
    cVar1 = FUN_006368b0(iVar2 + 4);
    if (cVar1 != '\0') {
      iVar2 = FUN_0063aac0();
      uVar3 = FUN_006369b0(iVar2 + 4);
      local_8 = FUN_005dcb00(uVar3);
      uVar3 = *(undefined4 *)(local_8 + 0x4b8);
      uVar5 = *(undefined4 *)(local_8 + 0x4b4);
      puVar10 = local_100;
      FUN_005d5a90(local_f8);
      puVar4 = (undefined4 *)FUN_0064c5c0(puVar10,uVar5,uVar3);
      local_10 = *puVar4;
      local_c = puVar4[1];
    }
  }
  FUN_005e0af0(param_2,&local_d0,&local_c8,&local_bc);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0xfa;
  uVar8 = 0xf;
  uVar7 = 0x19;
  uVar6 = 100;
  uVar5 = 0x48;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_OVERALL_COLON",0x48,100,0x19,0xf,0xfa,1,5,0xffffffff);
  FUN_005fa5b0(0,0x3a,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0x10e;
  uVar8 = 0xf;
  uVar7 = 0xf;
  uVar6 = 0x8c;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_BANKROLL_COLON",0x1f,0x8c,0xf,0xf,0x10e,1,5,0xffffffff);
  FUN_005fa5b0(0,0x32,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  FUN_0064c8d0(local_10,local_c,local_48,1,1,1);
  FUN_005fa5b0(0,0x33,local_48,0x1f,0x82,0xf,0x78,0x10e,1,0x12,0xffffffff);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0x122;
  uVar8 = 0xf;
  uVar7 = 0xf;
  uVar6 = 0x8c;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_TOTALNET_COLON",0x1f,0x8c,0xf,0xf,0x122,1,5,0xffffffff);
  FUN_005fa5b0(0,0x34,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  FUN_0064c8d0(local_d0,local_48,1,1,1);
  FUN_005fa5b0(0,0x35,local_48,0x1f,0x82,0xf,0x78,0x122,1,0x12,0xffffffff);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0x136;
  uVar8 = 0xf;
  uVar7 = 0xf;
  uVar6 = 0x8c;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_GAMEPLAYNET_COLON",0x1f,0x8c,0xf,0xf,0x136,1,5,0xffffffff);
  FUN_005fa5b0(0,0x36,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  FUN_0064c8d0(local_c8,local_48,1,1,1);
  FUN_005fa5b0(0,0x37,local_48,0x1f,0x82,0xf,0x78,0x136,1,0x12,0xffffffff);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0x14a;
  uVar8 = 0xf;
  uVar7 = 0xf;
  uVar6 = 0x8c;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_TOURNAMENTNET_COLON",0x1f,0x8c,0xf,0xf,0x14a,1,5,0xffffffff)
  ;
  FUN_005fa5b0(0,0x38,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  FUN_0064c8d0(local_bc,local_48,1,1,1);
  FUN_005fa5b0(0,0x39,local_48,0x1f,0x82,0xf,0x78,0x14a,1,0x12,0xffffffff);
  local_d8 = 0;
  local_d4 = 0;
  iVar2 = FUN_005d52e0();
  if (*(char *)(iVar2 + 0x29) != '\0') {
    local_d8 = FUN_005d6bd0();
  }
  FUN_0064c8d0(local_d8,local_d4,local_b4,1,1,1);
  uVar13 = 0xffffffff;
  uVar12 = 5;
  uVar11 = 1;
  uVar9 = 0x15e;
  uVar8 = 0xf;
  uVar7 = 0xf;
  uVar6 = 0x82;
  uVar5 = 0x1f;
  uVar3 = FUN_00630f40("SID_CASINOSTATS_OUTSTANDINGLOAN_COLON",0x1f,0x82,0xf,0xf,0x15e,1,5,
                       0xffffffff);
  FUN_005fa5b0(0,0x3b,uVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12,uVar13);
  FUN_005fa5b0(0,0x3c,local_b4,0x1f,0x82,0xf,0x78,0x15e,1,0x12,0xffffffff);
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

