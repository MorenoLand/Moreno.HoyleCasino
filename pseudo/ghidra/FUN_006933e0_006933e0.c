// FUN_006933e0  006933e0

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_006933e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [4];
  int aiStack_2c [5];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = param_1[10];
  iVar2 = *param_1;
  uStack_14 = 0x6933ff;
  iVar3 = iVar1 * -4;
  param_5 = param_5 + *(float *)(param_1[1] + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(&stack0xfffffff0 + iVar4 * 4 + iVar3) = 0xc61c3c00;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[10]);
  }
  if (param_5 < *(float *)(param_1[1] + 8)) {
    param_5 = *(float *)(param_1[1] + 8);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + 1;
      *(float *)(param_3 + -4 + iVar4 * 4) = param_5 + *(float *)(param_1[4] + -4 + iVar4 * 4);
    } while (iVar4 < iVar2);
  }
  iVar2 = param_1[2];
  (&uStack_14)[-iVar1] = param_4;
  *(undefined1 **)(auStack_18 + iVar3) = &stack0xfffffff0 + iVar3;
  aiStack_2c[4 - iVar1] = param_3;
  aiStack_2c[3 - iVar1] = param_2;
  aiStack_2c[2 - iVar1] = iVar2;
  aiStack_2c[1 - iVar1] = (int)param_1;
  aiStack_2c[-iVar1] = 0x693465;
  FUN_00693480();
  aiStack_2c[-iVar1] = param_3;
  *(undefined1 **)(auStack_30 + iVar3) = &stack0xfffffff0 + iVar3;
  auStack_38[1 - iVar1] = param_1;
  auStack_38[-iVar1] = 0x693470;
  FUN_00693620();
  return;
}

