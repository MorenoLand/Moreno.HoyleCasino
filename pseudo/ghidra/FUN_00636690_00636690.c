// FUN_00636690  00636690

int FUN_00636690(void)

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
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_0063670b:
      bVar1 = true;
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_0063670b;
      bVar1 = false;
    }
    if (bVar1) {
      local_c = local_c + 1;
    }
    local_8 = local_8 + 1;
  } while( true );
}

