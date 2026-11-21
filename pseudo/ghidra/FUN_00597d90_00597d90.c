// FUN_00597d90  00597d90

void __thiscall FUN_00597d90(undefined4 param_1,int param_2)

{
  int local_2c;
  int local_28;
  undefined2 local_24 [4];
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined2 local_10 [4];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    local_10[local_28] = 0;
  }
  FUN_00462a40(4,DAT_007935a8 + 200 + param_2 * 0xc,(param_2 == 4) + '\x05',local_10,param_1);
  local_14 = FUN_00462ba0(local_10,4,0);
  for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
    local_24[local_2c] = 0;
  }
  FUN_00462a40(4,DAT_007935a8 + 0xf8,6,local_24,param_1);
  local_18 = FUN_00462ba0(local_24,4,0);
  if (((((local_14 != 8) || (local_18 != 9)) && ((local_18 != 9 || (local_14 != 8)))) &&
      ((local_14 != 4 || ((local_18 != 6 && (local_18 != 5)))))) &&
     ((local_18 != 4 || ((local_14 != 6 && (local_14 != 5)))))) {
    local_1c = FUN_00462da0(local_10,local_24,4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

