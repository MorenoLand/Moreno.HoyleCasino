// FUN_0051e480  0051e480

void __fastcall FUN_0051e480(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 local_e0 [52];
  char local_ac [108];
  undefined1 local_40 [52];
  uint local_c;
  undefined **local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0051e5f0();
  local_8 = &PTR_s_Texas_Hold_em_007207e8 + iVar1 * 0x60;
  FUN_006311e0(*(undefined4 *)(&DAT_007208dc + *(int *)(param_1 + 0x1c4) * 0x1c + iVar1 * 0x180),
               local_e0);
  pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_GRANDPRIZE_FORMAT",local_e0);
  sprintf(local_ac,pcVar2);
  piVar3 = (int *)FUN_005fb550(3);
  (**(code **)(*piVar3 + 0xb4))(local_ac);
  FUN_006311e0(local_8[*(int *)(param_1 + 0x1c4) * 7 + 0x3e],local_e0);
  FUN_006311e0(local_8[*(int *)(param_1 + 0x1c4) * 7 + 0x3f],local_40);
  pcVar2 = (char *)FUN_00630f40("SID_POKERTOURNAMENT_2ND3RDPRIZE_FORMAT",local_e0,local_40);
  sprintf(local_ac,pcVar2);
  piVar3 = (int *)FUN_005fb550(4);
  (**(code **)(*piVar3 + 0xb4))(local_ac);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

