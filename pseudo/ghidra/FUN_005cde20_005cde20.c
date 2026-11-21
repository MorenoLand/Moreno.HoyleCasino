// FUN_005cde20  005cde20

void FUN_005cde20(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_d8 [8];
  int *local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  char local_bc [152];
  uint local_24;
  int local_20;
  int local_1c;
  char *local_18 [4];
  int local_8;
  
  local_24 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_18[0] = "SID_CASINO_BANK_COLON";
  local_18[1] = "SID_CASINO_TOTALBET_COLON";
  local_18[2] = "SID_GENERIC_EMPTY";
  local_18[3] = "SID_CASINO_SESSIONNET_COLON";
  local_c4 = 0;
  local_c0 = 0;
  local_cc = *(int *)(param_1 + 0x4cc);
  local_c8 = *(int *)(param_1 + 0x4d0);
  local_20 = *(int *)(param_1 + 0x4c4);
  local_1c = *(int *)(param_1 + 0x4c8);
  FUN_005f89d0(0);
  if (local_cc < 0) {
    local_cc = -local_cc;
  }
  if (local_c8 < 0) {
    local_c8 = -local_c8;
  }
  if (local_20 < 0) {
    local_20 = -local_20;
  }
  if (local_1c < 0) {
    local_1c = -local_1c;
  }
  (**(code **)(*DAT_007947e4 + 0x27c))(*(undefined4 *)(param_1 + 4),&local_c4);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    uVar14 = 0xffffffff;
    uVar13 = 6;
    uVar12 = 1;
    iVar6 = local_8 * 0xd + 0x1d;
    uVar10 = 5;
    uVar9 = 0xe;
    uVar8 = 0x3c;
    uVar7 = 0x23;
    uVar3 = FUN_00630f40(local_18[local_8],0x23,0x3c,0xe,5,iVar6,1,6,0xffffffff);
    local_d0 = (int *)FUN_005fa5b0(0,local_8,uVar3,uVar7,uVar8,uVar9,uVar10,iVar6,uVar12,uVar13,
                                   uVar14);
    switch(local_8) {
    case 0:
      uVar8 = 1;
      uVar7 = 1;
      uVar3 = 1;
      pcVar11 = local_bc;
      puVar4 = (undefined4 *)FUN_005d5a90(local_d8);
      FUN_0064c8d0(*puVar4,puVar4[1],pcVar11,uVar3,uVar7,uVar8);
      break;
    case 1:
      cVar2 = FUN_005da7b0();
      if ((cVar2 == '\0') ||
         (cVar2 = (**(code **)(*DAT_007947e4 + 0x2c4))(*(undefined4 *)(param_1 + 4)), cVar2 == '\0')
         ) {
        FUN_0064c8d0(local_c4,local_c0,local_bc,1,1,1);
      }
      else {
        strcpy(local_bc,(char *)&PTR_006b27f8);
      }
      break;
    case 2:
      if ((*(int *)(param_1 + 0x4cc) == 0) && (*(int *)(param_1 + 0x4d0) == 0)) {
        uVar3 = FUN_00630f40("SID_CASINO_LASTNET_COLON");
        (**(code **)(*local_d0 + 0xb4))(uVar3);
      }
      else {
        cVar2 = FUN_005d58d0();
        if (cVar2 == '\0') {
          uVar3 = FUN_00630f40("SID_CASINO_JUSTWON_COLON");
          (**(code **)(*local_d0 + 0xb4))(uVar3);
        }
        else {
          uVar3 = FUN_00630f40("SID_CASINO_JUSTLOST_COLON");
          (**(code **)(*local_d0 + 0xb4))(uVar3);
        }
      }
      FUN_0064c8d0(local_cc,local_c8,local_bc,1,1,0);
      break;
    case 3:
      FUN_0064c8d0(*(undefined4 *)(param_1 + 0x4c4),*(undefined4 *)(param_1 + 0x4c8),local_bc,1,1,1)
      ;
    }
    FUN_005fa5b0(0,local_8 + 4,local_bc,0x23,0x69,0xf,0x46,local_8 * 0xd + 0x1d,1,5,0xffffffff);
  }
  local_d0 = (int *)FUN_005fa5b0(0,8,&PTR_006b27f8,0x1f,0x8c,0xf,5,6,1,0x11,0xffffffff);
  iVar6 = FUN_0063aac0();
  FUN_005ee710(iVar6 + 4);
  piVar5 = (int *)FUN_0063aac0();
  if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    iVar6 = FUN_005d52e0();
    FUN_005f9ce0(0,0,0x41d,0x92,8,1,(int)*(char *)(iVar6 + 0x2a),0xff,0);
  }
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffffc);
  return;
}

