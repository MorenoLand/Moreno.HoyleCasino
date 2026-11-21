// FUN_0069a380  0069a380

undefined4 FUN_0069a380(int param_1,int *param_2,int param_3,int param_4,int *param_5,code *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_42c;
  int local_428;
  int local_418;
  int local_400 [128];
  int local_200 [128];
  
  piVar1 = (int *)*param_2;
  iVar2 = piVar1[3];
  iVar3 = *(int *)param_2[4];
  iVar4 = piVar1[2];
  iVar6 = (piVar1[1] - *piVar1) / iVar4;
  piVar11 = local_200;
  for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_400;
  for (iVar9 = 0x80; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_42c = 0;
  if (0 < param_2[2]) {
    do {
      iVar9 = 0;
      if (0 < iVar6) {
        do {
          if ((local_42c == 0) && (local_428 = 0, 0 < param_4)) {
            do {
              iVar10 = 1;
              iVar7 = *(int *)(param_5[local_428] + iVar9 * 4);
              if (1 < iVar3) {
                piVar11 = (int *)(param_5[local_428] + 4 + iVar9 * 4);
                do {
                  iVar7 = iVar7 * iVar2;
                  if (iVar10 + iVar9 < iVar6) {
                    iVar7 = iVar7 + *piVar11;
                  }
                  iVar10 = iVar10 + 1;
                  piVar11 = piVar11 + 1;
                } while (iVar10 < iVar3);
              }
              if (iVar7 < *(int *)(param_2[4] + 4)) {
                iVar7 = FUN_006951e0(param_2[4],iVar7,param_1 + 4);
                param_2[9] = param_2[9] + iVar7;
              }
              local_428 = local_428 + 1;
            } while (local_428 < param_4);
          }
          local_418 = 0;
          if (0 < iVar3) {
            iVar7 = iVar9 * iVar4;
            do {
              if (iVar6 <= iVar9) goto LAB_0069a5ac;
              iVar10 = *piVar1;
              if (0 < param_4) {
                local_428 = param_4;
                piVar11 = param_5;
                do {
                  if (local_42c == 0) {
                    local_400[*(int *)(*piVar11 + iVar9 * 4)] =
                         local_400[*(int *)(*piVar11 + iVar9 * 4)] + iVar4;
                  }
                  iVar5 = *(int *)(*piVar11 + iVar9 * 4);
                  if (((piVar1[iVar5 + 5] & 1 << ((byte)local_42c & 0x1f)) != 0) &&
                     (iVar5 = *(int *)(*(int *)(param_2[5] + iVar5 * 4) + local_42c * 4), iVar5 != 0
                     )) {
                    iVar8 = (*param_6)(param_1 + 4,
                                       *(int *)((int)piVar11 + (param_3 - (int)param_5)) +
                                       (iVar10 + iVar7) * 4,iVar4,iVar5,0);
                    param_2[8] = param_2[8] + iVar8;
                    iVar5 = *(int *)(*piVar11 + iVar9 * 4);
                    local_200[iVar5] = local_200[iVar5] + iVar8;
                  }
                  piVar11 = piVar11 + 1;
                  local_428 = local_428 + -1;
                } while (local_428 != 0);
              }
              local_418 = local_418 + 1;
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + iVar4;
            } while (local_418 < iVar3);
          }
        } while (iVar9 < iVar6);
      }
LAB_0069a5ac:
      local_42c = local_42c + 1;
    } while (local_42c < param_2[2]);
  }
  return 0;
}

