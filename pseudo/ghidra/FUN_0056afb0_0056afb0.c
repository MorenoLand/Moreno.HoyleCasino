// FUN_0056afb0  0056afb0

undefined4 __thiscall FUN_0056afb0(int param_1,int param_2)

{
  short sVar1;
  undefined2 extraout_var;
  int local_4d0;
  int local_4c8;
  int aiStack_4c4 [301];
  int local_10;
  int local_c;
  int local_8;
  
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    for (local_4d0 = 0; local_4d0 < 0x3c; local_4d0 = local_4d0 + 1) {
      aiStack_4c4[local_4d0 * 5 + local_c] = 0;
    }
  }
  local_c = 0;
  do {
    if (4 < local_c) {
      return 1;
    }
    sVar1 = *(short *)(param_1 + 0xf6 + param_2 * 10 + local_c * 2);
    if (sVar1 != 0) {
      local_4c8 = FUN_00641280(CONCAT22((short)((uint)local_c >> 0x10),sVar1));
      local_10 = FUN_00641290(CONCAT22(extraout_var,sVar1));
      if (local_4c8 < 0) {
        local_4c8 = 0;
      }
      if (0x3b < local_4c8) {
        local_4c8 = 0x3b;
      }
      if (local_10 < 0) {
        local_10 = 0;
      }
      if (4 < local_10) {
        local_10 = 4;
      }
      local_8 = aiStack_4c4[local_4c8 * 5 + local_10];
      if (0 < local_8) {
        return 0;
      }
      aiStack_4c4[local_4c8 * 5 + local_10] = aiStack_4c4[local_4c8 * 5 + local_10] + 1;
    }
    local_c = local_c + 1;
  } while( true );
}

