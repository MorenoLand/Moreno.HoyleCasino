// FUN_005e7fc0  005e7fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e7fc0(int param_1)

{
  if (param_1 == 0) {
    FUN_0064c7a0(_DAT_00794984,_DAT_00794988);
  }
  else {
    FUN_0064c6e0(*(undefined4 *)(&DAT_00794984 + param_1 * 0xb8),
                 *(undefined4 *)(&DAT_00794988 + param_1 * 0xb8));
  }
  return;
}

