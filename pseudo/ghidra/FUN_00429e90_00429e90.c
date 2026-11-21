// FUN_00429e90  00429e90

void __fastcall FUN_00429e90(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00429f20(param_1);
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (*(int *)(DAT_007906d4 + 0xae0) == -1) {
        FUN_0042a050(local_8,local_c);
      }
      else if (*(int *)(DAT_007906d4 + 0xae0) == local_c) {
        FUN_0042a050(local_8,local_c);
      }
    }
  }
  return;
}

