// FUN_0063dea0  0063dea0

undefined4 FUN_0063dea0(char *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return 0;
    }
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar2 = FUN_0063aac0();
      iVar2 = strcmp((char *)(iVar2 + 4),param_1);
      if (iVar2 == 0) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

