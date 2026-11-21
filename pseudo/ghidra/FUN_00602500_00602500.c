// FUN_00602500  00602500

void __fastcall FUN_00602500(int *param_1)

{
  FUN_005eb570();
  if (param_1[100] != 0) {
    (**(code **)(*param_1 + 0xe8))();
    (**(code **)(*(int *)param_1[100] + 0x74))();
  }
  return;
}

