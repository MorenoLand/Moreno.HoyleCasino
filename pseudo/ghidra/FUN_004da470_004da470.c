// FUN_004da470  004da470

void __fastcall FUN_004da470(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_004c61b0();
  if (cVar1 != '\0') {
    *(undefined1 *)(DAT_00791364 + 0x40a) = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x38) + 0x74))();
  return;
}

