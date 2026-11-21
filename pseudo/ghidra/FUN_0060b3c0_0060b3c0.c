// FUN_0060b3c0  0060b3c0

void FUN_0060b3c0(int param_1,int param_2,int param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    local_8 = (int)*(short *)(param_1 + local_c * 2) + (int)*(short *)(param_2 + local_c * 2);
    if (0x7fff < local_8) {
      local_8 = 0x7fff;
    }
    if (local_8 < -0x8000) {
      local_8 = -0x8000;
    }
    *(undefined2 *)(param_2 + local_c * 2) = (undefined2)local_8;
  }
  return;
}

