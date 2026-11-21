// FUN_004f9050  004f9050

undefined4 __fastcall FUN_004f9050(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *(short *)(param_1 + 8);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 6)) {
    *(undefined2 *)(param_1 + 8) = 0;
  }
  while ((iVar2 = (int)sVar1, *(short *)(param_1 + 8) != iVar2 &&
         ((*(char *)(*(int *)(param_1 + 0x30) + (int)*(short *)(param_1 + 8)) != '\0' ||
          (iVar2 = *(int *)(param_1 + 0x34), *(char *)(iVar2 + *(short *)(param_1 + 8)) != '\0')))))
  {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    if (*(short *)(param_1 + 8) == *(short *)(param_1 + 6)) {
      *(undefined2 *)(param_1 + 8) = 0;
    }
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(param_1 + 8));
}

