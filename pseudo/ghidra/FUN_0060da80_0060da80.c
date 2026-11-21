// FUN_0060da80  0060da80

void __fastcall FUN_0060da80(int *param_1)

{
  char cVar1;
  
  if (((char)param_1[0x17] == '\0') &&
     (cVar1 = (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x30))(), cVar1 == '\0')) {
    DAT_015e55d2 = 1;
    (**(code **)(*param_1 + 0x34))();
    FUN_0060e050();
    DAT_015e55d2 = 0;
  }
  return;
}

