// FUN_00456920  00456920

undefined2 __thiscall FUN_00456920(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  int local_2c;
  int local_28;
  undefined2 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = 0;
  local_c = 0;
  local_2c = -1;
  local_8 = -1;
  local_14 = 0;
  local_18 = 0;
  for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
    uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
    iVar2 = FUN_0044f700(uVar1);
    if (iVar2 == 4) {
      local_20 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
      local_c = local_10;
      local_10 = local_10 + 3;
    }
    else {
      uVar1 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
      iVar2 = FUN_0044f700(uVar1);
      if (iVar2 == 1) {
        uVar3 = (undefined2)((uint)local_10 >> 0x10);
        if (local_2c == -1) {
          local_2c = local_10;
          local_14 = FUN_0044f680(CONCAT22(uVar3,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
        }
        else if (local_8 == -1) {
          local_8 = local_10;
          local_18 = FUN_0044f680(CONCAT22(uVar3,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
        }
      }
    }
  }
  if (((((local_20 < 7) || (((local_20 == 0xd && (local_14 == 0xe)) && (0xb < local_18)))) ||
       (((((local_20 == 0xc && (local_14 == 0xe)) && (9 < local_18)) ||
         (((local_20 == 0xb && (local_14 == 0xe)) && (2 < local_18)))) ||
        ((local_20 == 10 && ((0xd < local_14 || ((local_14 == 0xd && (0xb < local_18)))))))))) ||
      (((local_20 == 9 && ((0xd < local_14 || ((local_14 == 0xd && (2 < local_18)))))) ||
       ((local_20 == 8 && ((0xc < local_14 || ((local_14 == 0xc && (10 < local_18)))))))))) ||
     ((local_20 == 7 && ((0xb < local_14 || ((local_14 == 0xd && (2 < local_18)))))))) {
    local_24 = 0;
    local_28 = local_2c;
    local_1c = local_8;
  }
  else {
    local_24 = 1;
    local_28 = local_c;
    local_1c = local_c + 1;
  }
  FUN_0044f840(local_28,local_1c,param_2,param_3);
  return local_24;
}

