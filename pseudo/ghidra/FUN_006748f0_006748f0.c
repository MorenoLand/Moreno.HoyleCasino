// FUN_006748f0  006748f0

undefined4 * __thiscall FUN_006748f0(undefined4 *param_1,uint param_2)

{
  *param_1 = SavedGameListText::vftable;
  FUN_00629b00();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

