// FUN_00456420  00456420

undefined2 __thiscall FUN_00456420(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  int local_38;
  int local_34;
  int local_30;
  undefined2 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  local_18 = 0;
  local_28 = 0;
  local_8 = 0;
  local_38 = 0;
  local_10 = -1;
  local_34 = -1;
  local_20 = 0;
  local_14 = 0;
  for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
    uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_1c * 2));
    iVar3 = FUN_0044f700(uVar2);
    if (iVar3 == 3) {
      local_28 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_1c * 2));
      local_1c = local_1c + 2;
    }
    else {
      uVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_1c * 2)));
      iVar3 = FUN_0044f700(uVar2);
      if (iVar3 == 2) {
        local_18 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_1c * 2)
                                        ));
        local_8 = local_1c;
        local_38 = local_1c + 1;
        local_1c = local_1c + 1;
      }
      else {
        uVar2 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_1c * 2)));
        iVar3 = FUN_0044f700(uVar2);
        if (iVar3 == 1) {
          uVar4 = (undefined2)((uint)local_1c >> 0x10);
          if (local_10 == -1) {
            local_10 = local_1c;
            local_20 = FUN_0044f680(CONCAT22(uVar4,*(undefined2 *)(param_1 + 4 + local_1c * 2)));
          }
          else {
            local_34 = local_1c;
            local_14 = FUN_0044f680(CONCAT22(uVar4,*(undefined2 *)(param_1 + 4 + local_1c * 2)));
          }
        }
      }
    }
  }
  local_2c = 0;
  local_30 = local_8;
  local_24 = local_38;
  bVar1 = false;
  if (((local_18 < 9) && (local_20 == 0xe)) && (9 < local_14)) {
    if (((local_28 == 0xd) && (local_18 < 5)) &&
       (((2 < local_18 && (0xb < local_14)) || ((local_18 == 2 && (10 < local_14)))))) {
      bVar1 = true;
    }
    if (((local_28 == 0xc) && (local_18 < 6)) &&
       (((2 < local_18 && (0xc < local_14)) || ((local_18 == 2 && (10 < local_14)))))) {
      bVar1 = true;
    }
    if (((local_28 == 0xb) && (local_18 < 6)) &&
       (((2 < local_18 && (0xc < local_14)) || ((local_18 == 2 && (0xb < local_14)))))) {
      bVar1 = true;
    }
    if (((local_28 == 10) && (local_18 < 6)) &&
       (((3 < local_18 && (0xc < local_14)) || ((local_18 < 4 && (0xb < local_14)))))) {
      bVar1 = true;
    }
    if ((((6 < local_28) && (local_28 < 10)) && (local_18 < 7)) &&
       (((3 < local_18 && (0xc < local_14)) || ((local_18 < 4 && (0xb < local_14)))))) {
      bVar1 = true;
    }
    if ((((local_28 == 6) || (local_28 == 5)) && (local_18 < 8)) &&
       ((((4 < local_18 && (0xc < local_14)) ||
         ((local_18 < 5 && ((2 < local_18 && (0xb < local_14)))))) ||
        ((local_18 == 2 && (10 < local_14)))))) {
      bVar1 = true;
    }
    if ((local_28 == 4) &&
       (((5 < local_18 && (0xc < local_14)) ||
        (((2 < local_18 && ((local_18 < 6 && (0xb < local_14)))) ||
         ((local_18 == 2 && (10 < local_14)))))))) {
      bVar1 = true;
    }
    if ((local_28 == 3) &&
       (((((6 < local_18 && (0xc < local_14)) ||
          ((4 < local_18 && ((local_18 < 7 && (0xb < local_14)))))) ||
         ((local_18 == 4 && (10 < local_14)))) || ((local_18 == 2 && (9 < local_14)))))) {
      bVar1 = true;
    }
    if ((local_28 == 2) &&
       ((((6 < local_18 && (0xc < local_14)) ||
         ((3 < local_18 && ((local_18 < 7 && (0xb < local_14)))))) ||
        ((local_18 == 3 && (10 < local_14)))))) {
      bVar1 = true;
    }
    if (bVar1) {
      local_2c = 1;
      local_30 = local_10;
      local_24 = local_34;
    }
  }
  FUN_0044f840(local_30,local_24,param_2,param_3);
  return local_2c;
}

