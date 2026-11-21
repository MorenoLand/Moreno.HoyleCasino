// FUN_004095c0  004095c0

undefined4 __thiscall FUN_004095c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_00409520(param_1);
  if ((-1 < param_2) && (param_2 < 99)) {
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      if ((*(uint *)(iVar1 + 0x20 + param_2 * 4) & *(uint *)(&DAT_00707208 + local_8 * 4)) != 0) {
        return *(undefined4 *)(&DAT_00707208 + local_8 * 4);
      }
    }
  }
  return 0;
}

