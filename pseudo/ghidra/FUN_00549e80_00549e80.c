// FUN_00549e80  00549e80

int __thiscall FUN_00549e80(int param_1,int param_2,char param_3)

{
  int local_18;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = 0;
  for (local_c = (uint)(param_3 == '\0'); (int)local_c < 6; local_c = local_c + 1) {
    if (*(short *)(param_1 + 0x28 + param_2 * 0xc + local_c * 2) != 0) {
      local_18 = FUN_00641280(*(undefined2 *)(param_1 + 0x28 + param_2 * 0xc + local_c * 2));
      if (10 < local_18) {
        if (local_18 < 0xe) {
          local_18 = 10;
        }
        else if (local_18 == 0xe) {
          local_18 = 0xb;
          local_10 = local_10 + 1;
        }
      }
      local_8 = local_8 + local_18;
    }
  }
  if (0x15 < local_8) {
    local_c = 0;
    while (((int)local_c < local_10 && (local_8 = local_8 + -10, 0x15 < local_8))) {
      local_c = local_c + 1;
    }
  }
  return local_8;
}

