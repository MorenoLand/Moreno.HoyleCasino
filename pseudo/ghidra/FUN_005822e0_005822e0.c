// FUN_005822e0  005822e0

void __fastcall FUN_005822e0(int param_1)

{
  if ((*(int *)(param_1 + 0x407c) == 0) || (*(int *)(param_1 + 0x4078) == 1)) {
    FUN_00582750();
  }
  else {
    FUN_00582720();
  }
  if ((*(int *)(param_1 + 0x407c) < *(int *)(param_1 + 0x4078) + -1) &&
     (*(int *)(param_1 + 0x4078) != 1)) {
    FUN_00582720();
  }
  else {
    FUN_00582750();
  }
  if ((*(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) == 0) ||
     (*(int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x407c) * 4) < 2)) {
    FUN_00582750();
  }
  else {
    FUN_00582720();
  }
  if ((*(int *)(param_1 + 0x39f8 + *(int *)(param_1 + 0x407c) * 4) <
       *(int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x407c) * 4) + -1) &&
     (1 < *(int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x407c) * 4))) {
    FUN_00582720();
  }
  else {
    FUN_00582750();
  }
  return;
}

