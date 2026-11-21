// FUN_0069d100  0069d100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0069d100(float param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = param_1 * _DAT_006e57f4 - _DAT_006e57f0;
  iVar1 = (int)ROUND(fVar2 - (float)_DAT_006b2c38);
  return ((float10)fVar2 - (float10)iVar1) *
         ((float10)*(float *)(&DAT_0078ff74 + iVar1 * 4) -
         (float10)*(float *)(&DAT_0078ff70 + iVar1 * 4)) +
         (float10)*(float *)(&DAT_0078ff70 + iVar1 * 4);
}

