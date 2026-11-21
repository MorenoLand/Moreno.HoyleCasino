// FUN_00523440  00523440

undefined4 __fastcall FUN_00523440(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  do {
    if (0xa0 < local_8) {
      return 0;
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if ((*(int *)(*(int *)(param_1 + 0x80 + local_8 * 4) + 0x17c + local_c * 0x1e0) != 0) &&
         (iVar1 = FUN_005f60e0(), iVar1 != 0)) {
        return 1;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

