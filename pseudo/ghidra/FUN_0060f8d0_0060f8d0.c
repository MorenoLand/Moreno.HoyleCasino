// FUN_0060f8d0  0060f8d0

void __thiscall FUN_0060f8d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_8;
  
  FUN_005eb260(param_2,param_3);
  for (local_8 = 0; local_8 < *(short *)(param_1 + 0x184); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x18c) + local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_8 * 4) + 0x44))
                (*(int *)(param_1 + 0x18) - (int)*(short *)(param_1 + 0x186) * (local_8 + 1),param_3
                );
    }
  }
  return;
}

