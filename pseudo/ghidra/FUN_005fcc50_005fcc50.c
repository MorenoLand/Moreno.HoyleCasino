// FUN_005fcc50  005fcc50

undefined4 FUN_005fcc50(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_005feda0();
    if (iVar2 <= local_8) {
      return 1;
    }
    piVar3 = (int *)FUN_005ff080(local_8);
    cVar1 = (**(code **)(*piVar3 + 0x84))(param_1);
    if (cVar1 != '\0') {
      return 0;
    }
    piVar3 = (int *)FUN_005fb2b0(0);
    cVar1 = (**(code **)(*piVar3 + 0x84))(param_1);
    if (cVar1 != '\0') {
      return 0;
    }
    piVar3 = (int *)FUN_005fb2b0(1);
    cVar1 = (**(code **)(*piVar3 + 0x84))(param_1);
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  return 0;
}

