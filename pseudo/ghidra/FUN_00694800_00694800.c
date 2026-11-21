// FUN_00694800  00694800

void * FUN_00694800(int *param_1,float param_2,int param_3)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  iVar6 = 0;
  if ((param_1[3] != 1) && (param_1[3] != 2)) {
    return (void *)0x0;
  }
  fVar8 = (float10)FUN_006945d0(param_1[4]);
  fVar9 = (float10)FUN_006945d0(param_1[5]);
  pvVar2 = calloc(*param_1 * (int)param_2,4);
  if (param_1[3] == 1) {
    iVar5 = FUN_00694790(param_1);
    param_2 = 0.0;
    if (0 < param_1[1]) {
      do {
        if ((param_3 == 0) || (*(int *)(param_1[2] + (int)param_2 * 4) != 0)) {
          iVar3 = *param_1;
          iVar7 = 0;
          local_8 = 0.0;
          iVar4 = 1;
          if (0 < iVar3) {
            do {
              fVar1 = ABS((float)*(int *)(param_1[8] + (((int)param_2 / iVar4) % iVar5) * 4)) *
                      (float)fVar9 + local_8 + (float)fVar8;
              if (param_1[7] != 0) {
                local_8 = fVar1;
              }
              if (param_3 == 0) {
                *(float *)((int)pvVar2 + (iVar3 * iVar6 + iVar7) * 4) = fVar1;
              }
              else {
                *(float *)((int)pvVar2 + (*(int *)(param_3 + iVar6 * 4) * iVar3 + iVar7) * 4) =
                     fVar1;
              }
              iVar4 = iVar4 * iVar5;
              iVar3 = *param_1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar3);
          }
          iVar6 = iVar6 + 1;
        }
        param_2 = (float)((int)param_2 + 1);
      } while ((int)param_2 < param_1[1]);
    }
  }
  else if ((param_1[3] == 2) && (iVar5 = 0, 0 < param_1[1])) {
    do {
      if ((param_3 == 0) || (*(int *)(param_1[2] + iVar5 * 4) != 0)) {
        iVar3 = *param_1;
        iVar4 = 0;
        param_2 = 0.0;
        if (0 < iVar3) {
          do {
            fVar1 = ABS((float)*(int *)(param_1[8] + (iVar3 * iVar5 + iVar4) * 4)) * (float)fVar9 +
                    param_2 + (float)fVar8;
            if (param_1[7] != 0) {
              param_2 = fVar1;
            }
            if (param_3 == 0) {
              *(float *)((int)pvVar2 + (iVar3 * iVar6 + iVar4) * 4) = fVar1;
            }
            else {
              *(float *)((int)pvVar2 + (*(int *)(param_3 + iVar6 * 4) * iVar3 + iVar4) * 4) = fVar1;
            }
            iVar3 = *param_1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar3);
        }
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]);
    return pvVar2;
  }
  return pvVar2;
}

