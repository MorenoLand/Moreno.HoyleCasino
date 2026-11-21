// FUN_00502080  00502080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00502080(int param_1,int param_2)

{
  double dVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  short local_40;
  short local_3c;
  short local_34;
  short local_2c;
  double local_24;
  short local_18;
  
  iVar5 = FUN_0047e420();
  local_34 = 0;
  local_3c = 0;
  do {
    iVar6 = FUN_0047f950();
    if (iVar6 <= local_3c) {
LAB_00502143:
      sVar2 = FUN_004d6cb0();
      sVar2 = FUN_0062fbf0(sVar2 + 1);
      sVar3 = FUN_0062fbf0(5);
      sVar4 = FUN_0062fbf0((int)*(short *)(&DAT_007929c0 + iVar5 * 2));
      if ((int)*(short *)(&DAT_007925b0 + iVar5 * 2) + (int)local_34 * (int)sVar2 +
          (int)(short)(sVar3 * sVar4) < 0xb) {
        local_24 = *(double *)(&DAT_00792df8 + iVar5 * 8);
      }
      else {
        local_24 = (double)((int)*(short *)(&DAT_007925b0 + iVar5 * 2) + (int)local_34 * (int)sVar2
                            + -10 + (int)(short)(sVar3 * sVar4)) / _DAT_006b4b00 +
                   *(double *)(&DAT_00792df8 + iVar5 * 8);
      }
      local_40 = FUN_004d7af0(3);
      local_18 = FUN_004d7af0(2);
      local_2c = FUN_004d7af0(1);
      sVar2 = FUN_004d7de0();
      iVar6 = FUN_0062fbf0((int)sVar2);
      dVar1 = (double)iVar6 / _DAT_006b4b00;
      iVar6 = FUN_0062fbf0((int)sVar2);
      dVar1 = ((dVar1 + 1.0) - (double)iVar6 / _DAT_006b4b00) / (double)param_2;
      iVar6 = FUN_0062fbf0(10);
      if (iVar6 < *(short *)(&DAT_007929c0 + iVar5 * 2)) {
        local_40 = local_40 / 2;
        local_18 = local_18 / 2;
        local_2c = local_2c / 2;
      }
      else if (((&DAT_007924a8)[local_3c] == '\0') || (param_1 != 4)) {
        if (((&DAT_007924a8)[local_3c] != '\0') && (param_1 == 5)) {
          local_40 = (short)(local_40 * 3) / 2;
          local_18 = (short)(local_18 * 3) / 2;
          local_2c = (short)(local_2c * 3) / 2;
        }
      }
      else {
        local_40 = local_40 << 1;
        local_18 = local_18 << 1;
        local_2c = local_2c << 1;
      }
      uVar7 = FUN_0047ce60();
      iVar6 = FUN_004c6f90(param_1 == 7,uVar7);
      if (*(double *)(&DAT_00792df8 + iVar5 * 8) <=
          (double)(local_40 - iVar6) / _DAT_006b4b00 + dVar1) {
        uVar7 = FUN_0047ce60();
        iVar6 = FUN_004c6f90(param_1 == 7,uVar7);
        if (*(double *)(&DAT_00792df8 + iVar5 * 8) <=
            (double)(local_18 - iVar6) / _DAT_006b4b00 + dVar1) {
          uVar7 = FUN_0047ce60();
          iVar6 = FUN_004c6f90(param_1 == 7,uVar7);
          if (*(double *)(&DAT_00792df8 + iVar5 * 8) <=
              (double)(local_2c - iVar6) / _DAT_006b4b00 + dVar1) {
            iVar6 = FUN_004c6fd0();
            if (local_24 <= (double)(local_40 - iVar6) / _DAT_006b4b00 + dVar1) {
              iVar6 = FUN_004c6fd0();
              if (local_24 <= (double)(local_18 - iVar6) / _DAT_006b4b00 + dVar1) {
                iVar6 = FUN_004c6fd0();
                if (local_24 <= (double)(local_2c - iVar6) / _DAT_006b4b00 + dVar1) {
                  uVar7 = 0;
                }
                else {
                  *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 0xb;
                  uVar7 = 1;
                }
              }
              else {
                *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 0xc;
                uVar7 = 1;
              }
            }
            else {
              *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 0xd;
              uVar7 = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 3;
            uVar7 = 1;
          }
        }
        else {
          *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 4;
          uVar7 = 1;
        }
      }
      else {
        *(undefined2 *)(&DAT_00792498 + iVar5 * 2) = 5;
        uVar7 = 1;
      }
      return uVar7;
    }
    if (local_3c != iVar5) {
      FUN_0047e390((int)local_3c);
      iVar6 = FUN_004c7010();
      if (iVar6 == 1) {
        uVar7 = FUN_004c7050();
        sVar2 = FUN_004f69e0(uVar7);
        local_34 = local_34 + sVar2;
        uVar7 = FUN_004c7050();
        sVar2 = FUN_004f6880(uVar7);
        if (0 < sVar2) {
          local_34 = 0;
          goto LAB_00502143;
        }
      }
    }
    local_3c = local_3c + 1;
  } while( true );
}

