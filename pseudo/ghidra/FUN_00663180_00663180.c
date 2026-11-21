// FUN_00663180  00663180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00663180(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined1 local_14 [4];
  int local_10;
  float local_c;
  float local_8;
  
  FUN_00663080(local_14);
  local_8 = (float)(0xf5 - local_10);
  local_c = local_8 * (float)_DAT_006df890 * local_8;
  uVar1 = FUN_00686cc0(0xf5 - local_10,extraout_var);
  *param_1 = uVar1;
  param_1[1] = local_10;
  return param_1;
}

