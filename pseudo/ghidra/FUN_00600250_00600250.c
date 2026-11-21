// FUN_00600250  00600250

undefined4 __thiscall FUN_00600250(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 400) != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 400) + 0x84))(param_2), cVar1 != '\0')) {
    return 1;
  }
  uVar2 = FUN_005eb6d0(param_2);
  return uVar2;
}

