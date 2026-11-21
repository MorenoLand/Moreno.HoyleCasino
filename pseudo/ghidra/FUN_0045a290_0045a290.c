// FUN_0045a290  0045a290

int __thiscall FUN_0045a290(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_1c;
  int local_18 [5];
  
  local_18[0] = 0xbe;
  local_18[1] = 0xbe;
  local_18[2] = 0x6a;
  local_18[3] = 0x6a;
  local_18[4] = 0xcc;
  iVar1 = FUN_0045e8e0(param_1);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      local_18[0] = 0xc0;
      local_18[1] = 0xbf;
      local_18[2] = 0x87;
      local_18[3] = 0x81;
    }
    else if (param_3 == 1) {
      local_18[0] = 0xae;
      local_18[1] = 0xc0;
      local_18[2] = 0x6d;
      local_18[3] = 0x8b;
    }
  }
  iVar1 = FUN_0062fbf0(2);
  if (iVar1 == 0) {
    local_1c = FUN_0062fbf0(3);
    local_1c = local_1c + local_18[param_2];
  }
  else {
    local_1c = FUN_0062fbf0(3);
    local_1c = local_18[param_2] - local_1c;
  }
  return local_1c;
}

