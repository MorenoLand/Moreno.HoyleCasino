// FUN_0051c090  0051c090

void __thiscall FUN_0051c090(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char local_48 [52];
  uint local_14;
  undefined *local_10;
  int local_c;
  undefined **local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  puVar1 = (&PTR_s_SID_POKERTOURNAMENT_TNAME_7CARDS_00721924)[param_2];
  iVar2 = FUN_0051c580();
  local_c = 0;
  local_8 = &PTR_s_Texas_Hold_em_007207e8 + iVar2 * 0x60;
  local_10 = &DAT_007207ec +
             (param_2 + -1) * 0x10 + *(int *)(param_1 + 0x1c0) * 0x30 + iVar2 * 0x180;
  if (iVar2 == 4) {
    if (param_2 == 1) {
      pcVar3 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_OMAHAHOLDEMHILO");
      sprintf(local_48,pcVar3);
    }
    else if (param_2 == 2) {
      pcVar3 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_7CARDSTUD");
      sprintf(local_48,pcVar3);
    }
    else if (param_2 == 3) {
      pcVar3 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_TEXASHOLDEM");
      sprintf(local_48,pcVar3);
    }
  }
  else {
    sprintf(local_48,"%s",*local_8);
  }
  piVar4 = (int *)FUN_005fb550(puVar1 + 1);
  (**(code **)(*piVar4 + 0xb4))(local_48);
  local_c = 7;
  iVar2 = *(int *)(local_10 + 4);
  FUN_0051c300(1,7,iVar2,iVar2 << 1,puVar1,7);
  iVar5 = local_c + 1;
  local_c = local_c + 7;
  iVar2 = iVar2 + *(int *)(local_10 + 8);
  FUN_0051c300(iVar5,local_c,iVar2,iVar2 * 2,puVar1,10);
  if (param_2 != 1) {
    iVar5 = local_c + 1;
    local_c = local_c + 7;
    iVar2 = iVar2 + *(int *)(local_10 + 8);
    FUN_0051c300(iVar5,local_c,iVar2,iVar2 * 2,puVar1,0xd);
    iVar5 = local_c + 1;
    if (param_2 == 2) {
      local_c = local_c + 7;
    }
    else {
      local_c = 100;
    }
    FUN_0051c300(iVar5,local_c,iVar2 + *(int *)(local_10 + 8),(iVar2 + *(int *)(local_10 + 8)) * 2,
                 puVar1,0x10);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

