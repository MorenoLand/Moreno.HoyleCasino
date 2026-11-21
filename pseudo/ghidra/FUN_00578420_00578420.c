// FUN_00578420  00578420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00578420(int param_1)

{
  int iVar1;
  short local_14;
  short local_10;
  double local_c;
  
  local_14 = -1;
  local_c = 0.0;
  iVar1 = FUN_0062fbf0(100000);
  local_10 = 0;
  do {
    if (7 < local_10) {
LAB_00578491:
      if (local_14 == -1) {
        FUN_005785b0();
      }
      else {
        for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
          *(int *)(param_1 + 4 + local_10 * 4) = (int)local_14;
        }
      }
      return;
    }
    local_c = _DAT_006cae30 * *(double *)(&DAT_00749448 + local_10 * 8) + local_c;
    if ((double)iVar1 < local_c) {
      local_14 = local_10;
      goto LAB_00578491;
    }
    local_10 = local_10 + 1;
  } while( true );
}

