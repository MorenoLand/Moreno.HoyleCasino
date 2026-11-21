// FUN_005f71f0  005f71f0

undefined4 * __thiscall FUN_005f71f0(undefined4 *param_1,undefined1 param_2,int param_3)

{
  int local_c;
  
  if (param_3 == 0) {
    local_c = *(int *)(DAT_015e55e8 + 0x14);
  }
  else {
    local_c = param_3;
  }
  FUN_005f7670(param_2,local_c,0x280,0x1e0);
  *param_1 = sciDialogBox::vftable;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  return param_1;
}

