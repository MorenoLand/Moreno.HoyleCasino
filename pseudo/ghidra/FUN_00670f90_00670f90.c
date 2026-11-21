// FUN_00670f90  00670f90

void __thiscall FUN_00670f90(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*DAT_0162ee84 + 0xdc))();
  if (((cVar1 != '\0') && (cVar1 = FUN_006378e0(), cVar1 != '\0')) &&
     (((cVar1 = FUN_005f56a0(param_2), cVar1 != '\0' ||
       ((cVar1 = (**(code **)(**(int **)(param_1 + 0x188) + 0x84))(param_2), cVar1 != '\0' ||
        (cVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x84))(param_2), cVar1 != '\0')))) ||
      ((cVar1 = (**(code **)(**(int **)(param_1 + 0x194) + 0x84))(param_2), cVar1 != '\0' &&
       (0x23a < *(int *)(param_2 + 0xc))))))) {
    (**(code **)(**(int **)(param_1 + 0x198) + 0x74))();
    return;
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    (**(code **)(**(int **)(param_1 + 0x198) + 0x70))();
  }
  return;
}

