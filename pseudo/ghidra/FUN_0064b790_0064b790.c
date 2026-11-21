// FUN_0064b790  0064b790

void __thiscall FUN_0064b790(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return;
    }
    if ((*(int *)(param_1 + 0x198 + local_8 * 4) != 0) && (iVar2 = FUN_005eafc0(), iVar2 == param_2)
       ) break;
    local_8 = local_8 + 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x198 + local_8 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 *)(param_1 + 0x198 + local_8 * 4) = 0;
  return;
}

