// FUN_005658c0  005658c0

void __thiscall FUN_005658c0(int param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x6c))(param_2);
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x20 + local_8 * 4) + 0x6c))(param_2);
  }
  return;
}

