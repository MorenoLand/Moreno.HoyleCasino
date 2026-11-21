// FUN_00569460  00569460

void __thiscall FUN_00569460(int param_1,short param_2)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (4 < local_c) {
      return;
    }
    if (*(short *)(param_1 + 0x24 + local_c * 2) == param_2) break;
    local_c = local_c + 1;
  }
  for (local_10 = local_c; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined2 *)(param_1 + 0x24 + local_10 * 2) = *(undefined2 *)(param_1 + 0x26 + local_10 * 2);
  }
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}

