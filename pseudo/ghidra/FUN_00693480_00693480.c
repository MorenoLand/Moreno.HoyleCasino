// FUN_00693480  00693480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00693480(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,float param_6)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = *param_1;
  fVar3 = *(float *)(param_1[1] + 0x1f0) - param_6;
  if (0 < iVar1) {
    do {
      iVar2 = param_1[5];
      iVar6 = iVar7 + 1;
      param_6 = *(float *)(param_3 + iVar7 * 4);
      iVar5 = *(int *)(iVar2 + iVar7 * 4);
      if (iVar6 < iVar1) {
        piVar4 = (int *)(iVar2 + iVar6 * 4);
        do {
          if (*piVar4 != iVar5) break;
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 1;
          iVar6 = iVar6 + 1;
          if (param_6 < *(float *)(param_3 + iVar7 * 4)) {
            param_6 = *(float *)(param_3 + iVar7 * 4);
          }
        } while (iVar6 < iVar1);
      }
      if (*(float *)(param_4 + iVar7 * 4) < _DAT_006e57a4 + param_6) {
        iVar5 = iVar5 >> ((byte)param_1[8] & 0x1f);
        if (iVar5 < 0x11) {
          if (iVar5 < 0) {
            iVar5 = 0;
          }
        }
        else {
          iVar5 = 0x10;
        }
        FUN_00693570(param_5,*(undefined4 *)(param_2 + iVar5 * 4),param_6,
                     *(int *)(iVar2 + iVar7 * 4) - param_1[7],param_1[10],param_1[9],fVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}

