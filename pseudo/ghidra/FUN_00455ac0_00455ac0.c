// FUN_00455ac0  00455ac0

short __thiscall FUN_00455ac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar4;
  undefined2 extraout_var_01;
  undefined8 uVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = 0xffffffff;
  local_10 = 0xffffffff;
  FUN_00452010(&local_18,&local_28);
  iVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_18 * 2)));
  uVar5 = FUN_0044f680(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_28 * 2)));
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  if (iVar2 == (int)uVar5) {
    local_20 = local_18;
    local_10 = local_28;
    FUN_0044f840(local_18,local_28,param_2,param_3);
    sVar1 = 0;
  }
  else {
    local_14 = -1;
    local_24 = -1;
    local_2c = -1;
    local_8 = -1;
    local_c = 0;
    while (local_c < 7) {
      uVar3 = FUN_0044f680(CONCAT22((short)((uint)iVar4 >> 0x10),
                                    *(undefined2 *)(param_1 + 4 + local_c * 2)));
      iVar2 = FUN_0044f700(uVar3);
      if (iVar2 == 2) {
        if (local_14 == -1) {
          local_14 = FUN_0044f680(CONCAT22(extraout_var_01,
                                           *(undefined2 *)(param_1 + 4 + local_c * 2)));
        }
        else if (local_24 == -1) {
          local_24 = FUN_0044f680(CONCAT22(extraout_var_01,
                                           *(undefined2 *)(param_1 + 4 + local_c * 2)));
        }
        local_c = local_c + 1;
      }
      else {
        uVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        iVar2 = FUN_0044f700(uVar3);
        if (iVar2 == 1) {
          if (local_2c == -1) {
            local_2c = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          }
          else if (local_8 == -1) {
            local_8 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
          }
        }
      }
      iVar4 = local_c + 1;
      local_c = iVar4;
    }
    if (((local_14 + local_24 < 8) && (local_2c < 0xc)) && (local_8 < 0xb)) {
      local_20 = local_18;
      local_10 = local_28;
      FUN_0044f840(local_18,local_28,param_2,param_3);
      sVar1 = 3;
    }
    else {
      sVar1 = FUN_00453e00(param_2,param_3);
      sVar1 = sVar1 + 1;
    }
  }
  return sVar1;
}

