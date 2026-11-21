// FUN_00646380  00646380

void __thiscall FUN_00646380(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0063aac0();
  if ((*piVar2 == 1) && (*(int *)(*(int *)(param_1 + 4) + 8) == 5)) {
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))(param_2 + 1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))(param_2 + -1);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(param_2);
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 4) != 0)) {
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_00664480(param_2);
    }
  }
  if ((*(char *)(param_1 + 0x2a) != '\0') &&
     ((**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(param_2 + 200), *(int *)(param_1 + 0x1c) != 0
     )) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x6c))(param_2 + 0xc9);
  }
  return;
}

