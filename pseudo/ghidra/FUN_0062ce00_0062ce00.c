// FUN_0062ce00  0062ce00

void FUN_0062ce00(uint *param_1)

{
  ushort *puVar1;
  
  *(ushort *)param_1 = (ushort)*param_1 << 8 | (ushort)*param_1 >> 8;
  puVar1 = (ushort *)((int)param_1 + 2);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  *param_1 = *param_1 << 0x10 | *param_1 >> 0x10;
  return;
}

