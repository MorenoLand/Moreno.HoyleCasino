// FUN_00563a50  00563a50

void __fastcall FUN_00563a50(int param_1)

{
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 8 + local_8 * 4) + 0x74))();
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_00566a20();
  }
  else {
    FUN_005669c0();
  }
  return;
}

