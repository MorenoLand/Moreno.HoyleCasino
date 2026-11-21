// FUN_0046ea60  0046ea60

undefined2 FUN_0046ea60(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined1 local_25;
  undefined2 local_24;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1d;
  undefined2 local_1c;
  undefined1 local_19;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f83e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = FUN_0047e420(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (&DAT_00791040)[local_18] = 0;
  (&DAT_00791008)[local_18] = 0;
  if ((&DAT_007912e0)[local_18] == '\0') {
    FUN_0047e3b0();
    iVar3 = FUN_004c7010();
    if (iVar3 != 2) {
      FUN_00485940(local_14,1,1,1,1,0,0,0);
      local_8 = 0;
      uVar4 = DAT_00791394;
      FUN_004a2160(&local_19);
      cVar1 = FUN_004a1e10(uVar4);
      if (cVar1 == '\0') {
        uVar4 = DAT_00791418;
        FUN_004a2160(&local_1d);
        cVar1 = FUN_004a1e10(uVar4);
        if (cVar1 == '\0') {
          uVar4 = DAT_00791380;
          FUN_004a2160(&local_21);
          cVar1 = FUN_004a1e10(uVar4);
          if (cVar1 == '\0') {
            uVar4 = DAT_007913b0;
            FUN_004a2160(&local_25);
            cVar1 = FUN_004a1e10(uVar4);
            if (cVar1 == '\0') {
              uVar4 = DAT_00791390;
              FUN_004a2160(&local_2d);
              cVar1 = FUN_004a1e10(uVar4);
              if (cVar1 != '\0') {
                FUN_0047e3b0();
                sVar2 = FUN_004e1630();
                iVar3 = FUN_0062fbf0(0x50);
                if (iVar3 < sVar2) {
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return 2;
                }
                FUN_0047e3b0();
                sVar2 = FUN_004e04d0();
                iVar3 = FUN_0062fbf0(0x4b0);
                if (iVar3 < sVar2) {
                  FUN_0047e3b0();
                  sVar2 = FUN_004e04d0();
                  iVar3 = FUN_0062fbf0(400);
                  if (iVar3 < sVar2) {
                    (&DAT_00791008)[local_18] = 1;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return 1;
                  }
                }
                FUN_0047e3b0();
                sVar2 = FUN_004e04d0();
                iVar3 = FUN_0062fbf0(0x4b0);
                if (iVar3 < sVar2) {
                  FUN_0047e3b0();
                  sVar2 = FUN_004e04d0();
                  iVar3 = FUN_0062fbf0(400);
                  if (iVar3 < sVar2) {
                    (&DAT_00791040)[local_18] = 1;
                    local_8 = 0xffffffff;
                    FUN_004a20f0();
                    ExceptionList = local_10;
                    return 0;
                  }
                }
              }
            }
            else {
              FUN_0047e3b0();
              sVar2 = FUN_004e1630();
              iVar3 = FUN_0062fbf0(0x50);
              if (iVar3 < sVar2) {
                local_28 = 2;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_28;
              }
              FUN_0047e3b0();
              sVar2 = FUN_004e04d0();
              iVar3 = FUN_0062fbf0(0x4b0);
              if (iVar3 < sVar2) {
                FUN_0047e3b0();
                sVar2 = FUN_004e04d0();
                iVar3 = FUN_0062fbf0(400);
                if (iVar3 < sVar2) {
                  (&DAT_00791008)[local_18] = 1;
                  local_2a = 1;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_2a;
                }
              }
              FUN_0047e3b0();
              sVar2 = FUN_004e04d0();
              iVar3 = FUN_0062fbf0(0x4b0);
              if (iVar3 < sVar2) {
                FUN_0047e3b0();
                sVar2 = FUN_004e04d0();
                iVar3 = FUN_0062fbf0(400);
                if (iVar3 < sVar2) {
                  (&DAT_00791040)[local_18] = 1;
                  local_2c = 0;
                  local_8 = 0xffffffff;
                  FUN_004a20f0();
                  ExceptionList = local_10;
                  return local_2c;
                }
              }
            }
          }
          else {
            FUN_0047e3b0();
            sVar2 = FUN_004e04d0();
            iVar3 = FUN_0062fbf0(600);
            if (iVar3 < sVar2) {
              FUN_0047e3b0();
              sVar2 = FUN_004e04d0();
              iVar3 = FUN_0062fbf0(200);
              if (iVar3 < sVar2) {
                (&DAT_00791040)[local_18] = 1;
                local_24 = 0;
                local_8 = 0xffffffff;
                FUN_004a20f0();
                ExceptionList = local_10;
                return local_24;
              }
            }
          }
        }
        else {
          FUN_0047e3b0();
          sVar2 = FUN_004e1630();
          iVar3 = FUN_0062fbf0(0x14);
          if (iVar3 < sVar2) {
            local_20 = 2;
            local_8 = 0xffffffff;
            FUN_004a20f0();
            ExceptionList = local_10;
            return local_20;
          }
        }
      }
      else {
        iVar3 = FUN_0062fbf0(2);
        if (iVar3 == 0) {
          local_1c = 0;
          local_8 = 0xffffffff;
          FUN_004a20f0();
          ExceptionList = local_10;
          return local_1c;
        }
      }
      local_8 = 0xffffffff;
      FUN_004a20f0();
    }
  }
  ExceptionList = local_10;
  return 0xffff;
}

