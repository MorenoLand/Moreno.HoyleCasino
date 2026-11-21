// FUN_00456b30  00456b30

undefined2 __thiscall FUN_00456b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
    iVar2 = FUN_0044f700(uVar1);
    if (iVar2 == 4) {
      local_1c = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
      local_8 = local_10;
      local_10 = local_10 + 3;
    }
    else {
      uVar1 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
      iVar2 = FUN_0044f700(uVar1);
      if (iVar2 == 2) {
        local_c = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_10 * 2))
                              );
        local_14 = local_10;
        local_10 = local_10 + 1;
      }
    }
  }
  if (((((local_1c == 0xe) && (local_c < 6)) || ((local_1c == 0xd && (local_c < 5)))) ||
      ((local_1c == 0xc && (local_c < 5)))) || ((local_1c == 0xb && (local_c < 4)))) {
    local_20 = 1;
  }
  else {
    local_20 = 0;
    local_8 = local_14;
  }
  local_18 = local_8 + 1;
  FUN_0044f840(local_8,local_18,param_2,param_3);
  return local_20;
}

