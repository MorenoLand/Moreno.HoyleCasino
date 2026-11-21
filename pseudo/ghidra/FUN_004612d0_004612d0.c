// FUN_004612d0  004612d0

char __thiscall FUN_004612d0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(short *)(param_1 + 0xa2 + param_2 * 2) != 0;
  if (*(short *)(param_1 + 0xac + param_2 * 2) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

