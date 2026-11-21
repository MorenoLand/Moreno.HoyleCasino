// FUN_0060dae0  0060dae0

void __thiscall FUN_0060dae0(int *param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x30))();
  if (cVar1 != '\0') {
    DAT_015e55d2 = 1;
    (**(code **)(*param_1 + 0x34))();
    FUN_0060dd10(param_2);
    DAT_015e55d2 = 0;
  }
  return;
}

