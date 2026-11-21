// FUN_004605c0  004605c0

undefined4 __thiscall FUN_004605c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + param_2 + 0xef) == '\0') || (*(char *)(param_1 + param_2 + 0xea) == '\0')
     ) {
    if ((*(char *)(param_1 + param_2 + 0xef) == '\0') &&
       (*(char *)(param_1 + param_2 + 0xea) == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

