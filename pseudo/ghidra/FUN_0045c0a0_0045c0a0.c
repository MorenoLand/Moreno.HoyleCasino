// FUN_0045c0a0  0045c0a0

undefined4 __thiscall FUN_0045c0a0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = FUN_005df7b0(0xffffffff);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 9) == '\0')) {
    FUN_005dcb00(param_2);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_004613b0(param_2), cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 9) = 1;
      FUN_0057c140();
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(DAT_00790738 + param_2 + 0xe5) = 1;
  FUN_0045fde0(param_2);
  *(undefined4 *)(DAT_00790738 + 0x118) = 0xffffffff;
  *(undefined4 *)(DAT_00790738 + 0x11c) = 0xffffffff;
  *(undefined4 *)(DAT_00790738 + 0x120) = 0xffffffff;
  FUN_005dcb00(param_2);
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined1 *)(DAT_00790738 + param_2 + 0xe0) = 0;
  }
  return 1;
}

