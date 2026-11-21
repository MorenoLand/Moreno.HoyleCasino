// FUN_00568ed0  00568ed0

void __thiscall FUN_00568ed0(int param_1,undefined2 param_2)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (4 < local_8) {
      return;
    }
    if (*(short *)(param_1 + 0x1a + local_8 * 2) == 0) break;
    local_8 = local_8 + 1;
  }
  *(undefined2 *)(param_1 + 0x1a + local_8 * 2) = param_2;
  return;
}

