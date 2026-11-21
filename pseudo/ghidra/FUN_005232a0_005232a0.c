// FUN_005232a0  005232a0

void FUN_005232a0(undefined4 param_1)

{
  CPane *this;
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  CSize *pCVar5;
  undefined4 local_68;
  int local_64;
  undefined1 local_50 [32];
  char local_30 [32];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  pCVar5 = (CSize *)&local_c;
  this = (CPane *)FUN_005dcb00(param_1);
  CPane::GetMinSize(this,pCVar5);
  if ((local_c == 0) && (local_8 == 0)) {
    FUN_006311e0(0,local_50);
  }
  else {
    if (local_c < 0) {
      local_64 = -local_8;
      iVar2 = -local_c;
    }
    else {
      local_64 = local_8;
      iVar2 = local_c;
    }
    FUN_0064c8d0(iVar2,local_64,local_50,1,1,1);
  }
  if (local_c == 0) {
    pcVar1 = (char *)FUN_00630f40("SID_ROULETTE_NET_COLON");
    strcpy(local_30,pcVar1);
  }
  else {
    if (local_c < 1) {
      local_68 = FUN_00630f40("SID_ROULETTE_LOST");
    }
    else {
      local_68 = FUN_00630f40("SID_ROULETTE_WON");
    }
    pcVar1 = (char *)FUN_00630f40("SID_ROULETTE_JUST_FORMAT",local_68);
    sprintf(local_30,pcVar1);
  }
  iVar2 = FUN_005dcb00(param_1);
  if (*(int *)(iVar2 + 0x4cc) < 1) {
    iVar2 = FUN_005dcb00(param_1);
    *(undefined4 *)(iVar2 + 0x4a8) = 0;
  }
  else {
    FUN_005dcb00(param_1);
    FUN_005d7540();
  }
  (**(code **)(**(int **)(DAT_00793370 + 4) + 4))(1);
  puVar4 = local_50;
  pcVar1 = local_30;
  uVar3 = *(undefined4 *)(DAT_00793370 + 4);
  FUN_005dcb00(param_1,uVar3,pcVar1,puVar4);
  FUN_005d67d0(uVar3,pcVar1,puVar4);
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

