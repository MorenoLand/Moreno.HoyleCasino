// FUN_0055e350  0055e350

undefined4 __thiscall FUN_0055e350(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_00559380();
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (((iVar1 == param_3) ||
        ((iVar1 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar1 == 0xe &&
         (param_3 == 1)))) &&
       (iVar1 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_8 * 2)), iVar1 == param_2)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

