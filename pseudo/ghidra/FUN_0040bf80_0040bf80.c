// FUN_0040bf80  0040bf80

int FUN_0040bf80(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_c;
  
  if (param_1 == -1) {
    local_c = -1;
  }
  else {
    if (param_1 == 4) {
      local_1c = 0;
    }
    else {
      local_1c = (int)*(char *)(DAT_00790324 + 0x119 + param_1 * 0x118);
    }
    local_c = local_1c;
  }
  iVar2 = FUN_00419530(param_1,local_c);
  iVar3 = FUN_004194c0(param_1);
  if (((iVar2 == 2) && (cVar1 = FUN_0041afe0(param_1,local_c), cVar1 != '\0')) &&
     (cVar1 = FUN_00418600(), iVar3 < cVar1 + 1)) {
    iVar3 = FUN_00419780(param_1,local_c,0);
    if (iVar3 == 1) {
      cVar1 = FUN_0041ade0(param_1,local_c);
      if (cVar1 != '\0') {
        return 0x1e;
      }
      if (*(char *)(DAT_00790324 + 0x118 + param_1 * 0x118) != '\0') {
        return 0;
      }
      return 0xd;
    }
    iVar3 = FUN_004197d0(param_1,local_c);
    cVar1 = FUN_0041af20(param_1);
    if (cVar1 != '\0') {
      return iVar3 / 2 + 0x13;
    }
  }
  if (*(char *)(DAT_00790324 + 0x118 + param_1 * 0x118) != '\0') {
    return 0;
  }
  iVar3 = FUN_004197d0(param_1,local_c);
  if ((iVar3 == 0x15) || (iVar3 = FUN_004198d0(param_1,local_c), iVar3 == 0x15)) {
    return 0;
  }
  iVar3 = FUN_004197d0(param_1,local_c);
  if (iVar3 < 0x15) {
    iVar3 = FUN_004197d0(param_1,local_c);
    iVar4 = FUN_004198d0(param_1,local_c);
    if (iVar3 != iVar4) {
      iVar2 = FUN_004197d0(param_1,local_c);
      if (iVar2 != 0xc) {
        iVar2 = FUN_004197d0(param_1,local_c);
        return iVar2;
      }
      return 0xd;
    }
  }
  iVar3 = FUN_004197d0(param_1,local_c);
  if (iVar3 < 8) {
    return 1;
  }
  if ((iVar2 == 2) &&
     (((iVar3 = FUN_00419780(param_1,local_c,0), iVar3 == 5 &&
       (iVar3 = FUN_00419780(param_1,local_c,1), iVar3 == 3)) ||
      ((iVar3 = FUN_00419780(param_1,local_c,0), iVar3 == 3 &&
       (iVar3 = FUN_00419780(param_1,local_c,1), iVar3 == 5)))))) {
    return 2;
  }
  if ((iVar2 == 2) &&
     (((iVar2 = FUN_00419780(param_1,local_c,0), iVar2 == 5 &&
       (iVar2 = FUN_00419780(param_1,local_c,1), iVar2 == 2)) ||
      ((iVar2 = FUN_00419780(param_1,local_c,0), iVar2 == 2 &&
       (iVar2 = FUN_00419780(param_1,local_c,1), iVar2 == 6)))))) {
    return 3;
  }
  iVar2 = FUN_004197d0(param_1,local_c);
  if (iVar2 < 0x11) {
    iVar2 = FUN_004197d0(param_1,local_c);
    return iVar2 + -4;
  }
  iVar2 = FUN_004197d0(param_1,local_c);
  if (iVar2 < 0x16) {
    return 0;
  }
  iVar2 = FUN_004198d0(param_1,local_c);
  if (iVar2 < 8) {
    return 1;
  }
  iVar2 = FUN_004198d0(param_1,local_c);
  if (iVar2 < 0x11) {
    iVar2 = FUN_004198d0(param_1,local_c);
    return iVar2 + -4;
  }
  return 0;
}

