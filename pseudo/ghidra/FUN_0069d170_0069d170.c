// FUN_0069d170  0069d170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0069d170(float param_1)

{
  uint uVar1;
  
  uVar1 = (uint)ROUND(param_1 * _DAT_006e57f8 - _DAT_006b3654);
  if ((int)uVar1 < 0) {
    return (float10)_DAT_006b3650;
  }
  if (0x45f < (int)uVar1) {
    return (float10)_DAT_006c2fe8;
  }
  return (float10)*(float *)(&DAT_00790190 + (uVar1 & 0x1f) * 4) *
         (float10)*(float *)(&DAT_00790100 + ((int)uVar1 >> 5) * 4);
}

