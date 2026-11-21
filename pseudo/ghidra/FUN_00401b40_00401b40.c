// FUN_00401b40  00401b40

void __thiscall FUN_00401b40(int param_1,int param_2)

{
  undefined4 local_8;
  
  for (local_8 = param_2 * 3; local_8 < param_2 * 3 + 3; local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x20 + local_8 * 4) + 0x17c + param_2 * 0x1e0) == 0) {
      (**(code **)(**(int **)(param_1 + 0x20 + local_8 * 4) + 0xb8))(param_2,0);
    }
  }
  return;
}

