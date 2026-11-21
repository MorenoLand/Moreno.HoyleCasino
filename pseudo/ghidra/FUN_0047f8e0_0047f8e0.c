// FUN_0047f8e0  0047f8e0

void __fastcall FUN_0047f8e0(int param_1)

{
  undefined2 local_8;
  
  for (local_8 = 0; local_8 < *(short *)(param_1 + 2000); local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x4b0 + local_8 * 4) + 0x70))();
  }
  *(undefined2 *)(param_1 + 2000) = 0;
  return;
}

