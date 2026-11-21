// FUN_006369b0  006369b0

int FUN_006369b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  if (param_1 != (char *)0x0) {
    for (local_8 = 0; iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar2;
        local_8 = local_8 + 1) {
      cVar1 = FUN_00638f50(local_8);
      if (cVar1 != '\0') {
        iVar2 = FUN_0063aac0();
        iVar2 = strcmp((char *)(iVar2 + 4),param_1);
        if (iVar2 == 0) {
          return local_8;
        }
      }
    }
  }
  return -1;
}

