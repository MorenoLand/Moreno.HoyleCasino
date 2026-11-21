// FUN_005de320  005de320

int FUN_005de320(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = 1;
  if ((param_1 < 0) || (iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), iVar2 <= param_1)) {
    local_c = 0;
  }
  else {
    for (local_8 = 0; iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar2;
        local_8 = local_8 + 1) {
      if (local_8 != param_1) {
        FUN_005dcb00(local_8);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_005dcb00(local_8);
          iVar2 = FUN_0063aac0();
          FUN_005dcb00(param_1);
          iVar4 = FUN_0063aac0();
          iVar2 = strcmp((char *)(iVar4 + 4),(char *)(iVar2 + 4));
          if (iVar2 == 0) {
            local_c = local_c + 1;
          }
        }
      }
    }
  }
  return local_c;
}

