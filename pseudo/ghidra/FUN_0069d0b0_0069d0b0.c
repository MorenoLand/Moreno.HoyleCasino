// FUN_0069d0b0  0069d0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0069d0b0(float param_1)

{
  int iVar1;
  
  iVar1 = (int)ROUND(param_1 * (float)_DAT_006e57e8 - (float)_DAT_006b2c38);
  return ((float10)(param_1 * (float)_DAT_006e57e8) - (float10)iVar1) *
         ((float10)*(float *)(&DAT_0078fd6c + iVar1 * 4) -
         (float10)*(float *)(&DAT_0078fd68 + iVar1 * 4)) +
         (float10)*(float *)(&DAT_0078fd68 + iVar1 * 4);
}

