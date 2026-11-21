// FUN_00460b40  00460b40

void __thiscall FUN_00460b40(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  if (((param_2 != -1) && (cVar2 = FUN_00460b00(param_2), cVar2 != '\0')) &&
     (iVar3 = FUN_005dcb00(param_2), iVar3 != 0)) {
    FUN_005dcb00(param_2);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (iVar3 = FUN_005dcb00(param_2), *(char *)(iVar3 + 0x4a0) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(*DAT_00790734 + 0x290))(param_2);
      cVar2 = FUN_00460b00(param_2);
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0xc4))(param_1 + 8 + param_2 * 0x10,0,1);
        iVar3 = FUN_0045e8e0();
        if ((iVar3 == 1) && (0 < *(int *)(param_1 + 0x10 + param_2 * 0x10))) {
          (**(code **)(**(int **)(param_1 + 4) + 0xc4))(param_1 + 0x10 + param_2 * 0x10,1,1);
          *(undefined1 *)(param_1 + param_2 + 0xf4) = 1;
          if (4 < *(int *)(param_1 + 0x10 + param_2 * 0x10)) {
            *(undefined1 *)(param_1 + param_2 + 0xf9) = 1;
          }
        }
      }
      iVar3 = FUN_005dcb00(param_2);
      *(undefined1 *)(iVar3 + 0x4a0) = 1;
      FUN_004587e0();
      iVar3 = FUN_0045e8e0();
      if (iVar3 == 1) {
        FUN_005db890();
      }
      (**(code **)(*(int *)DAT_00790734[1] + 8))(1,0);
    }
  }
  return;
}

