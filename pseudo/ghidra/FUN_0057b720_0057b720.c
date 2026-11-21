// FUN_0057b720  0057b720

void __fastcall FUN_0057b720(int param_1)

{
  undefined4 local_8;
  
  FUN_005f87d0();
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x19dc); local_8 = local_8 + 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_8 * 4) + 0x70))();
  }
  FUN_0057d3a0();
  return;
}

