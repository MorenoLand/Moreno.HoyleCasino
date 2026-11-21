// FUN_00429ce0  00429ce0

void FUN_00429ce0(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (*(int *)(DAT_007906d4 + 0xae0) == -1) {
        FUN_00429e10(local_8,local_c);
        FUN_00429e50(local_8,local_c);
      }
      else if (*(int *)(DAT_007906d4 + 0xae0) != local_c) {
        FUN_00429e10(local_8,local_c);
        FUN_00429e50(local_8,local_c);
      }
    }
  }
  return;
}

