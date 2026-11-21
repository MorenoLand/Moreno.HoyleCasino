// FUN_00674870  00674870

undefined4 * __thiscall FUN_00674870(undefined4 *param_1,uint param_2)

{
  *param_1 = FileNameEditBox::vftable;
  FUN_0060b5b0();
  if ((param_2 & 1) != 0) {
    operator_delete(param_1);
  }
  return param_1;
}

