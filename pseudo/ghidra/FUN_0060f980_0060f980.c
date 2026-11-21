// FUN_0060f980  0060f980

void __thiscall FUN_0060f980(int param_1,undefined4 param_2)

{
  undefined2 local_8;
  
  FUN_005f5300(param_2);
  for (local_8 = 0; local_8 < *(short *)(param_1 + 0x184); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x18c) + local_8 * 4) != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x18c) + local_8 * 4) + 0x6c))(param_2);
    }
  }
  return;
}

