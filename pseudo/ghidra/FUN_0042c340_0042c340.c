// FUN_0042c340  0042c340

void __fastcall FUN_0042c340(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042a370(*(undefined4 *)(param_1 + 0xb0c));
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0xae4) != 0)) {
    (**(code **)(**(int **)(param_1 + 0xae4) + 0x74))();
  }
  return;
}

