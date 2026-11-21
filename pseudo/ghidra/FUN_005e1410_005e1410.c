// FUN_005e1410  005e1410

void FUN_005e1410(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_1c [8];
  undefined8 local_14;
  int *local_c;
  undefined4 *local_8;
  
  FUN_005dcb00(param_1);
  local_c = (int *)FUN_005d52e0();
  FUN_005dcb00(param_1);
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_c[0xb] != 0)) {
    uVar6 = 8;
    FUN_005dcb00(param_1,8);
    local_8 = (undefined4 *)FUN_0063aae0(uVar6);
    local_14 = FUN_0064c8a0(local_c[0xb],0);
    puVar4 = (undefined4 *)FUN_0064c5c0(local_1c,local_14);
    uVar6 = puVar4[1];
    *local_8 = *puVar4;
    local_8[1] = uVar6;
    *local_c = *local_c + local_c[0xb];
    local_c[0xb] = 0;
    FUN_005dcb00(param_1);
    FUN_0063b0a0();
    uVar6 = 0;
    FUN_005dcb00(param_1,0);
    cVar2 = FUN_005d6ee0(uVar6);
    if (cVar2 != '\0') {
      FUN_005dcb00(param_1);
      iVar5 = FUN_0063aac0();
      FUN_005dc520(iVar5 + 4);
    }
    FUN_005dcb00(param_1);
    cVar2 = FUN_005d6f90();
    if (cVar2 != '\0') {
      uVar6 = FUN_005dcb00(param_1);
      FUN_005dc3e0(uVar6);
    }
    if (DAT_00793584 != 0) {
      FUN_00589290();
    }
    FUN_005d8f90();
  }
  return;
}

