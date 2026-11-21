// FUN_004c6c10  004c6c10

void __thiscall FUN_004c6c10(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - param_2;
  cVar1 = FUN_004c61b0();
  if ((cVar1 != '\0') && (*(char *)(DAT_00791364 + 0x38) != '\0')) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_2;
  }
  param_2 = -param_2;
  uVar2 = 0;
  FUN_005dcb00(*(undefined4 *)(param_1 + 4),param_2,0);
  FUN_005d5cf0(param_2,uVar2);
  FUN_005d9180(*(undefined4 *)(param_1 + 4),0);
  FUN_004c6a70();
  return;
}

