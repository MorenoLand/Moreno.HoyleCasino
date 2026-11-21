// FUN_0056eb20  0056eb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056eb20(undefined4 param_1)

{
  int iVar1;
  short local_14;
  short local_10;
  double local_c;
  
  local_14 = -1;
  local_c = 0.0;
  iVar1 = FUN_0062fbf0(1000000,param_1);
  local_10 = 0;
  do {
    if (9 < local_10) {
LAB_0056eb91:
      if (local_14 == -1) {
        FUN_0056ee90();
      }
      else {
        FUN_0056f040((int)local_14);
      }
      return;
    }
    local_c = _DAT_006ca358 * *(double *)(&DAT_00748928 + local_10 * 8) + local_c;
    if ((double)iVar1 < local_c) {
      local_14 = local_10;
      goto LAB_0056eb91;
    }
    local_10 = local_10 + 1;
  } while( true );
}

