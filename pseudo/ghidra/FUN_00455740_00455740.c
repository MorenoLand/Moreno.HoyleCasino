// FUN_00455740  00455740

undefined2 __thiscall FUN_00455740(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int local_20;
  undefined2 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_004516a0(&local_14,&local_10);
  FUN_004512c0(&local_8,&local_c);
  if ((((local_14 == -1) || (local_10 == -1)) || (local_8 == -1)) || (local_c == -1)) {
    FUN_005e9f20("highFlushTwoCard != -1 && nextHighFlushTwoCard != -1 && highStraightTwoCard != -1 && nextHighStraightTwoCard != -1"
                 ,"..\\Casino\\paigowai.cpp",0xca5);
  }
  local_1c = 0;
  local_20 = local_14;
  local_18 = local_10;
  iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
  if (10 < iVar1) {
    iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_14 * 2));
    if (iVar2 < iVar1) {
      local_1c = 1;
      local_20 = local_8;
      local_18 = local_c;
    }
  }
  iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
  iVar2 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_14 * 2)));
  if (iVar1 == iVar2) {
    iVar1 = FUN_0044f680(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
    if (iVar1 == 0xe) {
      iVar1 = FUN_0044f680(CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 4 + local_c * 2)));
      if (10 < iVar1) {
        local_1c = 1;
        local_20 = local_8;
        local_18 = local_c;
      }
    }
    iVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (iVar1 < 0xe) {
      iVar1 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
      if (8 < iVar1) {
        local_1c = 1;
        local_20 = local_8;
        local_18 = local_c;
      }
    }
  }
  FUN_0044f840(local_20,local_18,param_2,param_3);
  return local_1c;
}

