// FUN_004a6810  004a6810

undefined4 FUN_004a6810(undefined4 param_1,undefined4 param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short local_84;
  short local_80;
  short local_78;
  short local_74 [2];
  short local_70 [2];
  short local_6c [2];
  short local_68 [2];
  short local_64 [2];
  short local_60 [2];
  short local_5c [2];
  short local_58;
  short local_54;
  undefined1 local_50 [8];
  short local_48 [2];
  short local_44;
  short local_40 [2];
  short local_3c;
  short local_38 [2];
  short local_34;
  short local_30 [2];
  short local_2c;
  short local_28 [2];
  short local_24;
  short local_20;
  short local_1c;
  short local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a121c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((&DAT_00791d80)[local_14] != 0) {
    local_54 = FUN_004d56d0();
    iVar3 = FUN_0062fbf0((int)local_54);
    iVar4 = FUN_0062fbf0((int)local_54);
    *(short *)(&DAT_00791798 + local_14 * 2) = (short)((iVar3 - iVar4) / 2);
    FUN_004c7c40(local_50);
    local_8 = 0;
    (&DAT_00791d80)[local_14] = 0;
    FUN_00494b20(local_30,local_38,local_5c,local_74,local_40,local_48,local_28,local_68,local_70,
                 local_6c,local_64,local_60);
    local_20 = 0;
    local_3c = FUN_004d5ad0();
    local_2c = FUN_004d5af0();
    local_1c = FUN_004d5b10();
    local_34 = FUN_004d5b30();
    local_20 = local_20 + local_30[0] / local_3c;
    if (local_5c[0] == 0xe) {
      local_20 = local_20 + 9 + local_2c;
    }
    else if (local_5c[0] == 0xd) {
      local_20 = local_20 + 7 + local_2c;
    }
    else if (local_5c[0] == 0xc) {
      local_20 = local_20 + 3 + local_2c;
    }
    else if (local_5c[0] < 9) {
      if (1 < local_5c[0]) {
        local_20 = local_20 + local_2c;
      }
    }
    else {
      local_20 = local_20 + 1 + local_2c;
    }
    if (local_74[0] == 0xd) {
      local_20 = local_20 + 7 + local_2c;
    }
    else if (local_74[0] == 0xc) {
      local_20 = local_20 + 3 + local_2c;
    }
    else if (local_74[0] < 9) {
      if (1 < local_74[0]) {
        local_20 = local_20 + local_2c;
      }
    }
    else {
      local_20 = local_20 + 1 + local_2c;
    }
    if (0 < local_38[0]) {
      local_20 = local_20 + local_38[0] * local_38[0] * -5;
    }
    if (local_68[0] == 0xe) {
      local_20 = local_20 + 9 + local_1c;
    }
    else if (local_68[0] == 0xd) {
      local_20 = local_20 + 7 + local_1c;
    }
    else if (local_68[0] == 0xc) {
      local_20 = local_20 + 3 + local_1c;
    }
    else if (1 < local_68[0]) {
      local_20 = local_20 + 1 + local_1c;
    }
    if (local_70[0] == 0xe) {
      local_20 = local_20 + 9 + local_1c;
    }
    else if (local_70[0] == 0xd) {
      local_20 = local_20 + 7 + local_1c;
    }
    else if (local_70[0] == 0xc) {
      local_20 = local_20 + 3 + local_1c;
    }
    else if (1 < local_70[0]) {
      local_20 = local_20 + 1 + local_1c;
    }
    if (0 < local_28[0]) {
      local_20 = local_20 - local_28[0] * local_28[0];
    }
    if (local_40[0] == 0xe) {
      local_20 = local_20 + 4 + local_34;
    }
    else if (local_40[0] == 0xd) {
      local_20 = local_20 + 2 + local_34;
    }
    if (local_48[0] == 0xd) {
      local_20 = local_20 + 2 + local_34;
    }
    else if (local_48[0] == 0xc) {
      local_20 = local_20 + local_34;
    }
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_58 = 0;
    if (local_6c[0] == 2) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 3 + sVar2;
    }
    else if (local_6c[0] == 3) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 6 + sVar2;
    }
    else if (local_6c[0] == 3) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 8 + sVar2;
    }
    if (local_64[0] == 1) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 8 + sVar2;
    }
    else if (local_64[0] == 2) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 4 + sVar2;
    }
    else if (local_64[0] == 3) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + sVar2;
    }
    if (local_60[0] == 2) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 8 + sVar2;
    }
    else if (local_60[0] == 3) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + 4 + sVar2;
    }
    else if (local_60[0] == 4) {
      sVar2 = FUN_004d5b50();
      local_58 = local_58 + sVar2;
    }
    local_44 = (short)(((int)local_58 + local_20 * 2) / 0xf);
    local_24 = ((short)(((int)local_58 + local_20 * 2) / 3) - param_3) + 10;
    local_18 = FUN_004d4f20();
    for (local_78 = 0; local_78 < local_24; local_78 = local_78 + 1) {
      iVar4 = (int)local_18;
      iVar3 = FUN_004c6db0();
      iVar3 = FUN_0062fbf0(100 - iVar3);
      if (iVar3 < iVar4) {
        local_44 = local_44 + 1;
      }
    }
    if ((local_44 < 0xc) || (iVar3 = FUN_0062fbf0(2), iVar3 != 0)) {
      if ((local_44 < 10) || (iVar3 = FUN_0062fbf0(5), 1 < iVar3)) {
        if ((local_44 < 8) || (iVar3 = FUN_0062fbf0(3), iVar3 != 0)) {
          if (local_44 < 5) {
            *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 0;
          }
          else {
            *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
          }
        }
        else {
          *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 3;
        }
      }
      else {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 4;
      }
    }
    else {
      *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 5;
    }
    local_8 = 0xffffffff;
    FUN_00484470();
  }
  if (*(short *)(&DAT_00791768 + local_14 * 2) == 0) {
    cVar1 = FUN_004f6640();
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
    iVar3 = FUN_0047d6b0();
    if (iVar3 != 1) {
      ExceptionList = local_10;
      return 1;
    }
  }
  else if (*(short *)(&DAT_00791768 + local_14 * 2) == 5) {
    iVar3 = FUN_0062fbf0(100);
    sVar2 = FUN_004a7250(param_1,3);
    if (iVar3 < sVar2) {
      FUN_004c79d0(3);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d5590();
      if (iVar3 < sVar2) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 4;
      }
      cVar1 = FUN_004f6640();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      cVar1 = FUN_004f66e0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if (*(short *)(&DAT_00791768 + local_14 * 2) == 4) {
    iVar3 = FUN_0062fbf0(100);
    sVar2 = FUN_004a7250(param_1,2);
    if (iVar3 < sVar2) {
      FUN_004c79d0(2);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d5590();
      if (iVar3 < sVar2) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 3;
      }
      cVar1 = FUN_004f6640();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      cVar1 = FUN_004f66e0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  else if (*(short *)(&DAT_00791768 + local_14 * 2) == 3) {
    iVar3 = FUN_0062fbf0(100);
    sVar2 = FUN_004a7250(param_1,1);
    if (iVar3 < sVar2) {
      FUN_004c79d0(1);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d5590();
      if (iVar3 < sVar2) {
        *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
      }
      cVar1 = FUN_004f6640();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 2;
      }
      cVar1 = FUN_004f66e0();
      if (cVar1 != '\0') {
        ExceptionList = local_10;
        return 4;
      }
      ExceptionList = local_10;
      return 3;
    }
  }
  cVar1 = FUN_004f6640();
  if (cVar1 == '\0') {
    uVar5 = 3;
  }
  else {
    iVar3 = FUN_0047d6b0();
    if (iVar3 == 1) {
      local_80 = 0;
      for (local_84 = 0; iVar3 = FUN_0047f950(), local_84 < iVar3; local_84 = local_84 + 1) {
        if (local_84 != local_14) {
          FUN_0047e390((int)local_84);
          iVar3 = FUN_004c7010();
          if (iVar3 == 1) {
            FUN_0047e390((int)local_84);
            uVar5 = FUN_004c7050();
            sVar2 = FUN_004f69e0(uVar5);
            local_80 = local_80 + sVar2;
            FUN_0047e390((int)local_84);
            uVar5 = FUN_004c7050();
            sVar2 = FUN_004f6880(uVar5);
            if (0 < sVar2) {
              local_80 = 0;
              break;
            }
          }
        }
      }
      sVar2 = FUN_004d55d0();
      sVar2 = FUN_0062fbf0(sVar2 + 1);
      if ((int)*(short *)(&DAT_00791798 + local_14 * 2) + (int)local_80 * (int)sVar2 < 0xb) {
        uVar5 = 1;
      }
      else {
        iVar3 = FUN_0062fbf0(3);
        FUN_004c79d0(iVar3 + 1);
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar5;
}

