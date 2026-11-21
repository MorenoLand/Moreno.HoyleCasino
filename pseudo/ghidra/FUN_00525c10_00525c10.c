// FUN_00525c10  00525c10

undefined4 FUN_00525c10(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  iVar2 = FUN_0062fbf0(5);
  if ((-1 < param_1) && (param_1 < 4)) {
    FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    local_8 = iVar2;
    if (!bVar1) {
      do {
        local_8 = (local_8 + 1) % 5;
        if (*(char *)(DAT_00793374 + 0xc98 + param_1 * 0x28 + local_8 * 8) != '\0') {
          return *(undefined4 *)(DAT_00793374 + param_1 * 0x28 + 0xc9c + local_8 * 8);
        }
      } while (local_8 != iVar2);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

