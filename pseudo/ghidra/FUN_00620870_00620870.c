// FUN_00620870  00620870

void __thiscall FUN_00620870(int param_1,void *param_2,byte param_3)

{
  memcpy((void *)(param_1 + 8),param_2,(uint)param_3 * 3);
  *(ushort *)(param_1 + 0x308) = (ushort)param_3;
  return;
}

