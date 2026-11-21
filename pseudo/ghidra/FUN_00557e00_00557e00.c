// FUN_00557e00  00557e00

void __fastcall FUN_00557e00(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 0x18 + local_8 * 2) = *(undefined2 *)(param_1 + 0x22 + local_8 * 2);
  }
  return;
}

