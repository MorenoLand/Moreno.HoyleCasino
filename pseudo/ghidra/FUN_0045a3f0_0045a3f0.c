// FUN_0045a3f0  0045a3f0

undefined4 __thiscall FUN_0045a3f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_18 [5];
  
  local_18[0] = 0xbe;
  local_18[1] = 0xbe;
  local_18[2] = 0x6a;
  local_18[3] = 0x6a;
  local_18[4] = 0xcc;
  iVar1 = FUN_0045e8e0(param_1);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      local_18[0] = 0xbe;
      local_18[1] = 0xbe;
      local_18[2] = 0x8a;
      local_18[3] = 0x8a;
    }
    else if (param_3 == 1) {
      local_18[0] = 0xbf;
      local_18[1] = 0xbf;
      local_18[2] = 0x6b;
      local_18[3] = 0x6b;
    }
  }
  return local_18[param_2];
}

