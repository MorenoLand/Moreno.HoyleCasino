// FUN_00565cf0  00565cf0

void __thiscall FUN_00565cf0(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x50))(param_2);
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x50))(param_2);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x50))(param_2);
  return;
}

