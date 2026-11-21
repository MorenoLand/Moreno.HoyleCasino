// FUN_00620540  00620540

int __fastcall FUN_00620540(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0x30a;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x30c); local_c = local_c + 1) {
    local_8 = local_8 + 2;
    for (local_14 = 0; local_14 < *(int *)(*(int *)(param_1 + 0x310) + local_c * 8);
        local_14 = local_14 + 1) {
      local_8 = local_8 + 0xc;
      for (local_10 = 0;
          local_10 <
          *(int *)(*(int *)(*(int *)(param_1 + 0x310) + 4 + local_c * 8) + 4 + local_14 * 0x18);
          local_10 = local_10 + 1) {
        local_8 = local_8 + 2 +
                  *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x310) + 4 + local_c * 8) + 0x10 +
                                   local_14 * 0x18) + local_10 * 4);
      }
    }
  }
  return local_8;
}

