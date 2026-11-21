// FUN_004a4500  004a4500

undefined4 FUN_004a4500(undefined4 param_1,undefined4 param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short local_74;
  short local_70;
  short local_68;
  short local_64 [2];
  short local_60 [2];
  short local_5c [2];
  short local_58 [2];
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
  puStack_c = &LAB_006a11d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((&DAT_00791d80)[local_14] != 0) {
    local_54 = FUN_004d2aa0();
    iVar3 = FUN_0062fbf0((int)local_54);
    iVar4 = FUN_0062fbf0((int)local_54);
    *(short *)(&DAT_00791798 + local_14 * 2) = (short)((iVar3 - iVar4) / 2);
    FUN_004c7c40(local_50);
    local_8 = 0;
    (&DAT_00791d80)[local_14] = 0;
    FUN_00492430(local_30,local_38,local_58,local_64,local_40,local_48,local_28,local_5c,local_60);
    local_20 = 0;
    local_3c = FUN_004d2ea0();
    local_2c = FUN_004d2ec0();
    local_1c = FUN_004d2ee0();
    local_34 = FUN_004d2f00();
    local_20 = local_20 + local_30[0] / local_3c;
    if (local_58[0] == 0xe) {
      local_20 = local_20 + 9 + local_2c;
    }
    else if (local_58[0] == 0xd) {
      local_20 = local_20 + 7 + local_2c;
    }
    else if (local_58[0] == 0xc) {
      local_20 = local_20 + 3 + local_2c;
    }
    else if (local_58[0] < 9) {
      if (1 < local_58[0]) {
        local_20 = local_20 + local_2c;
      }
    }
    else {
      local_20 = local_20 + 1 + local_2c;
    }
    if (local_64[0] == 0xd) {
      local_20 = local_20 + 7 + local_2c;
    }
    else if (local_64[0] == 0xc) {
      local_20 = local_20 + 3 + local_2c;
    }
    else if (local_64[0] < 9) {
      if (1 < local_64[0]) {
        local_20 = local_20 + local_2c;
      }
    }
    else {
      local_20 = local_20 + 1 + local_2c;
    }
    if (0 < local_38[0]) {
      local_20 = local_20 + local_38[0] * local_38[0] * -5;
    }
    if (local_5c[0] == 0xe) {
      local_20 = local_20 + 9 + local_1c;
    }
    else if (local_5c[0] == 0xd) {
      local_20 = local_20 + 7 + local_1c;
    }
    else if (local_5c[0] == 0xc) {
      local_20 = local_20 + 3 + local_1c;
    }
    else if (1 < local_5c[0]) {
      local_20 = local_20 + 1 + local_1c;
    }
    if (local_60[0] == 0xe) {
      local_20 = local_20 + 9 + local_1c;
    }
    else if (local_60[0] == 0xd) {
      local_20 = local_20 + 7 + local_1c;
    }
    else if (local_60[0] == 0xc) {
      local_20 = local_20 + 3 + local_1c;
    }
    else if (1 < local_60[0]) {
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
    local_44 = local_20 / 5;
    local_24 = (local_20 - param_3) + 10;
    local_18 = FUN_004d22f0();
    for (local_68 = 0; local_68 < local_24; local_68 = local_68 + 1) {
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
    sVar2 = FUN_004a4de0(param_1,3);
    if (iVar3 < sVar2) {
      FUN_004c79d0(3);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d2960();
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
    sVar2 = FUN_004a4de0(param_1,2);
    if (iVar3 < sVar2) {
      FUN_004c79d0(2);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d2960();
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
    sVar2 = FUN_004a4de0(param_1,1);
    if (iVar3 < sVar2) {
      FUN_004c79d0(1);
      iVar3 = FUN_0062fbf0(100);
      sVar2 = FUN_004d2960();
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
      local_70 = 0;
      for (local_74 = 0; iVar3 = FUN_0047f950(), local_74 < iVar3; local_74 = local_74 + 1) {
        if (local_74 != local_14) {
          FUN_0047e390((int)local_74);
          iVar3 = FUN_004c7010();
          if (iVar3 == 1) {
            FUN_0047e390((int)local_74);
            uVar5 = FUN_004c7050();
            sVar2 = FUN_004f69e0(uVar5);
            local_70 = local_70 + sVar2;
            FUN_0047e390((int)local_74);
            uVar5 = FUN_004c7050();
            sVar2 = FUN_004f6880(uVar5);
            if (0 < sVar2) {
              local_70 = 0;
              break;
            }
          }
        }
      }
      sVar2 = FUN_004d29a0();
      sVar2 = FUN_0062fbf0(sVar2 + 1);
      if ((int)*(short *)(&DAT_00791798 + local_14 * 2) + (int)local_70 * (int)sVar2 < 0xb) {
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

