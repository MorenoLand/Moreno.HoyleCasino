// FUN_00557a30  00557a30

void __thiscall FUN_00557a30(int param_1,undefined2 param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return;
    }
    if (*(short *)(param_1 + 0x18 + local_8 * 2) == 0) break;
    local_8 = local_8 + 1;
  }
  *(undefined2 *)(param_1 + 0x18 + local_8 * 2) = param_2;
  return;
}

