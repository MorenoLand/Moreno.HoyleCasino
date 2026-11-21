// FUN_005837d0  005837d0

void __fastcall FUN_005837d0(int param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined1 *)(param_1 + 0x89) = 1;
  FUN_00583af0();
  FUN_0057e760();
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x38))();
  if (cVar1 != '\0') {
    FUN_00583a50();
  }
  return;
}

