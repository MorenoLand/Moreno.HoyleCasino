// FUN_0065a750  0065a750

undefined4 * __fastcall FUN_0065a750(undefined4 *param_1)

{
  int local_8;
  
  FUN_006060a0();
  *param_1 = PieceSelectButton::vftable;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x86] = 0;
    param_1[local_8 + 0x89] = 0;
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x84] = 0xffffffff;
  return param_1;
}

