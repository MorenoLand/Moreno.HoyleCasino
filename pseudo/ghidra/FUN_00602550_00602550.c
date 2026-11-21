// FUN_00602550  00602550

void __fastcall FUN_00602550(int *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  FUN_005f5df0(0);
  if ((char)param_1[0x6a] != '\0') {
    (**(code **)(*param_1 + 0xd8))(0);
  }
  FUN_005eb5a0();
  if (param_1[100] != 0) {
    (**(code **)(*(int *)param_1[100] + 0x70))();
  }
  return;
}

