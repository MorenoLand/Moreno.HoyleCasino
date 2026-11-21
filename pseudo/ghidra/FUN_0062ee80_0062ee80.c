// FUN_0062ee80  0062ee80

uint __fastcall FUN_0062ee80(int param_1)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = _mbsnextc(*(uchar **)(param_1 + 0x24));
  puVar2 = _mbsinc(*(uchar **)(param_1 + 0x24));
  *(uchar **)(param_1 + 0x24) = puVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  if (uVar1 == 10) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return uVar1;
}

