// FUN_005c21c0  005c21c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005c21c0(void)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_00637810();
  dVar2 = log10((double)iVar1 + 1.0);
  return (float10)(float)((float10)_DAT_006d1d80 - (float10)dVar2);
}

