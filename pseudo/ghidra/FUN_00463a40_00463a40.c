// FUN_00463a40  00463a40

int FUN_00463a40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < param_3; local_8 = local_8 + 1) {
    iVar1 = FUN_00641280(CONCAT22((short)((uint)local_8 >> 0x10),
                                  *(undefined2 *)(param_1 + local_8 * 2)));
    if (iVar1 == param_2) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

