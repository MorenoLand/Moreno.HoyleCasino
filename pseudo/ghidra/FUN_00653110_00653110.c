// FUN_00653110  00653110

void __fastcall FUN_00653110(int *param_1)

{
  undefined4 uVar1;
  int local_8;
  
  uVar1 = FUN_00602810();
  (**(code **)(*param_1 + 0xd8))(uVar1);
  FUN_00602500();
  if (param_1[0x77] < 100) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      (**(code **)(*(int *)param_1[local_8 + 0x78] + 0x74))();
    }
  }
  return;
}

