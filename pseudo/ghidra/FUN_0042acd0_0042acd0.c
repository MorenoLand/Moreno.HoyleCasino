// FUN_0042acd0  0042acd0

undefined4 __fastcall FUN_0042acd0(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  do {
    if (0x4b < local_c) {
      return 0;
    }
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      for (local_14 = 0; iVar1 = FUN_005ccdf0(local_10,0), local_14 <= iVar1;
          local_14 = local_14 + 1) {
        if ((*(int *)(*(int *)(param_1 + 0x14 + local_c * 4) + 0x17c + local_10 * 0x1e0 +
                     local_14 * 4) != 0) && (iVar1 = FUN_005f60e0(), iVar1 != 0)) {
          return 1;
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}

