// FUN_00699aa0  00699aa0

int FUN_00699aa0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

