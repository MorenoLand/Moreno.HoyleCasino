// FUN_00644ed0  00644ed0

uint __thiscall FUN_00644ed0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint in_EAX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x3ff < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    if ((*(int *)(param_1 + 0x194 + local_8 * 4) != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x194 + local_8 * 4) + 0x84))(param_2),
       cVar1 != '\0')) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

