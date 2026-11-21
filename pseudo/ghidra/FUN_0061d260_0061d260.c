// FUN_0061d260  0061d260

undefined4 FUN_0061d260(byte param_1,byte param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = ((int)(uint)param_1 >> 3) * 0x400 + ((int)(uint)param_2 >> 3) * 0x20;
  return CONCAT31((int3)((uint)iVar1 >> 8),(&DAT_015e5608)[((int)(uint)param_3 >> 3) + iVar1]);
}

