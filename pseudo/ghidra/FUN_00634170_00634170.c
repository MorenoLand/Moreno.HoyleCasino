// FUN_00634170  00634170

int __fastcall FUN_00634170(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = FUN_00636610();
    if (iVar2 <= local_8) {
      return -1;
    }
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x58) + local_8 * 4);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if (cVar1 != '\0') break;
    local_8 = local_8 + 1;
  }
  cVar1 = FUN_00648ae0(cVar1,param_1,uVar4);
  if (cVar1 != '\0') {
    return local_8;
  }
  return -1;
}

