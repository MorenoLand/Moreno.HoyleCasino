// FUN_00695a00  00695a00

undefined4 FUN_00695a00(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_4;
  
  iVar8 = 0;
  local_4 = 0;
  if (0 < param_4) {
    do {
      iVar6 = param_1[10];
      iVar2 = FUN_0069d390(param_3,param_1[9]);
      if (iVar2 < 0) {
        iVar8 = param_1[2];
        uVar7 = 0;
LAB_00695a75:
        iVar2 = FUN_0069d390(param_3,iVar6);
        while (iVar2 < 0) {
          if (iVar6 < 2) {
            if (iVar2 < 0) {
              return 0xffffffff;
            }
            break;
          }
          iVar6 = iVar6 + -1;
          iVar2 = FUN_0069d390(param_3,iVar6);
        }
        uVar3 = FUN_00694f20(iVar2);
        iVar2 = iVar8 - uVar7;
        while (1 < iVar2) {
          uVar5 = iVar2 >> 1;
          uVar1 = (uint)(uVar3 < *(uint *)(param_1[5] + (uVar5 + uVar7) * 4));
          iVar8 = iVar8 - (-uVar1 & uVar5);
          uVar7 = uVar7 + (uVar1 - 1 & uVar5);
          iVar2 = iVar8 - uVar7;
        }
        if (iVar6 < *(char *)(param_1[7] + uVar7)) {
          FUN_0069d440(param_3,iVar6);
          return 0xffffffff;
        }
        FUN_0069d440(param_3,(int)*(char *)(param_1[7] + uVar7));
        iVar8 = local_4;
      }
      else {
        uVar3 = *(uint *)(param_1[8] + iVar2 * 4);
        if ((int)uVar3 < 0) {
          uVar7 = (int)uVar3 >> 0xf & 0x7fff;
          iVar8 = param_1[2] - (uVar3 & 0x7fff);
          goto LAB_00695a75;
        }
        FUN_0069d440(param_3,(int)*(char *)(param_1[7] + -1 + uVar3));
        uVar7 = uVar3 - 1;
      }
      if (uVar7 == 0xffffffff) {
        return 0xffffffff;
      }
      iVar6 = *param_1;
      iVar2 = param_1[4];
      iVar4 = 0;
      if (0 < iVar6) {
        do {
          *(undefined4 *)(param_2 + iVar8 * 4) =
               *(undefined4 *)(iVar2 + iVar6 * uVar7 * 4 + iVar4 * 4);
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 1;
          local_4 = iVar8;
        } while (iVar4 < *param_1);
      }
    } while (iVar8 < param_4);
  }
  return 0;
}

