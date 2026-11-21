// FUN_005669c0  005669c0

void __fastcall FUN_005669c0(char *param_1)

{
  if (*param_1 == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x74))();
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x74))();
  FUN_00566210();
  return;
}

