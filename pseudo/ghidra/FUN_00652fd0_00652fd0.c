// FUN_00652fd0  00652fd0

void __thiscall FUN_00652fd0(int param_1,int param_2)

{
  undefined4 local_8;
  
  FUN_006024b0(param_2 + 5);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1e0 + local_8 * 4) + 0x6c))(param_2 + local_8);
  }
  return;
}

