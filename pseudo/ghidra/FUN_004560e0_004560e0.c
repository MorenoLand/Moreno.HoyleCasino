// FUN_004560e0  004560e0

undefined2 __thiscall FUN_004560e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  int local_20;
  undefined2 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_18 = 0;
  local_20 = -1;
  local_14 = -1;
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    if (local_8 == 0) {
      uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
      iVar2 = FUN_0044f700(uVar1);
      if (iVar2 == 2) {
        local_8 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        local_10 = local_c;
      }
    }
    if (local_18 == 0) {
      uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
      iVar2 = FUN_0044f700(uVar1);
      if (iVar2 == 3) {
        local_18 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
      }
    }
  }
  if (local_18 == 0xe) {
    FUN_0044f840(local_10,local_10 + 1,param_2,param_3);
    local_1c = 0;
  }
  else if (*(char *)(param_1 + 0x2c8) == '\0') {
    if (*(char *)(param_1 + 0x2c2) == '\0') {
      if (*(char *)(param_1 + 0x2c5) == '\0') {
        FUN_005e9f20("false","..\\Casino\\paigowai.cpp",0xe6e);
        FUN_0044f840(0xffffffff,0xffffffff,param_2,param_3);
        local_1c = 0;
      }
      else {
        if (local_18 < 0xb) {
          local_1c = 3;
          local_20 = 0;
          local_14 = 1;
        }
        else {
          local_1c = 4;
          local_20 = FUN_0044f7e0(local_18,0);
          local_14 = FUN_0044f7e0(local_18,1);
        }
        FUN_0044f840(local_20,local_14,param_2,param_3);
      }
    }
    else {
      if (local_18 < 10) {
        local_1c = 5;
        local_20 = 0;
        local_14 = 1;
      }
      else {
        local_1c = 6;
        for (local_c = 0; local_c < 7; local_c = local_c + 1) {
          iVar2 = FUN_0044f680(CONCAT22((short)((uint)local_c >> 0x10),
                                        *(undefined2 *)(param_1 + 4 + local_c * 2)));
          if ((iVar2 == local_18) &&
             (iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_c * 2)),
             iVar2 != *(int *)(param_1 + 0x2d0))) {
            if (local_20 != -1) {
              local_14 = local_c;
              break;
            }
            local_20 = local_c;
          }
        }
      }
      FUN_0044f840(local_20,local_14,param_2,param_3);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2d8) == 1) {
      local_1c = 1;
      local_20 = 0;
      local_14 = 1;
    }
    else {
      local_1c = 2;
      for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        iVar2 = FUN_0044f7e0(local_18,local_c);
        iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + iVar2 * 2));
        if (iVar2 != *(int *)(param_1 + 0x2d0)) {
          if (local_20 != -1) {
            local_14 = FUN_0044f7e0(local_18,local_c);
            break;
          }
          local_20 = FUN_0044f7e0(local_18,local_c);
        }
      }
    }
    FUN_0044f840(local_20,local_14,param_2,param_3);
  }
  return local_1c;
}

