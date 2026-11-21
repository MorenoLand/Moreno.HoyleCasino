// FUN_00694090  00694090

float10 FUN_00694090(uint param_1)

{
  return (float10)(float)(param_1 & 0xbf800000 | 0x3f800000);
}

