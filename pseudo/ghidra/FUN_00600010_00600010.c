// FUN_00600010  00600010

void __fastcall FUN_00600010(int *param_1)

{
  param_1[0x78] = 0;
  param_1[0x79] = 1;
  param_1[0x7a] = 2;
  param_1[0x7b] = 3;
  param_1[0x7c] = 4;
  param_1[0x7d] = 5;
  param_1[0x7e] = 6;
  param_1[0x7f] = 7;
  (**(code **)(*param_1 + 0xec))();
  return;
}

