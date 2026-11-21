// FUN_0069c560  0069c560

void FUN_0069c560(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_4 - param_3;
  iVar2 = param_2 - param_1;
  iVar1 = (int)uVar6 / iVar2;
  iVar3 = iVar1 + -1;
  if (-1 < (int)uVar6) {
    iVar3 = iVar1 + 1;
  }
  uVar4 = iVar1 * iVar2 >> 0x1f;
  param_4 = 0;
  *(int *)(param_5 + param_1 * 4) = param_3;
  while (param_1 = param_1 + 1, param_1 < param_2) {
    param_4 = param_4 + (((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) -
                        ((iVar1 * iVar2 ^ uVar4) - uVar4));
    iVar5 = iVar1;
    if (iVar2 <= param_4) {
      param_4 = param_4 - iVar2;
      iVar5 = iVar3;
    }
    param_3 = param_3 + iVar5;
    *(int *)(param_5 + param_1 * 4) = param_3;
  }
  return;
}

