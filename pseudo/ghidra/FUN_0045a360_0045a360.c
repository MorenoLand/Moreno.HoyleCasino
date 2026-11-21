// FUN_0045a360  0045a360

undefined4 __thiscall FUN_0045a360(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_18 [5];
  
  local_18[0] = 0x167;
  local_18[1] = 0xd3;
  local_18[2] = 0x19a;
  local_18[3] = 0xa0;
  local_18[4] = 0x110;
  iVar1 = FUN_0045e8e0(param_1);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      local_18[0] = 0x171;
      local_18[1] = 0xc9;
      local_18[2] = 0x187;
      local_18[3] = 0xb2;
    }
    else if (param_3 == 1) {
      local_18[0] = 0x146;
      local_18[1] = 0xf5;
      local_18[2] = 0x19c;
      local_18[3] = 0xa0;
    }
  }
  return local_18[param_2];
}

