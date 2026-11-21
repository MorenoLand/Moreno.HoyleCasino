// FUN_00508ed0  00508ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00508ed0(int param_1,int param_2)

{
  double dVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  short local_4c;
  short local_48;
  double local_44;
  short local_38;
  short local_30;
  short local_28;
  double local_24;
  short local_18;
  
  iVar4 = FUN_0047e420();
  local_38 = 0;
  local_48 = 0;
  do {
    iVar5 = FUN_0047f950();
    if (iVar5 <= local_48) {
LAB_00508fa1:
      local_44 = *(double *)(&DAT_00792df8 + iVar4 * 8);
      sVar2 = FUN_004d9040();
      local_28 = FUN_0062fbf0(sVar2 + 1);
      iVar5 = FUN_0047d770();
      if (iVar5 == 2) {
        sVar2 = FUN_0062fbf0(9 - param_1);
        local_28 = local_28 * (sVar2 + 1);
      }
      sVar2 = FUN_0062fbf0(5);
      sVar3 = FUN_0062fbf0((int)*(short *)(&DAT_007929c0 + iVar4 * 2));
      local_24 = local_44;
      if (10 < (int)*(short *)(&DAT_007925b0 + iVar4 * 2) + (int)local_38 * (int)local_28 +
               (int)(short)(sVar2 * sVar3)) {
        local_24 = (double)((int)*(short *)(&DAT_007925b0 + iVar4 * 2) +
                            (int)local_38 * (int)local_28 + -10 + (int)(short)(sVar2 * sVar3)) /
                   _DAT_006b4b00 + local_44;
      }
      if (4 < param_1) {
        iVar5 = FUN_00686cc0();
        iVar7 = FUN_0062fbf0(0x1e);
        iVar8 = FUN_0062fbf0(10);
        if (iVar7 - iVar8 < iVar5 + -0x50) {
          iVar5 = FUN_0062fbf0(10);
          iVar7 = FUN_0062fbf0(10);
          dVar1 = (double)(iVar5 + iVar7) / _DAT_006b4b00;
          local_44 = local_44 + dVar1;
          local_24 = local_24 + dVar1;
        }
      }
      if ((4 < param_1) || (iVar5 = FUN_0047d770(), iVar5 != 0)) {
        iVar5 = FUN_00686cc0();
        iVar7 = FUN_0062fbf0(0x1e);
        iVar8 = FUN_0062fbf0(10);
        if (iVar7 - iVar8 < iVar5 + -0x50) {
          iVar5 = FUN_0062fbf0(10);
          iVar7 = FUN_0062fbf0(10);
          dVar1 = (double)(iVar5 + iVar7) / _DAT_006b4b00;
          local_44 = local_44 + dVar1;
          local_24 = local_24 + dVar1;
        }
      }
      local_4c = FUN_004d9e80(3);
      local_18 = FUN_004d9e80(2);
      local_30 = FUN_004d9e80(1);
      sVar2 = FUN_004da170();
      iVar5 = FUN_0062fbf0((int)sVar2);
      dVar1 = (double)iVar5 / _DAT_006b4b00;
      iVar5 = FUN_0062fbf0((int)sVar2);
      dVar1 = ((dVar1 + 1.0) - (double)iVar5 / _DAT_006b4b00) / (double)param_2;
      iVar5 = FUN_0062fbf0(10);
      if (iVar5 < *(short *)(&DAT_007929c0 + iVar4 * 2)) {
        local_4c = local_4c / 2;
        local_18 = local_18 / 2;
        local_30 = local_30 / 2;
      }
      else {
        iVar5 = FUN_0047d770();
        if (iVar5 == 0) {
          if (((&DAT_007924a8)[local_48] == '\0') || (param_1 != 3)) {
            if (((&DAT_007924a8)[local_48] == '\0') || (param_1 != 4)) {
              if (((&DAT_007924a8)[local_48] != '\0') && (param_1 == 5)) {
                local_4c = (short)(local_4c * 3) / 2;
                local_18 = (short)(local_18 * 3) / 2;
                local_30 = (short)(local_30 * 3) / 2;
              }
            }
            else {
              local_4c = local_4c << 1;
              local_18 = local_18 << 1;
              local_30 = local_30 << 1;
            }
          }
          else {
            local_4c = local_4c << 1;
            local_18 = local_18 << 1;
            local_30 = local_30 << 1;
          }
        }
      }
      uVar9 = FUN_0047ce60();
      iVar5 = FUN_004c6f90(param_1 == 7,uVar9);
      if (local_44 <= (double)(local_4c - iVar5) / _DAT_006b4b00 + dVar1) {
        uVar9 = FUN_0047ce60();
        iVar5 = FUN_004c6f90(param_1 == 7,uVar9);
        if (local_44 <= (double)(local_18 - iVar5) / _DAT_006b4b00 + dVar1) {
          uVar9 = FUN_0047ce60();
          iVar5 = FUN_004c6f90(param_1 == 7,uVar9);
          if (local_44 <= (double)(local_30 - iVar5) / _DAT_006b4b00 + dVar1) {
            iVar5 = FUN_004c6fd0();
            if (local_24 <= (double)(local_4c - iVar5) / _DAT_006b4b00 + dVar1) {
              iVar5 = FUN_004c6fd0();
              if (local_24 <= (double)(local_18 - iVar5) / _DAT_006b4b00 + dVar1) {
                iVar5 = FUN_004c6fd0();
                if (local_24 <= (double)(local_30 - iVar5) / _DAT_006b4b00 + dVar1) {
                  uVar9 = 0;
                }
                else {
                  *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 0xb;
                  uVar9 = 1;
                }
              }
              else {
                *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 0xc;
                uVar9 = 1;
              }
            }
            else {
              *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 0xd;
              uVar9 = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 3;
            uVar9 = 1;
          }
        }
        else {
          *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 4;
          uVar9 = 1;
        }
      }
      else {
        *(undefined2 *)(&DAT_00792498 + iVar4 * 2) = 5;
        uVar9 = 1;
      }
      return uVar9;
    }
    if (local_48 != iVar4) {
      FUN_0047e390((int)local_48);
      iVar5 = FUN_004c7010();
      if (iVar5 == 1) {
        uVar6 = FUN_004c7050();
        sVar2 = FUN_004f69e0(uVar6);
        local_38 = local_38 + sVar2;
        sVar2 = FUN_004f6880(uVar6 & 0xffff);
        if (0 < sVar2) {
          local_38 = 0;
          goto LAB_00508fa1;
        }
      }
    }
    local_48 = local_48 + 1;
  } while( true );
}

