// FUN_0040d6b0  0040d6b0

void FUN_0040d6b0(char param_1)

{
  int iVar1;
  char cVar2;
  int local_14;
  int local_c;
  
  iVar1 = *(int *)(DAT_00790324 + 0x4d0);
  if (iVar1 == -1) {
    local_c = -1;
  }
  else {
    if (iVar1 == 4) {
      local_14 = 0;
    }
    else {
      local_14 = (int)*(char *)(DAT_00790324 + 0x119 + iVar1 * 0x118);
    }
    local_c = local_14;
  }
  if (param_1 == '\0') {
    FUN_005f2ba0(0x30d7ea);
    FUN_005f2ba0(0x30d7eb);
    FUN_005f2ba0(0x30d7ec);
    FUN_005f2ba0(0x30d7ed);
    FUN_005f2ba0(0x30d7ee);
  }
  else {
    FUN_005f2b20(0x30d7ea,1);
    FUN_005f2b20(0x30d7eb,1);
    FUN_005f2b20(0x30d7ec,1);
    FUN_005f2b20(0x30d7ed,1);
    FUN_005f2b20(0x30d7ee,1);
    cVar2 = FUN_0041a960(iVar1);
    if (cVar2 == '\0') {
      FUN_005f2ba0(0x30d7ec);
    }
    cVar2 = FUN_0041ade0(iVar1,local_c);
    if (cVar2 == '\0') {
      FUN_005f2ba0(0x30d7ed);
    }
    cVar2 = FUN_0041aec0(iVar1);
    if (cVar2 == '\0') {
      FUN_005f2ba0(0x30d7ee);
    }
  }
  return;
}

