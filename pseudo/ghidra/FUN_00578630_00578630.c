// FUN_00578630  00578630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00578630(undefined4 param_1)

{
  int iVar1;
  double local_14;
  short local_c;
  short local_8;
  
  local_8 = -1;
  local_14 = 0.0;
  for (local_c = 0; local_c < 6; local_c = local_c + 1) {
    local_14 = local_14 + *(double *)(&DAT_00749488 + local_c * 8);
  }
  if (local_14 != 1.0) {
    FUN_005e9f20("n == 1","..\\Casino\\sultanslot.cpp",0x674,param_1);
  }
  iVar1 = FUN_0062fbf0(100000);
  local_c = 0;
  local_14 = 0.0;
  do {
    if (5 < local_c) {
LAB_005786f9:
      if (local_8 < 0) {
        FUN_005e9f20("tempMultiplier >= 0","..\\Casino\\sultanslot.cpp",0x681,param_1);
      }
      return (int)local_8;
    }
    local_14 = _DAT_006cae30 * *(double *)(&DAT_00749488 + local_c * 8) + local_14;
    if ((double)iVar1 < local_14) {
      local_8 = local_c;
      goto LAB_005786f9;
    }
    local_c = local_c + 1;
  } while( true );
}

