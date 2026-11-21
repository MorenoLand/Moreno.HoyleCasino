// FUN_00419a10  00419a10

void __thiscall FUN_00419a10(int param_1,int param_2)

{
  int local_10;
  int local_8;
  
  if (param_2 == -1) {
    local_8 = -1;
  }
  else {
    if (param_2 == 4) {
      local_10 = 0;
    }
    else {
      local_10 = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
    }
    local_8 = local_10;
  }
  *(undefined1 *)(param_1 + 0x114 + param_2 * 0x118 + local_8) = 1;
  do {
    if (local_8 < 0) {
      *(undefined1 *)(param_1 + 0x119 + param_2 * 0x118) = 0xff;
      return;
    }
    local_8 = local_8 + -1;
  } while (*(char *)(param_1 + 0x114 + param_2 * 0x118 + local_8) != '\0');
  *(undefined1 *)(param_1 + 0x119 + param_2 * 0x118) = (undefined1)local_8;
  return;
}

