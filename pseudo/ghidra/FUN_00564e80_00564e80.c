// FUN_00564e80  00564e80

void __fastcall FUN_00564e80(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x70))();
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      (**(code **)(**(int **)(param_1 + 200 + local_8 * 0x14 + local_c * 4) + 0x70))();
    }
  }
  return;
}

