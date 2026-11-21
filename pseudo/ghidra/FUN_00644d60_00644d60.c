// FUN_00644d60  00644d60

void __fastcall FUN_00644d60(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0x194 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x194 + local_8 * 4) + 0x70))();
    }
    if (*(int *)(param_1 + 0x1194 + local_8 * 4) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1194 + local_8 * 4) + 0x70))();
    }
  }
  FUN_005eb5a0();
  return;
}

