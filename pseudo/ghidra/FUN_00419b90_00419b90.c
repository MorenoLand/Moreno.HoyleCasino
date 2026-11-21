// FUN_00419b90  00419b90

void __fastcall FUN_00419b90(int param_1)

{
  char cVar1;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    cVar1 = FUN_00419470(4,0,local_8);
    if (cVar1 != '\0') {
      FUN_00419ad0(4,0,local_8);
    }
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
        cVar1 = FUN_00419470(local_8,local_10,local_c);
        if (cVar1 != '\0') {
          FUN_00419ad0(local_8,local_10,local_c);
        }
      }
    }
  }
  return;
}

