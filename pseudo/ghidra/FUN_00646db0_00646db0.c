// FUN_00646db0  00646db0

undefined4 __thiscall FUN_00646db0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x84))(param_2), cVar1 != '\0')) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x84))(param_2), cVar1 != '\0')) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x14) != 0) && (cVar1 = FUN_00664410(param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

