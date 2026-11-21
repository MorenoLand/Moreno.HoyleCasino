// FUN_00546520  00546520

void __fastcall FUN_00546520(undefined4 *param_1)

{
  int local_8;
  
  (**(code **)(*(int *)*param_1 + 0x70))();
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    (**(code **)(*(int *)param_1[local_8 + 1] + 0x70))();
  }
  return;
}

