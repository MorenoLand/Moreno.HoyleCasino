// FUN_0042a820  0042a820

void __thiscall FUN_0042a820(int param_1,int param_2)

{
  int iVar1;
  CPane *this;
  char *pcVar2;
  undefined4 uVar3;
  CSize *pCVar4;
  undefined1 *puVar5;
  undefined4 local_6c;
  int local_68;
  undefined1 local_50 [32];
  char local_30 [32];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pCVar4 = (CSize *)&local_c;
  this = (CPane *)FUN_005dcb00(param_2);
  CPane::GetMinSize(this,pCVar4);
  if ((local_c == 0) && (local_8 == 0)) {
    FUN_006311e0(0,local_50);
  }
  else {
    if (local_c < 0) {
      local_68 = -local_8;
      iVar1 = -local_c;
    }
    else {
      local_68 = local_8;
      iVar1 = local_c;
    }
    FUN_0064c8d0(iVar1,local_68,local_50,1,1,1);
  }
  if (local_c == 0) {
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_NET_COLON");
    strcpy(local_30,pcVar2);
  }
  else {
    if (local_c < 1) {
      local_6c = FUN_00630f40("SID_GENERIC_LOST");
    }
    else {
      local_6c = FUN_00630f40("SID_GENERIC_WON");
    }
    pcVar2 = (char *)FUN_00630f40("SID_CRAPS_JUST_FORMAT",local_6c);
    sprintf(local_30,pcVar2);
  }
  if (param_2 == *(int *)(DAT_007906d4 + 0xab4)) {
    (**(code **)(**(int **)(param_1 + 0x160) + 0x70))();
  }
  puVar5 = local_50;
  pcVar2 = local_30;
  uVar3 = *(undefined4 *)(DAT_0162ee80 + 4);
  FUN_005dcb00(param_2,uVar3,pcVar2,puVar5);
  FUN_005d67d0(uVar3,pcVar2,puVar5);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

