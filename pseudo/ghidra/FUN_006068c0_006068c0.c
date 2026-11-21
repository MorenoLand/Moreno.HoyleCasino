// FUN_006068c0  006068c0

void FUN_006068c0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_8;
  
  FUN_005f5440();
  local_8 = 0;
  uVar3 = extraout_var;
  while( true ) {
    iVar1 = FUN_006063e0();
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_00606350(local_8);
    (**(code **)(*piVar2 + 0x74))(piVar2,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

