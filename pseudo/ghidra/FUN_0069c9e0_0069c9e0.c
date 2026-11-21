// FUN_0069c9e0  0069c9e0

void FUN_0069c9e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  
  iVar1 = param_1;
  uVar4 = param_4 - param_3;
  iVar7 = param_2 - param_1;
  iVar2 = (int)uVar4 / iVar7;
  if ((int)uVar4 < 0) {
    param_1 = iVar2 + -1;
  }
  else {
    param_1 = iVar2 + 1;
  }
  uVar5 = iVar2 * iVar7 >> 0x1f;
  param_4 = 0;
  iVar3 = iVar1 + 1;
  pfVar6 = (float *)(&DAT_0078f930 + param_3 * 4);
  *(float *)(param_5 + iVar1 * 4) =
       *(float *)(&DAT_0078f930 + param_3 * 4) * *(float *)(param_5 + iVar1 * 4);
  if (iVar3 < param_2) {
    do {
      param_4 = param_4 + (((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) -
                          ((iVar2 * iVar7 ^ uVar5) - uVar5));
      iVar1 = iVar2 * 4;
      if (iVar7 <= param_4) {
        param_4 = param_4 - iVar7;
        iVar1 = param_1 << 2;
      }
      pfVar6 = (float *)((int)pfVar6 + iVar1);
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_5 + -4 + iVar3 * 4) = *pfVar6 * *(float *)(param_5 + iVar1);
    } while (iVar3 < param_2);
  }
  return;
}

