// FUN_00605900  00605900

undefined1 __thiscall FUN_00605900(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_006050d0();
  if (((cVar1 != '\0') &&
      (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x178) + 0x48) + 0x84))(param_2),
      cVar1 == '\0')) && (cVar1 = FUN_005f4b60(param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

