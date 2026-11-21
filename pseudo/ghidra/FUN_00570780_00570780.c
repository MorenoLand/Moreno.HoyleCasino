// FUN_00570780  00570780

void __thiscall FUN_00570780(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_8;
  
  FUN_005eb260(param_2,param_3);
  for (local_8 = 0; local_8 < *(short *)(param_1 + 0x184); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x18c) + local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_8 * 4) + 0x44))
                (*(int *)(param_1 + 0x18) + (local_8 + 1) * -9,param_3);
    }
  }
  return;
}

