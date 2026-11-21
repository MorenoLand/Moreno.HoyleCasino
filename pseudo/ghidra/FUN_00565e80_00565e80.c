// FUN_00565e80  00565e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00565e80(int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (2 < param_1)) {
    iVar1 = param_1 * 9 + _DAT_00743d08;
  }
  else {
    iVar1 = *(int *)(&DAT_00743d08 + param_1 * 4);
  }
  return iVar1;
}

