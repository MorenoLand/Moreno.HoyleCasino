// FUN_00462a40  00462a40

void FUN_00462a40(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined2 local_30 [10];
  undefined2 local_1c [10];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  for (local_34 = 0; local_34 < 9; local_34 = local_34 + 1) {
    local_30[local_34] = 0;
    local_1c[local_34] = 0;
  }
  if (param_1 < param_3) {
    for (local_38 = 0; local_38 < param_3; local_38 = local_38 + 1) {
      local_3c = 0;
      for (local_40 = 0; local_40 < 9; local_40 = local_40 + 1) {
        if (local_40 != local_38) {
          local_30[local_3c] = *(undefined2 *)(param_2 + local_40 * 2);
          local_3c = local_3c + 1;
        }
      }
      FUN_00462a40(param_1,local_30,param_3 + -1,local_1c);
      iVar1 = FUN_00462da0(local_1c,param_4,param_1);
      if (iVar1 == 1) {
        for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
          *(undefined2 *)(param_4 + local_44 * 2) = local_1c[local_44];
        }
      }
    }
  }
  else {
    for (local_48 = 0; local_48 < param_1; local_48 = local_48 + 1) {
      *(undefined2 *)(param_4 + local_48 * 2) = *(undefined2 *)(param_2 + local_48 * 2);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

