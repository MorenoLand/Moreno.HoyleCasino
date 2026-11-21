// FUN_00432b70  00432b70

undefined4 FUN_00432b70(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x4b < local_8) {
      return 0;
    }
    if (*(int *)(*(int *)(DAT_007906dc + 0x14 + local_8 * 4) + 0x178) == param_1) break;
    local_8 = local_8 + 1;
  }
  return *(undefined4 *)(DAT_007906dc + 0x14 + local_8 * 4);
}

