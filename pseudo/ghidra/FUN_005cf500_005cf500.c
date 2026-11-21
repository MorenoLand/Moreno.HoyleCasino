// FUN_005cf500  005cf500

void __fastcall FUN_005cf500(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_32c;
  char local_2fc [108];
  undefined4 local_290;
  undefined4 local_28c;
  char *local_288 [5];
  undefined1 local_274 [107];
  char local_209;
  int local_208;
  char local_204 [508];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_288[0] = "SID_GENERIC_IACCEPT";
  local_288[1] = "SID_GENERIC_CANCEL";
  local_288[2] = (char *)0xd7;
  local_288[3] = (char *)0x168;
  local_209 = 0;
  local_290 = 0;
  local_28c = 0;
  uVar15 = 0xffffffff;
  uVar14 = 0x12;
  uVar13 = 1;
  uVar12 = 1;
  uVar11 = 0;
  uVar10 = 0x19;
  uVar9 = 0x1c0;
  uVar8 = 0x49;
  uVar3 = FUN_00630f40("SID_CASINO_LOANS",0x49,0x1c0,0x19,0,1,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar3,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
  uVar3 = (**(code **)(*DAT_007947e4 + 0x25c))();
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  if (((*(int *)(param_1 + 0x1c0) == 0) ||
      (cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff), cVar1 == '\0')) ||
     (cVar1 = FUN_00635cb0(8), cVar1 != '\0')) {
    uVar3 = FUN_006375b0();
    *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  }
  if (*(int *)(param_1 + 0x1c0) == 0) {
    FUN_005e9f20("curPlayer","..\\Casino\\casinodialogs.cpp",0x29c);
  }
  iVar4 = FUN_005d6bd0();
  iVar5 = FUN_005d5a50();
  uVar2 = FUN_005d6cd0();
  *(undefined1 *)(param_1 + 0x1bc) = uVar2;
  iVar6 = FUN_005d52e0();
  local_209 = *(char *)(iVar6 + 0x29);
  if (((local_209 == '\0') || (iVar5 < iVar4)) || (cVar1 = FUN_005da830(), cVar1 != '\0')) {
    local_32c = 0;
  }
  else {
    local_32c = 1;
  }
  *(undefined1 *)(param_1 + 0x1bd) = local_32c;
  local_290 = FUN_005d6bd0();
  FUN_0064c8d0(local_290,local_28c,local_274,1,1,1);
  if (local_209 == '\0') {
    if (*(char *)(param_1 + 0x1bc) == '\0') {
      pcVar7 = (char *)FUN_00630f40("SID_CASINO_LOANNOTAVAILABLE");
      sprintf(local_2fc,pcVar7);
      iVar4 = FUN_0063aac0();
      pcVar7 = (char *)FUN_00630f40("SID_CASINO_LOANNOTAVAILABLE_MESSAGE_FORMAT",iVar4 + 4);
      sprintf(local_204,pcVar7);
    }
    else {
      pcVar7 = (char *)FUN_00630f40("SID_CASINO_LOANAVAILABLE");
      sprintf(local_2fc,pcVar7);
      iVar4 = FUN_0063aac0();
      sprintf(local_204,PTR_s_Welcome___s__The_casino_would_li_0075d490,iVar4 + 4,local_274);
    }
  }
  else if (*(char *)(param_1 + 0x1bd) == '\0') {
    pcVar7 = (char *)FUN_00630f40("SID_CASINO_UNABLETOPAYOFFLOAN");
    sprintf(local_2fc,pcVar7);
    iVar4 = FUN_0063aac0();
    pcVar7 = (char *)FUN_00630f40("SID_CASINO_UNABLETOPAYOFFLOANMESSAGE_FORMAT",iVar4 + 4,local_274)
    ;
    sprintf(local_204,pcVar7);
  }
  else {
    pcVar7 = (char *)FUN_00630f40("SID_CASINO_PAYOFFLOAN");
    sprintf(local_2fc,pcVar7);
    iVar4 = FUN_0063aac0();
    pcVar7 = (char *)FUN_00630f40("SID_CASINO_PAYOFFLOANMESSAGE_FORMAT",iVar4 + 4);
    sprintf(local_204,pcVar7);
  }
  FUN_005fa5b0(0,0,local_2fc,0x48,0xaa,0x22,199,0x32,3,5,0xffffffff);
  FUN_005fa5b0(0,1,local_204,0x1f,0xf2,400,199,0x4a,3,5,0xffffffff);
  for (local_208 = 0; local_208 < 2; local_208 = local_208 + 1) {
    if (((local_208 != 0) || (*(char *)(param_1 + 0x1bc) != '\0')) ||
       (*(char *)(param_1 + 0x1bd) != '\0')) {
      iVar4 = (-(uint)(local_208 != 1) & 0xffffffe5) + 0x1b;
      uVar11 = 0xffffffff;
      uVar10 = 0x4a;
      uVar9 = 0x4b;
      uVar8 = 0x48;
      uVar3 = FUN_00630f40(local_288[local_208],0x48,0x4b,0x4a,0xffffffff,iVar4);
      local_288[4] = (char *)FUN_005f9de0(0,local_208,(local_208 != 1) + 0x30d4de,
                                          local_288[local_208 + 2],0x11c,1,uVar3,uVar8,uVar9,uVar10,
                                          uVar11,iVar4);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

