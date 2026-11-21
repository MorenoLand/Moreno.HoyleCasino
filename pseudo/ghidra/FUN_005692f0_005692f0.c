// FUN_005692f0  005692f0

int __fastcall FUN_005692f0(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0x24 + local_8 * 2) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

