// FUN_005b8370  005b8370

void __fastcall FUN_005b8370(int param_1)

{
  char cVar1;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x5c4) = 0;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      for (local_10 = 0; local_10 < 0x16; local_10 = local_10 + 1) {
        cVar1 = FUN_005b84f0(local_8,local_c,local_10);
        if (cVar1 != '\0') {
          FUN_005b3240(local_8,local_c,local_10);
        }
      }
    }
  }
  return;
}

