// FUN_004805e0  004805e0

void __fastcall FUN_004805e0(int param_1)

{
  int local_1c;
  int local_18;
  char acStack_14 [8];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    acStack_14[local_18] = '\0';
  }
  for (local_18 = 0; local_18 < 7; local_18 = local_18 + 1) {
    local_8 = *(int *)(param_1 + 0x3e4 + local_18 * 4);
    if (local_8 != -1) {
      local_1c = local_1c + 1;
      acStack_14[local_8] = '\x01';
    }
  }
  if (local_1c == 6) {
    for (local_18 = 0; (local_18 < 7 && (acStack_14[local_18] != '\0')); local_18 = local_18 + 1) {
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

