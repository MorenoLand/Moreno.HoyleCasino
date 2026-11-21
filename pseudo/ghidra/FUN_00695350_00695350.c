// FUN_00695350  00695350

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00695350(int *param_1,float *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int aiStack_34 [3];
  int *local_10;
  int local_c;
  
  param_4 = param_4 / *param_1;
  aiStack_34[2] = 0x69537a;
  local_10 = (int *)(&stack0xffffffd8 + param_4 * -8);
  aiStack_34[2 - param_4] = 0x695389;
  local_c = 0;
  if (0 < param_4) {
    do {
      iVar7 = param_1[10];
      aiStack_34[param_4 * -2 + 2] = param_1[9];
      aiStack_34[param_4 * -2 + 1] = param_3;
      aiStack_34[param_4 * -2] = 0x6953bb;
      iVar2 = FUN_0069d390();
      if (iVar2 < 0) {
        iVar2 = param_1[2];
        uVar8 = 0;
LAB_00695404:
        aiStack_34[param_4 * -2 + 2] = iVar7;
        aiStack_34[param_4 * -2 + 1] = param_3;
        aiStack_34[param_4 * -2] = 0x695411;
        iVar3 = FUN_0069d390();
        while (iVar3 < 0) {
          if (iVar7 < 2) {
            if (iVar3 < 0) goto LAB_006954aa;
            break;
          }
          iVar7 = iVar7 + -1;
          aiStack_34[param_4 * -2 + 2] = iVar7;
          aiStack_34[param_4 * -2 + 1] = param_3;
          aiStack_34[param_4 * -2] = 0x695428;
          iVar3 = FUN_0069d390();
        }
        aiStack_34[param_4 * -2 + 2] = iVar3;
        aiStack_34[param_4 * -2 + 1] = 0x695441;
        uVar4 = FUN_00694f20();
        iVar3 = iVar2 - uVar8;
        if (1 < iVar3) {
          do {
            uVar6 = iVar3 >> 1;
            uVar1 = (uint)(uVar4 < *(uint *)(param_1[5] + (uVar6 + uVar8) * 4));
            iVar2 = iVar2 - (-uVar1 & uVar6);
            uVar8 = uVar8 + (uVar1 - 1 & uVar6);
            iVar3 = iVar2 - uVar8;
          } while (1 < iVar3);
        }
        if (iVar7 < *(char *)(param_1[7] + uVar8)) {
          aiStack_34[param_4 * -2 + 2] = iVar7;
          aiStack_34[param_4 * -2 + 1] = param_3;
          aiStack_34[param_4 * -2] = 0x6954a7;
          FUN_0069d440();
LAB_006954aa:
          uVar8 = 0xffffffff;
        }
        else {
          aiStack_34[param_4 * -2 + 2] = (int)*(char *)(param_1[7] + uVar8);
          aiStack_34[param_4 * -2 + 1] = param_3;
          aiStack_34[param_4 * -2] = 0x695496;
          FUN_0069d440();
        }
      }
      else {
        uVar4 = *(uint *)(param_1[8] + iVar2 * 4);
        if ((int)uVar4 < 0) {
          uVar8 = (int)uVar4 >> 0xf & 0x7fff;
          iVar2 = param_1[2] - (uVar4 & 0x7fff);
          goto LAB_00695404;
        }
        aiStack_34[param_4 * -2 + 2] = (int)*(char *)(param_1[7] + -1 + uVar4);
        aiStack_34[param_4 * -2 + 1] = param_3;
        aiStack_34[param_4 * -2] = 0x6953f6;
        FUN_0069d440();
        uVar8 = uVar4 - 1;
      }
      local_10[param_4] = uVar8;
      if (uVar8 == 0xffffffff) {
        return 0xffffffff;
      }
      *local_10 = param_1[4] + *param_1 * uVar8 * 4;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (local_c < param_4);
  }
  iVar7 = 0;
  if (0 < *param_1) {
    do {
      iVar2 = 0;
      pfVar5 = param_2;
      if (0 < param_4) {
        do {
          iVar3 = iVar2 + 1;
          *pfVar5 = *(float *)(aiStack_34[param_4 * -2 + iVar2 + 3] + iVar7 * 4) + *pfVar5;
          iVar2 = iVar3;
          pfVar5 = pfVar5 + 1;
        } while (iVar3 < param_4);
      }
      param_2 = param_2 + param_4;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  return 0;
}

