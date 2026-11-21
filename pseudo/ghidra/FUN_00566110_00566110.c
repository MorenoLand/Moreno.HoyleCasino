// FUN_00566110  00566110

int __thiscall FUN_00566110(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00566380(param_1);
  if (iVar1 < 5) {
    if ((-1 < param_2) && (param_2 < 4)) {
      return *(int *)(&DAT_00743dd4 + param_2 * 4) + 0x9f;
    }
  }
  else if ((-1 < param_2) && (param_2 < 6)) {
    return *(int *)(&DAT_00743dbc + param_2 * 4) + 0x9f;
  }
  return 0;
}

