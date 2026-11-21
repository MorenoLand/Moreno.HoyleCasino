// FUN_00549fa0  00549fa0

int __thiscall FUN_00549fa0(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 6; local_c = local_c + 1) {
    if (*(short *)(param_1 + 0x28 + param_2 * 0xc + local_c * 2) != 0) {
      local_14 = FUN_00641280(*(undefined2 *)(param_1 + 0x28 + param_2 * 0xc + local_c * 2));
      if (10 < local_14) {
        if (local_14 < 0xe) {
          local_14 = 10;
        }
        else if (local_14 == 0xe) {
          local_14 = 1;
        }
      }
      local_8 = local_8 + local_14;
    }
  }
  return local_8;
}

