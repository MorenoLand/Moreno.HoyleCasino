// FUN_0060a230  0060a230

undefined4 __thiscall FUN_0060a230(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      uVar1 = *(undefined4 *)(&DAT_00796d34 + param_2 * 0x74);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

