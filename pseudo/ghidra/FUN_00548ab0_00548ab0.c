// FUN_00548ab0  00548ab0

void __fastcall FUN_00548ab0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      *(undefined2 *)(param_1 + 0x28 + local_8 * 0xc + local_c * 2) = 0;
    }
  }
  FUN_00543fc0();
  return;
}

