// FUN_00650bb0  00650bb0

undefined4 * __thiscall FUN_00650bb0(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int local_c;
  
  if (param_3 == 0) {
    local_c = *(int *)(DAT_0162ee84 + 0x14);
  }
  else {
    local_c = param_3;
  }
  FUN_005f71f0(param_2,local_c);
  *param_1 = sciMessageBox::vftable;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  return param_1;
}

