// FUN_005cab00  005cab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005cab00(int param_1)

{
  int local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if (_DAT_006b3e40 == *(double *)(param_1 + 0x1e0)) {
    local_c[1] = 0xffffffe7;
  }
  else {
    local_c[0] = FUN_00686cc0();
    local_c[0] = -local_c[0];
  }
  FUN_005caea0(local_c);
  return;
}

