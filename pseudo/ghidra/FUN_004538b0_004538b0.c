// FUN_004538b0  004538b0

char __thiscall FUN_004538b0(int param_1,undefined2 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar6;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  undefined2 extraout_var_17;
  undefined2 extraout_var_18;
  undefined2 extraout_var_19;
  undefined2 extraout_var_20;
  undefined2 extraout_var_21;
  undefined2 extraout_var_22;
  undefined2 extraout_var_23;
  undefined8 uVar7;
  char local_d;
  int local_c;
  int local_8;
  
  local_c = 0;
  bVar1 = false;
  bVar2 = false;
  local_d = '\0';
  if (*(char *)(param_1 + 0x2c5) == '\0') {
    return '\0';
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar4 = FUN_0044f680(param_2[local_8]);
    if (iVar4 == 0xe) {
      iVar4 = FUN_0044f6c0(CONCAT22(extraout_var_10,param_2[local_8]));
      if (iVar4 == -1) {
        bVar2 = true;
      }
      else {
        bVar1 = true;
      }
    }
  }
  if ((!bVar1) && (!bVar2)) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      iVar4 = FUN_0044f680(param_2[local_8]);
      iVar5 = FUN_0044f680(CONCAT22(extraout_var_11,param_2[local_8 + 1]));
      if (iVar4 != iVar5 + 1) {
        return '\0';
      }
    }
    local_d = FUN_0044f680(*param_2);
  }
  if ((!bVar2) && (bVar1)) {
    uVar7 = FUN_0044f680(param_2[4]);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 10) {
      uVar7 = FUN_0044f680(param_2[4]);
      iVar4 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 2) {
        return '\0';
      }
    }
    local_8 = 4;
    while (1 < local_8) {
      iVar4 = FUN_0044f680(CONCAT22((short)((uint)iVar4 >> 0x10),param_2[local_8]));
      iVar5 = FUN_0044f680(CONCAT22(extraout_var_12,param_2[local_8 + -1]));
      if (iVar4 != iVar5 + -1) {
        return '\0';
      }
      iVar4 = local_8 + -1;
      local_8 = iVar4;
    }
    iVar4 = FUN_0044f680(param_2[4]);
    if (iVar4 == 2) {
      local_d = '\x05';
    }
    else {
      local_d = '\x0e';
    }
  }
  if (!bVar1) {
    if (bVar2) {
      for (local_8 = 4; 1 < local_8; local_8 = local_8 + -1) {
        iVar4 = FUN_0044f680(param_2[local_8 + -1]);
        iVar5 = FUN_0044f680(CONCAT22(extraout_var,param_2[local_8]));
        if (2 < iVar4 - iVar5) {
          return '\0';
        }
        iVar4 = FUN_0044f680(CONCAT22(extraout_var_00,param_2[local_8]));
        iVar5 = FUN_0044f680(CONCAT22(extraout_var_01,param_2[local_8 + -1]));
        if (iVar4 != iVar5 + -1) {
          local_c = local_c + 1;
        }
      }
      if (1 < local_c) {
        return '\0';
      }
      cVar3 = FUN_0045f940();
      uVar6 = extraout_var_02;
      if ((cVar3 == '\0') ||
         (iVar4 = FUN_0044f680(CONCAT22(extraout_var_13,param_2[4])), uVar6 = extraout_var_03,
         iVar4 != 2)) {
        local_d = FUN_0044f680(CONCAT22(uVar6,param_2[4]));
        local_d = local_d + '\x04';
      }
      else {
        local_d = '\x05';
      }
    }
  }
  if ((!bVar2) || (!bVar1)) {
    return local_d;
  }
  iVar4 = FUN_0044f680(param_2[2]);
  iVar5 = FUN_0044f680(CONCAT22(extraout_var_04,param_2[3]));
  if (iVar4 != iVar5) {
    iVar4 = FUN_0044f680(param_2[2]);
    iVar5 = FUN_0044f680(CONCAT22(extraout_var_14,param_2[4]));
    if (iVar4 != iVar5) {
      iVar4 = FUN_0044f680(CONCAT22(extraout_var_05,param_2[3]));
      iVar5 = FUN_0044f680(param_2[4]);
      if ((iVar4 != iVar5) &&
         (((((iVar4 = FUN_0044f680(CONCAT22(extraout_var_15,param_2[2])), uVar6 = extraout_var_16,
             1 < iVar4 &&
             (iVar4 = FUN_0044f680(CONCAT22(extraout_var_06,param_2[2])), uVar6 = extraout_var_17,
             iVar4 < 6)) && (iVar4 = FUN_0044f680(param_2[3]), uVar6 = extraout_var_18, 1 < iVar4))
           && (((iVar4 = FUN_0044f680(CONCAT22(extraout_var_18,param_2[3])), uVar6 = extraout_var_19
                , iVar4 < 6 &&
                (iVar4 = FUN_0044f680(CONCAT22(extraout_var_07,param_2[4])), uVar6 = extraout_var_20
                , 1 < iVar4)) &&
               (iVar4 = FUN_0044f680(param_2[4]), uVar6 = extraout_var_21, iVar4 < 6)))) ||
          (((iVar4 = FUN_0044f680(CONCAT22(uVar6,param_2[2])), 9 < iVar4 &&
            (iVar4 = FUN_0044f680(CONCAT22(extraout_var_08,param_2[2])), iVar4 < 0xe)) &&
           ((iVar4 = FUN_0044f680(param_2[3]), 9 < iVar4 &&
            (((iVar4 = FUN_0044f680(CONCAT22(extraout_var_22,param_2[3])), iVar4 < 0xe &&
              (iVar4 = FUN_0044f680(CONCAT22(extraout_var_09,param_2[4])), 9 < iVar4)) &&
             (iVar4 = FUN_0044f680(param_2[4]), uVar6 = extraout_var_23, iVar4 < 0xe)))))))))) {
        iVar4 = FUN_0044f680(CONCAT22(uVar6,param_2[4]));
        if (iVar4 < 6) {
          local_d = '\x05';
        }
        else {
          local_d = '\x0e';
        }
        return local_d;
      }
    }
  }
  return '\0';
}

