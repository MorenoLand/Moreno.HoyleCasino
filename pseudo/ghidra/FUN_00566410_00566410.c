// FUN_00566410  00566410

void __fastcall FUN_00566410(int param_1)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *(undefined1 *)(param_1 + local_8 + 0x38) = 0;
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    FUN_005eaf00(0x31226c);
    (**(code **)(**(int **)(param_1 + local_8 * 4) + 0xb0))(0);
    uVar1 = FUN_00566170(local_8);
    (**(code **)(**(int **)(param_1 + local_8 * 4) + 0x48))(uVar1);
    *(undefined1 *)(param_1 + local_8 + 0x38) = 1;
  }
  return;
}

