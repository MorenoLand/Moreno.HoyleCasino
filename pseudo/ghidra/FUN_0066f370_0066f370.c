// FUN_0066f370  0066f370

void FUN_0066f370(int param_1)

{
  char cVar1;
  int *piVar2;
  
  if (param_1 == 0) goto LAB_0066f3d1;
  if (*(char *)(DAT_0162ee80 + 0x48) != '\0') {
    if (*(char *)(DAT_0162ee80 + 0x48) == '\0') goto LAB_0066f3d1;
    piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe8))();
    cVar1 = (**(code **)(*piVar2 + 0xdc))();
    if (cVar1 != '\0') goto LAB_0066f3d1;
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_0066f3d1:
  FUN_0064fa40();
  return;
}

