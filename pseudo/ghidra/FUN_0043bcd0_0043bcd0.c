// FUN_0043bcd0  0043bcd0

void __thiscall FUN_0043bcd0(int param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 < 4) {
    FUN_005cb780(param_2,param_3);
    uVar1 = FUN_0064c8a0(0,0);
    *(int *)(param_1 + 0xf0 + param_2 * 8) = (int)uVar1;
    *(int *)(param_1 + 0xf4 + param_2 * 8) = (int)((ulonglong)uVar1 >> 0x20);
  }
  return;
}

