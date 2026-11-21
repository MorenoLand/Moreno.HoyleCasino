// FUN_005da040  005da040

void FUN_005da040(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_007947e0 + 0x168))();
    if (iVar2 <= local_8) break;
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x164))(local_8);
    cVar1 = FUN_006367d0(uVar3);
    if (cVar1 == '\0') {
      iVar2 = local_8 + 0x186f9;
      FUN_005f2300(param_1);
      piVar4 = (int *)FUN_005ff060(iVar2);
      (**(code **)(*piVar4 + 0xcc))();
    }
    else {
      iVar2 = local_8 + 0x186f9;
      FUN_005f2300(param_1);
      piVar4 = (int *)FUN_005ff060(iVar2);
      (**(code **)(*piVar4 + 0xd0))();
    }
    local_8 = local_8 + 1;
  }
  return;
}

