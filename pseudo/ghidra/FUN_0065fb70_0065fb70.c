// FUN_0065fb70  0065fb70

undefined4 FUN_0065fb70(char *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int local_8;
  
  piVar3 = (int *)FUN_005fb720(0);
  cVar2 = (**(code **)(*piVar3 + 0xf0))(param_1,1);
  if (cVar2 == '\0') {
    for (local_8 = 0; iVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar5;
        local_8 = local_8 + 1) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        iVar5 = FUN_0063aac0();
        iVar5 = _stricmp((char *)(iVar5 + 4),param_1);
        if (iVar5 == 0) {
          return 1;
        }
      }
    }
    if ((DAT_0163068c != 0) && (cVar2 = FUN_0063dea0(param_1), cVar2 != '\0')) {
      return 1;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

