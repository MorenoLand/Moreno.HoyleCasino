// FUN_0045a1c0  0045a1c0

int __thiscall FUN_0045a1c0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_1c [6];
  
  local_1c[0] = 0x167;
  local_1c[1] = 0xd3;
  local_1c[2] = 0x19a;
  local_1c[3] = 0xa0;
  local_1c[4] = 0x110;
  iVar1 = FUN_0045e8e0(param_1);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      local_1c[0] = 0x14b;
      local_1c[1] = 0xce;
      local_1c[2] = 0x18c;
      local_1c[3] = 0x8a;
    }
    else if (param_3 == 1) {
      local_1c[0] = 0x16f;
      local_1c[1] = 0xf5;
      local_1c[2] = 0x1a3;
      local_1c[3] = 0xb0;
    }
  }
  iVar1 = FUN_0062fbf0(2);
  if (iVar1 == 0) {
    local_1c[5] = FUN_0062fbf0(3);
    local_1c[5] = local_1c[5] + local_1c[param_2];
  }
  else {
    local_1c[5] = FUN_0062fbf0(3);
    local_1c[5] = local_1c[param_2] - local_1c[5];
  }
  return local_1c[5];
}

