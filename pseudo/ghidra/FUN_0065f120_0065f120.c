// FUN_0065f120  0065f120

void __thiscall FUN_0065f120(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char *pcVar11;
  undefined **local_cc;
  int local_10;
  
  if (param_2 != 0) {
    ppuVar9 = (undefined **)(param_2 + 0x14);
    if (DAT_0163068c == 0) {
      if (*(char *)(param_1 + 0x1d5) == '\0') {
        if ((*(char *)(param_1 + 0x1d6) != '\0') && (DAT_0162ee80[0xd] != 0)) {
          puVar7 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x31c))();
          FUN_0063a3e0(0,0);
          FUN_0063ab10(ppuVar9);
          cVar2 = *(char *)(param_2 + 0x3a);
          piVar3 = (int *)FUN_0063aac0();
          *piVar3 = (int)cVar2;
          piVar3 = (int *)FUN_0063aac0();
          if (*piVar3 == 2) {
            ppuVar9 = &PTR_006b27f8;
            iVar6 = FUN_0063aac0();
            strcpy((char *)(iVar6 + 0x38),(char *)ppuVar9);
            cVar2 = *(char *)(param_2 + 0x3b);
            iVar6 = FUN_0063aac0();
            *(int *)(iVar6 + 0x54) = (int)cVar2;
          }
          else {
            pcVar11 = (char *)(param_2 + 0x21);
            iVar6 = FUN_0063aac0();
            strcpy((char *)(iVar6 + 0x38),pcVar11);
          }
          FUN_0063b0a0();
          if (DAT_0163068c == 0) {
            for (local_10 = 0; iVar6 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_10 < iVar6;
                local_10 = local_10 + 1) {
              if (local_10 != *(int *)(DAT_0162ee80[0xd] + 4)) {
                piVar3 = (int *)FUN_0063aac0();
                if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  iVar6 = FUN_0063aac0();
                  iVar8 = FUN_0063aac0();
                  iVar6 = strcmp((char *)(iVar8 + 4),(char *)(iVar6 + 4));
                  if (iVar6 == 0) {
                    cVar2 = *(char *)(param_2 + 0x3a);
                    piVar3 = (int *)FUN_0063aac0();
                    *piVar3 = (int)cVar2;
                    piVar3 = (int *)FUN_0063aac0();
                    if (*piVar3 == 2) {
                      ppuVar9 = &PTR_006b27f8;
                      iVar6 = FUN_0063aac0();
                      strcpy((char *)(iVar6 + 0x38),(char *)ppuVar9);
                      cVar2 = *(char *)(param_2 + 0x3b);
                      iVar6 = FUN_0063aac0();
                      *(int *)(iVar6 + 0x54) = (int)cVar2;
                    }
                    else {
                      pcVar11 = (char *)(param_2 + 0x21);
                      iVar6 = FUN_0063aac0();
                      strcpy((char *)(iVar6 + 0x38),pcVar11);
                      FUN_00664300(param_2 + 0x21);
                    }
                    FUN_006464d0(0,0);
                  }
                }
              }
            }
          }
          (**(code **)(*DAT_0162ee80 + 0x150))(*(undefined4 *)(DAT_0162ee80[0xd] + 4),puVar7);
          DAT_0162ee80[0xd] = 0;
          if (puVar7 == (undefined4 *)0x0) {
            return;
          }
          (**(code **)*puVar7)(1);
          return;
        }
        for (local_10 = 0; iVar6 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_10 < iVar6;
            local_10 = local_10 + 1) {
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) {
            FUN_0063ab10(ppuVar9);
            cVar2 = *(char *)(param_2 + 0x3a);
            piVar3 = (int *)FUN_0063aac0();
            *piVar3 = (int)cVar2;
            piVar3 = (int *)FUN_0063aac0();
            if (*piVar3 == 2) {
              ppuVar9 = &PTR_006b27f8;
              iVar6 = FUN_0063aac0();
              strcpy((char *)(iVar6 + 0x38),(char *)ppuVar9);
              cVar2 = *(char *)(param_2 + 0x3b);
              iVar6 = FUN_0063aac0();
              *(int *)(iVar6 + 0x54) = (int)cVar2;
            }
            else {
              pcVar11 = (char *)(param_2 + 0x21);
              iVar6 = FUN_0063aac0();
              strcpy((char *)(iVar6 + 0x38),pcVar11);
            }
            FUN_0063b0a0();
            return;
          }
        }
      }
      else {
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 != 0) {
          FUN_0063b0a0();
        }
        uVar4 = what();
        cVar2 = FUN_006368b0(uVar4);
        if (cVar2 != '\0') {
          uVar4 = *(undefined4 *)DAT_0162ee84[0x16];
          uVar5 = what();
          iVar6 = FUN_006369b0(uVar5);
          *(undefined4 *)DAT_0162ee84[0x16] = *(undefined4 *)(DAT_0162ee84[0x16] + iVar6 * 4);
          *(undefined4 *)(*(int *)DAT_0162ee84[0x16] + 4) = 0;
          *(undefined4 *)(DAT_0162ee84[0x16] + iVar6 * 4) = uVar4;
          *(int *)(*(int *)(DAT_0162ee84[0x16] + iVar6 * 4) + 4) = iVar6;
        }
        FUN_0063ab10(ppuVar9);
        cVar2 = *(char *)(param_2 + 0x3a);
        piVar3 = (int *)FUN_0063aac0();
        *piVar3 = (int)cVar2;
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 == 2) {
          ppuVar9 = &PTR_006b27f8;
          iVar6 = FUN_0063aac0();
          strcpy((char *)(iVar6 + 0x38),(char *)ppuVar9);
          cVar2 = *(char *)(param_2 + 0x3b);
          iVar6 = FUN_0063aac0();
          *(int *)(iVar6 + 0x54) = (int)cVar2;
        }
        else {
          pcVar11 = (char *)(param_2 + 0x21);
          iVar6 = FUN_0063aac0();
          strcpy((char *)(iVar6 + 0x38),pcVar11);
        }
        FUN_0063b0a0();
      }
      if (*(char *)(param_1 + 0x1d5) != '\0') {
        FUN_006375b0();
        iVar6 = FUN_0063aac0();
        (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x14))("LastLogin",iVar6 + 4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x3a) == '\x02') {
        local_cc = &PTR_006b27f8;
        ppuVar10 = ppuVar9;
      }
      else {
        ppuVar10 = (undefined **)(param_2 + 0x21);
        local_cc = ppuVar10;
      }
      FUN_0063db60(ppuVar9,*(undefined1 *)(param_2 + 0x3a),
                   CONCAT31((int3)((uint)ppuVar10 >> 8),*(undefined1 *)(param_2 + 0x3b)),local_cc);
    }
  }
  return;
}

