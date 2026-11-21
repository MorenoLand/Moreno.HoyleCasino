// FUN_00670ed0  00670ed0

undefined4 __thiscall FUN_00670ed0(int param_1,int param_2)

{
  char cVar1;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 0x18) == 3) {
    local_c = 1;
  }
  else if ((*(char *)(param_2 + 4) == '\0') &&
          (((cVar1 = FUN_005f56a0(param_2), cVar1 != '\0' ||
            (cVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x84))(param_2), cVar1 != '\0')) ||
           (cVar1 = (**(code **)(**(int **)(param_1 + 0x194) + 0x84))(param_2), cVar1 != '\0')))) {
    if (((*(uint *)(param_2 + 0x1c) & 8) == 0) || (*(int *)(param_2 + 0x18) != 2)) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
  }
  else {
    local_c = 0;
  }
  return local_c;
}

