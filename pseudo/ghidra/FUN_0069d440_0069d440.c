// FUN_0069d440  0069d440

void FUN_0069d440(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + param_1[1];
  param_1[1] = uVar2 & 7;
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  param_1[3] = param_1[3] + iVar1;
  *param_1 = *param_1 + iVar1;
  return;
}

