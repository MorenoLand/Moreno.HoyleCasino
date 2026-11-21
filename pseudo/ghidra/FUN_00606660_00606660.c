// FUN_00606660  00606660

void FUN_00606660(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_006063e0();
    if (iVar1 <= local_8) break;
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_00606350(local_8);
    (**(code **)(*piVar2 + 0xcc))(piVar2,uVar3);
    local_8 = local_8 + 1;
  }
  return;
}

