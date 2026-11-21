// FUN_0040d530  0040d530

undefined1 FUN_0040d530(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 4) {
    if (((param_3 == 0) && (*(char *)(DAT_00790328 + 9) == '\0')) &&
       (iVar2 = FUN_0041a890(), iVar2 != -1)) {
      return 1;
    }
    return 0;
  }
  iVar2 = FUN_00418700();
  if (iVar2 == 1) {
    FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if (((*piVar3 == 1) && (*(char *)(DAT_00790324 + 0x10c + param_1 * 0x118 + param_2) == '\0')) &&
       ((param_3 < 2 || ((param_3 == 0 && (iVar2 = FUN_004194c0(param_1), 1 < iVar2)))))) {
      cVar1 = FUN_0041b990(param_1,param_2);
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = FUN_0041a830(param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      if (*(char *)(DAT_00790324 + 0x110 + param_1 * 0x118 + param_2) == -1) {
        return 1;
      }
      if ((*(char *)(DAT_00790324 + 0x110 + param_1 * 0x118 + param_2) == '\x05') &&
         (cVar1 = FUN_0041b830(), cVar1 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

