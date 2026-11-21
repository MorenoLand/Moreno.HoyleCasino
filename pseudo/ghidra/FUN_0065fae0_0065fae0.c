// FUN_0065fae0  0065fae0

void __fastcall FUN_0065fae0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x1d4) == '\0') ||
     (cVar1 = (**(code **)(*DAT_0162ee84 + 0x2c))(0), cVar1 != '\0')) {
    cVar1 = (**(code **)(*DAT_0162ee84 + 0xb0))();
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x1d4) != '\0')) {
      (**(code **)(*DAT_0162ee84 + 900))();
    }
    FUN_0064ed50();
  }
  return;
}

