// FUN_00571800  00571800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00571800(undefined4 param_1)

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
LAB_00571871:
      if (local_14 == -1) {
        FUN_00571a50();
      }
      else {
        FUN_00571ba0((int)local_14);
      }
      return;
    }
    local_c = _DAT_006ca358 * *(double *)(&DAT_00748928 + local_10 * 8) + local_c;
    if ((double)iVar1 < local_c) {
      local_14 = local_10;
      goto LAB_00571871;
    }
    local_10 = local_10 + 1;
  } while( true );
}

