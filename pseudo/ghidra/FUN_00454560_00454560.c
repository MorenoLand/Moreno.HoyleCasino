// FUN_00454560  00454560

undefined2 __thiscall FUN_00454560(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  ulonglong uVar6;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined2 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_28 = -1;
  local_2c = -1;
  local_30 = -1;
  local_1c = -1;
  local_24 = -1;
  local_18 = -1;
  FUN_004517a0(&local_14,&local_8,&local_c);
  cVar1 = FUN_00451c20(local_c,local_14,local_8,&local_24,&local_18);
  if (cVar1 == '\0') {
    FUN_00451540(&local_28,&local_2c);
    uVar2 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_28 * 2)));
    uVar6 = FUN_00450c20(uVar2);
    iVar3 = (int)(uVar6 >> 0x20);
    if ((uVar6 & 0xff) == 0) {
      local_24 = local_2c;
      local_18 = local_28;
    }
    else {
      local_24 = local_28;
      local_18 = local_2c;
      iVar3 = local_2c;
    }
    local_20 = 1;
    local_10 = 0;
    while (uVar5 = (undefined2)((uint)iVar3 >> 0x10), local_10 < 7) {
      iVar3 = FUN_0044f6c0(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_10 * 2)));
      if ((iVar3 == *(int *)(param_1 + 0x2d0)) ||
         (iVar3 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar3 == -1)) {
        uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
        cVar1 = FUN_00450c20(uVar2);
        if (cVar1 == '\0') {
          if (local_30 != -1) {
            local_1c = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
            uVar5 = extraout_var_01;
            break;
          }
          local_30 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_10 * 2));
        }
      }
      iVar3 = local_10 + 1;
      local_10 = iVar3;
    }
    if ((((local_30 == 0xe) && (10 < local_1c)) &&
        (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
        iVar3 < 0xc)) &&
       (iVar3 = FUN_0044f680(CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 4 + local_24 * 2))),
       6 < iVar3)) {
      iVar3 = FUN_0044f680(CONCAT22(extraout_var_03,*(undefined2 *)(param_1 + 4 + local_24 * 2)));
      iVar3 = iVar3 + -7;
      uVar5 = (undefined2)((uint)iVar3 >> 0x10);
      switch(iVar3) {
      case 0:
        if ((local_1c == 0xd) &&
           (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
           iVar3 < 0xb)) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
        break;
      case 1:
        if (((local_1c == 0xc) &&
            (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
            iVar3 < 10)) ||
           ((local_1c == 0xd &&
            (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_18 * 2)), iVar3 < 0xb)))) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
        break;
      case 2:
        if (((local_1c == 0xb) &&
            (iVar4 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
            iVar3 = extraout_ECX, iVar4 < 8)) ||
           (((uVar5 = (undefined2)((uint)iVar3 >> 0x10), local_1c == 0xc &&
             (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
             uVar5 = extraout_var, iVar3 < 0xb)) ||
            ((local_1c == 0xd &&
             (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
             iVar3 < 0xc)))))) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
        break;
      case 3:
        if (((local_1c < 0xd) &&
            (iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2))),
            iVar3 < 10)) ||
           ((local_1c == 0xd &&
            (iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_18 * 2)), iVar3 < 0xc)))) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
        break;
      case 4:
        iVar3 = FUN_0044f680(CONCAT22(uVar5,*(undefined2 *)(param_1 + 4 + local_18 * 2)));
        if (iVar3 < 0xb) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
        break;
      case 5:
        if (local_1c == 0xd) {
          local_20 = 2;
          local_24 = 0;
          local_18 = 1;
        }
      }
    }
    FUN_0044f840(local_24,local_18,param_2,param_3);
  }
  else {
    FUN_0044f840(local_24,local_18,param_2,param_3);
    local_20 = 0;
  }
  return local_20;
}

