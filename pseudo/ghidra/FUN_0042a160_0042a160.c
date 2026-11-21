// FUN_0042a160  0042a160

void __fastcall FUN_0042a160(int param_1)

{
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 0x158) + 0x74))();
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x150 + local_8 * 4) + 0xb0))
              (*(int *)(DAT_007906d4 + 0xacc + local_8 * 4) + -1);
    (**(code **)(**(int **)(param_1 + 0x150 + local_8 * 4) + 0x74))();
  }
  return;
}

