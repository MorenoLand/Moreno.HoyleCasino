// FUN_00455cb0  00455cb0

short __thiscall FUN_00455cb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  short local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_1c = 0xffffffff;
  local_10 = 0xffffffff;
  FUN_00452010(&local_8,&local_2c);
  iVar1 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
  iVar2 = FUN_0044f680(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_2c * 2)));
  if (iVar1 == iVar2) {
    local_1c = local_8;
    local_10 = local_2c;
    FUN_0044f840(local_8,local_2c,param_2,param_3);
    local_18 = 0;
  }
  else {
    FUN_00451f60(&local_28,&local_20);
    iVar1 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_28 * 2)));
    iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_20 * 2));
    if (iVar1 == iVar2) {
      local_1c = local_28;
      local_10 = local_20;
      FUN_0044f840(local_28,local_20,param_2,param_3);
      local_18 = 0;
    }
    else {
      local_14 = -1;
      local_24 = -1;
      for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
        uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        iVar1 = FUN_0044f700(uVar3);
        if (iVar1 == 2) {
          if (local_14 == -1) {
            local_14 = FUN_0044f680(CONCAT22(extraout_var_02,
                                             *(undefined2 *)(param_1 + 4 + local_c * 2)));
            local_c = local_c + 1;
          }
          else if (local_24 == -1) {
            local_24 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
            break;
          }
        }
      }
      local_1c = 0xffffffff;
      local_10 = 0xffffffff;
      if ((local_14 + local_24 < 10) ||
         (((*(int *)(param_1 + 0x338) == 6 && (local_14 < 7)) && (local_24 < 6)))) {
        local_18 = 3;
        for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
          iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if ((iVar1 != -1) &&
             (iVar1 = FUN_0044f6c0(CONCAT22(extraout_var_04,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2))),
             iVar1 != *(int *)(param_1 + 0x2d0))) {
            if (local_1c != 0xffffffff) {
              local_10 = local_c;
              break;
            }
            local_1c = local_c;
          }
        }
        if (local_10 == 0xffffffff) {
          if (*(int *)(param_1 + 0x344) == 6) {
            iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4));
            local_10 = (uint)(iVar1 != *(int *)(param_1 + 0x2d0));
          }
          else {
            for (local_c = 0; (int)local_c < 7; local_c = local_c + 1) {
              iVar1 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if (((iVar1 == *(int *)(param_1 + 0x2d0)) &&
                  (iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar1 != 0xe))
                 && ((iVar1 = FUN_0044f680(CONCAT22(extraout_var_03,
                                                    *(undefined2 *)(param_1 + 4 + local_c * 2))),
                     *(int *)(param_1 + 0x338) < iVar1 ||
                     (iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2)),
                     iVar1 < *(int *)(param_1 + 0x328))))) {
                local_10 = local_c;
                break;
              }
            }
          }
        }
        FUN_0044f840(local_1c,local_10,param_2,param_3);
      }
      else {
        local_18 = FUN_00453e00(param_2,param_3);
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}

