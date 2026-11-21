// FUN_00597ca0  00597ca0

bool __thiscall FUN_00597ca0(int param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00598750(param_2,param_3);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x108) = 0;
    FUN_005997f0(param_2,param_3);
    FUN_00599570(param_2,0);
    FUN_005994a0(param_2,1);
  }
  return cVar1 == '\0';
}

