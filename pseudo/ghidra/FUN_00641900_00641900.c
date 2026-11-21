// FUN_00641900  00641900

void FUN_00641900(int param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + local_8 * 2) = 0;
  }
  return;
}

