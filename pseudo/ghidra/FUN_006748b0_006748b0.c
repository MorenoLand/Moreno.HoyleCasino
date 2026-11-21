// FUN_006748b0  006748b0

undefined4 * __thiscall FUN_006748b0(undefined4 *param_1,uint param_2)

{
  *param_1 = SavedGamesListBox::vftable;
  FUN_00628220();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

