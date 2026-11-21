// FUN_0044e770  0044e770

undefined4 * __fastcall FUN_0044e770(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = PaiGowAI::vftable;
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    *(undefined2 *)((int)param_1 + local_8 * 2 + 4) = 0;
  }
  param_1[5] = 0xffffffff;
  return param_1;
}

