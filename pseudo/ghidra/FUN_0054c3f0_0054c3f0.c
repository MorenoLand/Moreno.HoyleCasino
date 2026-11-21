// FUN_0054c3f0  0054c3f0

undefined4 * __fastcall FUN_0054c3f0(undefined4 *param_1)

{
  int local_8;
  
  FUN_005e9e20();
  *param_1 = VideoPokerAI::vftable;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[4] = 0xffffffff;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)((int)param_1 + local_8 * 2 + 4) = 0;
    *(undefined1 *)((int)param_1 + local_8 + 0x14) = 0xff;
  }
  return param_1;
}

