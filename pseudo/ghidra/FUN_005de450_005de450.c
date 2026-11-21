// FUN_005de450  005de450

int FUN_005de450(char *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) {
      return local_c;
    }
    FUN_005dcb00(local_8);
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_005de4cf:
      bVar1 = true;
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_005de4cf;
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005dcb00(local_8);
      iVar2 = FUN_0063aac0();
      iVar2 = strcmp(param_1,(char *)(iVar2 + 4));
      if (iVar2 == 0) {
        local_c = local_c + 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

