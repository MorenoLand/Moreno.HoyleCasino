// FUN_0046e2f0  0046e2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0046e2f0(char param_1,int param_2)

{
  double dVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  short local_3c;
  short local_30;
  double local_24;
  
  iVar7 = FUN_0047e420();
  local_30 = 0;
  local_3c = 0;
  do {
    iVar8 = FUN_0047f950();
    if (iVar8 <= local_3c) {
LAB_0046e3c5:
      sVar3 = FUN_004e03d0();
      sVar3 = FUN_0062fbf0(sVar3 + 1);
      if ((int)*(short *)(&DAT_00791010 + iVar7 * 2) + (int)local_30 * (int)sVar3 < 0xb) {
        local_24 = *(double *)(&DAT_00791260 + iVar7 * 8);
      }
      else {
        local_24 = (double)(*(short *)(&DAT_00791010 + iVar7 * 2) + -10 + (int)local_30 * (int)sVar3
                           ) / _DAT_006b4b00 + *(double *)(&DAT_00791260 + iVar7 * 8);
      }
      sVar3 = FUN_004e1210(3);
      sVar4 = FUN_004e1210(2);
      sVar5 = FUN_004e1210(1);
      sVar6 = FUN_004e1500();
      iVar8 = FUN_0062fbf0((int)sVar6);
      dVar1 = (double)iVar8 / _DAT_006b4b00;
      iVar8 = FUN_0062fbf0((int)sVar6);
      dVar1 = ((dVar1 + 1.0) - (double)iVar8 / _DAT_006b4b00) / (double)param_2;
      uVar9 = FUN_0047ce60();
      iVar8 = FUN_004c6f90(param_1 == '\0',uVar9);
      if (*(double *)(&DAT_00791260 + iVar7 * 8) <= (double)(sVar3 - iVar8) / _DAT_006b4b00 + dVar1)
      {
        if ((&DAT_00791040)[iVar7] == '\0') {
          uVar9 = FUN_0047ce60();
          iVar8 = FUN_004c6f90(param_1 == '\0',uVar9);
          if (*(double *)(&DAT_00791260 + iVar7 * 8) <=
              (double)(sVar4 - iVar8) / _DAT_006b4b00 + dVar1) {
            if ((&DAT_00791008)[iVar7] == '\0') {
              uVar9 = FUN_0047ce60();
              iVar8 = FUN_004c6f90(param_1 == '\0',uVar9);
              if (*(double *)(&DAT_00791260 + iVar7 * 8) <=
                  (double)(sVar5 - iVar8) / _DAT_006b4b00 + dVar1) {
                iVar8 = FUN_004c6fd0();
                if (local_24 <= (double)(sVar3 - iVar8) / _DAT_006b4b00 + dVar1) {
                  iVar8 = FUN_004c6fd0();
                  if (local_24 <= (double)(sVar4 - iVar8) / _DAT_006b4b00 + dVar1) {
                    iVar8 = FUN_004c6fd0();
                    if (local_24 <= (double)(sVar5 - iVar8) / _DAT_006b4b00 + dVar1) {
                      uVar9 = 0;
                    }
                    else {
                      *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 8;
                      uVar9 = 1;
                    }
                  }
                  else {
                    *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 9;
                    uVar9 = 1;
                  }
                }
                else {
                  *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 10;
                  uVar9 = 1;
                }
              }
              else {
                *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 3;
                uVar9 = 1;
              }
            }
            else {
              *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 9;
              uVar9 = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 4;
            uVar9 = 1;
          }
        }
        else {
          *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 10;
          uVar9 = 1;
        }
      }
      else {
        *(undefined2 *)(&DAT_00791020 + iVar7 * 2) = 5;
        uVar9 = 1;
      }
      return uVar9;
    }
    if (local_3c != iVar7) {
      FUN_0047e390((int)local_3c);
      iVar8 = FUN_004c7010();
      if (iVar8 == 1) {
        FUN_0047e390((int)local_3c);
        uVar2 = FUN_004c7050();
        sVar3 = FUN_004f69e0(CONCAT22(extraout_var,uVar2));
        local_30 = local_30 + sVar3;
        sVar3 = FUN_004f6880(CONCAT22(extraout_var_00,uVar2));
        if (0 < sVar3) {
          local_30 = 0;
          goto LAB_0046e3c5;
        }
      }
    }
    local_3c = local_3c + 1;
  } while( true );
}

