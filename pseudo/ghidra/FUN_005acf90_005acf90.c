// FUN_005acf90  005acf90

void __thiscall FUN_005acf90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = FUN_005dcb00(param_2);
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 == '\0') {
      uVar1 = FUN_005a6bb0(param_2);
      FUN_005b73e0(param_2,uVar1);
      if ((char)uVar1 != '\0') {
        FUN_005b7310(0,param_2);
      }
      (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
    }
    else {
      FUN_005a8610(cVar3,param_1,uVar1);
    }
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_005b7310(8,4);
  (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
  return;
}

