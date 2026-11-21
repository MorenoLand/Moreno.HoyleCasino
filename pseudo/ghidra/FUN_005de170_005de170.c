// FUN_005de170  005de170

void __fastcall FUN_005de170(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar1 <= local_8) break;
    uVar2 = FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0(param_1,uVar2);
    if (*piVar3 != 0) {
      (**(code **)(*DAT_007947e4 + 0x290))(local_8);
    }
    local_8 = local_8 + 1;
  }
  return;
}

