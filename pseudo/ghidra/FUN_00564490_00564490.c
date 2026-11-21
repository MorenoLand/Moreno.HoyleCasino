// FUN_00564490  00564490

void __fastcall FUN_00564490(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x31; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + local_8 + 0x564) == '\0') {
      FUN_005eb5d0(0x32);
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        FUN_005eb5d0(0x32);
      }
    }
    else {
      (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x74))();
      FUN_005eb5d0(0xff);
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        (**(code **)(**(int **)(param_1 + 200 + local_8 * 0x14 + local_c * 4) + 0x74))();
        FUN_005eb5d0(0xff);
      }
    }
  }
  return;
}

