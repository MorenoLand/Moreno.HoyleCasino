// FUN_005d9e80  005d9e80

void FUN_005d9e80(int param_1)

{
  undefined4 local_8;
  
  *(undefined4 *)(param_1 + 0x49c) = 0;
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 0x3ac + local_8 * 4) = 0;
    *(undefined4 *)(param_1 + 0x424 + local_8 * 4) = 0;
  }
  return;
}

