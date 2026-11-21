// FUN_004a2640  004a2640

undefined4 FUN_004a2640(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  short local_38;
  short local_34;
  short local_2c;
  short local_28;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a1138;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if ((&DAT_00791d80)[local_14] != 0) {
    sVar2 = FUN_004cc4f0();
    iVar4 = FUN_0062fbf0((int)sVar2);
    iVar5 = FUN_0062fbf0((int)sVar2);
    *(short *)(&DAT_00791798 + local_14 * 2) = (short)((iVar4 - iVar5) / 2);
    FUN_004c7c40(local_1c);
    local_8 = 0;
    uVar3 = FUN_0048dc80();
    *(undefined2 *)(&DAT_007919c8 + local_14 * 2) = uVar3;
    (&DAT_00791d80)[local_14] = 0;
    FUN_004cc570(*(undefined2 *)(&DAT_007919c8 + local_14 * 2),param_2 & 0xffff);
    iVar4 = FUN_00686cc0();
    iVar5 = FUN_004c6db0();
    iVar5 = FUN_0062fbf0(100 - iVar5);
    if (iVar5 < iVar4) {
      local_28 = 0;
      sVar2 = FUN_004cbd10();
      param_3 = param_2 - param_3;
      sVar2 = sVar2 + *(short *)(&DAT_007919c8 + local_14 * 2) + (short)param_3 +
              (9 - (short)param_2);
      local_2c = 0;
      while (local_2c < sVar2) {
        FUN_004cc570(CONCAT22(sVar2 >> 0xf,*(undefined2 *)(&DAT_007919c8 + local_14 * 2)),
                     CONCAT22((short)((uint)param_3 >> 0x10),(short)param_2));
        iVar4 = FUN_00686cc0();
        iVar5 = FUN_0062fbf0(100);
        if (iVar5 < iVar4) {
          local_28 = local_28 + 1;
          iVar5 = CONCAT22((short)((uint)iVar5 >> 0x10),local_28);
        }
        local_2c = local_2c + 1;
        param_3 = CONCAT22((short)((uint)iVar5 >> 0x10),local_2c);
      }
      if (local_28 < 5) {
        if (local_28 < 3) {
          if (local_28 < 1) {
            *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 2;
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
    }
    else {
      *(undefined2 *)(&DAT_00791768 + local_14 * 2) = 0;
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
    iVar4 = FUN_0047d6b0();
    if (iVar4 != 1) {
      ExceptionList = local_10;
      return 1;
    }
  }
  else if (*(short *)(&DAT_00791768 + local_14 * 2) == 5) {
    iVar4 = FUN_0062fbf0(100);
    sVar2 = FUN_004a2c60(param_1,3);
    if (iVar4 < sVar2) {
      FUN_004c79d0(3);
      iVar4 = FUN_0062fbf0(100);
      sVar2 = FUN_004cc3b0();
      if (iVar4 < sVar2) {
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
    iVar4 = FUN_0062fbf0(100);
    sVar2 = FUN_004a2c60(param_1,2);
    if (iVar4 < sVar2) {
      FUN_004c79d0(2);
      iVar4 = FUN_0062fbf0(100);
      sVar2 = FUN_004cc3b0();
      if (iVar4 < sVar2) {
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
    iVar4 = FUN_0062fbf0(100);
    sVar2 = FUN_004a2c60(param_1,1);
    if (iVar4 < sVar2) {
      FUN_004c79d0(1);
      iVar4 = FUN_0062fbf0(100);
      sVar2 = FUN_004cc3b0();
      if (iVar4 < sVar2) {
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
    uVar6 = 3;
  }
  else {
    iVar4 = FUN_0047d6b0();
    if (iVar4 == 1) {
      local_34 = 0;
      for (local_38 = 0; iVar4 = FUN_0047f950(), local_38 < iVar4; local_38 = local_38 + 1) {
        if (local_38 != local_14) {
          FUN_0047e390((int)local_38);
          iVar4 = FUN_004c7010();
          if (iVar4 == 1) {
            FUN_0047e390((int)local_38);
            uVar6 = FUN_004c7050();
            sVar2 = FUN_004f69e0(uVar6);
            local_34 = local_34 + sVar2;
            FUN_0047e390((int)local_38);
            uVar6 = FUN_004c7050();
            sVar2 = FUN_004f6880(uVar6);
            if (0 < sVar2) {
              local_34 = 0;
              break;
            }
          }
        }
      }
      sVar2 = FUN_004cc3f0();
      sVar2 = FUN_0062fbf0(sVar2 + 1);
      if ((int)*(short *)(&DAT_00791798 + local_14 * 2) + (int)local_34 * (int)sVar2 < 0xb) {
        uVar6 = 1;
      }
      else {
        iVar4 = FUN_0062fbf0(3);
        FUN_004c79d0(iVar4 + 1);
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar6;
}

