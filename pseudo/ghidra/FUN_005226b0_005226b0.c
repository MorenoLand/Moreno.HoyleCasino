// FUN_005226b0  005226b0

void __fastcall FUN_005226b0(undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005228d0(param_1);
  for (local_8 = 0; local_8 < 0xa1; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (*(int *)(DAT_00793374 + 0xdb8) == -1) {
        FUN_00522800(local_8,local_c,0);
      }
      else if (*(int *)(DAT_00793374 + 0xdb8) == local_c) {
        FUN_00522800(local_8,local_c,0);
      }
    }
  }
  return;
}

