// FUN_00694790  00694790

void FUN_00694790(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)_CIpow();
  floor((double)fVar5);
  iVar1 = ftol();
  while( true ) {
    while( true ) {
      iVar2 = 1;
      iVar3 = 1;
      if (0 < *param_1) {
        iVar4 = *param_1;
        do {
          iVar2 = iVar2 * iVar1;
          iVar3 = iVar3 * (iVar1 + 1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar2 <= param_1[1]) break;
      iVar1 = iVar1 + -1;
    }
    if (param_1[1] < iVar3) break;
    iVar1 = iVar1 + 1;
  }
  return;
}

