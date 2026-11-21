// FUN_00519e40  00519e40

void FUN_00519e40(int param_1,int param_2,int param_3)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined4 *)(param_3 + local_8 * 4) =
         *(undefined4 *)(&DAT_007208dc + local_8 * 4 + param_2 * 0x1c + param_1 * 0x180);
  }
  return;
}

