// FUN_004b7670  004b7670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b7670(undefined4 param_1,int param_2)

{
  double dVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short local_3c;
  short local_30;
  double local_24;
  
  iVar6 = FUN_0047e420();
  local_30 = 0;
  local_3c = 0;
  do {
    iVar7 = FUN_0047f950();
    if (iVar7 <= local_3c) {
LAB_004b774a:
      sVar2 = FUN_004f0ac0();
      sVar2 = FUN_0062fbf0(sVar2 + 1);
      if ((int)*(short *)(&DAT_00791798 + iVar6 * 2) + (int)local_30 * (int)sVar2 < 0xb) {
        local_24 = *(double *)(&DAT_00791d90 + iVar6 * 8);
      }
      else {
        local_24 = (double)(*(short *)(&DAT_00791798 + iVar6 * 2) + -10 + (int)local_30 * (int)sVar2
                           ) / _DAT_006b4b00 + *(double *)(&DAT_00791d90 + iVar6 * 8);
      }
      sVar2 = FUN_004f1900(3);
      sVar3 = FUN_004f1900(2);
      sVar4 = FUN_004f1900(1);
      sVar5 = FUN_004f1bf0();
      iVar7 = FUN_0062fbf0((int)sVar5);
      dVar1 = (double)iVar7 / _DAT_006b4b00;
      iVar7 = FUN_0062fbf0((int)sVar5);
      dVar1 = ((dVar1 + 1.0) - (double)iVar7 / _DAT_006b4b00) / (double)param_2;
      if (*(double *)(&DAT_00791d90 + iVar6 * 8) <= (double)(int)sVar2 / _DAT_006b4b00 + dVar1) {
        if (*(double *)(&DAT_00791d90 + iVar6 * 8) <= (double)(int)sVar3 / _DAT_006b4b00 + dVar1) {
          if (*(double *)(&DAT_00791d90 + iVar6 * 8) <= (double)(int)sVar4 / _DAT_006b4b00 + dVar1)
          {
            if (local_24 <= (double)(int)sVar2 / _DAT_006b4b00 + dVar1) {
              if (local_24 <= (double)(int)sVar3 / _DAT_006b4b00 + dVar1) {
                uVar8 = 0;
                if ((double)(int)sVar4 / _DAT_006b4b00 + dVar1 < local_24) {
                  *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 10;
                  uVar8 = 1;
                }
              }
              else {
                *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 0xb;
                uVar8 = 1;
              }
            }
            else {
              *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 0xc;
              uVar8 = 1;
            }
          }
          else {
            *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 3;
            uVar8 = 1;
          }
        }
        else {
          *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 4;
          uVar8 = 1;
        }
      }
      else {
        *(undefined2 *)(&DAT_00791768 + iVar6 * 2) = 5;
        uVar8 = 1;
      }
      return uVar8;
    }
    if (local_3c != iVar6) {
      FUN_0047e390((int)local_3c);
      iVar7 = FUN_004c7010();
      if (iVar7 == 1) {
        FUN_0047e390((int)local_3c);
        uVar8 = FUN_004c7050();
        sVar2 = FUN_004f69e0(uVar8);
        local_30 = local_30 + sVar2;
        FUN_0047e390((int)local_3c);
        uVar8 = FUN_004c7050();
        sVar2 = FUN_004f6880(uVar8);
        if (0 < sVar2) {
          local_30 = 0;
          goto LAB_004b774a;
        }
      }
    }
    local_3c = local_3c + 1;
  } while( true );
}

