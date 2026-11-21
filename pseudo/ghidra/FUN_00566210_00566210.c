// FUN_00566210  00566210

void __fastcall FUN_00566210(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = FUN_00566380();
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + local_8 + 0x38) == '\0') {
      (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x70))();
    }
    else {
      (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x74))();
    }
  }
  if (iVar1 < 5) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
  }
  else if (iVar1 < 7) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  }
  return;
}

