// FUN_005ec4a0  005ec4a0

void FUN_005ec4a0(int *param_1,int *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (1 < param_3) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (param_4 != '\0') {
      param_1[1] = (param_1[1] - param_2[1]) / param_3 + param_2[1];
      *param_1 = (*param_1 - *param_2) / param_3 + *param_2;
    }
    param_1[2] = *param_1 + (param_1[2] - iVar1) / param_3 +
                 (uint)((param_1[2] - iVar1) % param_3 != 0);
    param_1[3] = param_1[1] + (param_1[3] - iVar2) / param_3 +
                 (uint)((param_1[3] - iVar2) % param_3 != 0);
  }
  return;
}

