// FUN_00630030  00630030

void FUN_00630030(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005f3fe0();
  if (iVar2 == 0) {
    cVar1 = FUN_00607900("confirmQuit",DAT_007960d4);
    DAT_007960d4 = cVar1 != '\0';
    iVar2 = FUN_005f3bf0();
    if ((iVar2 == 0x44c) || (iVar2 = FUN_005f3bf0(), iVar2 == 0x3e9)) {
      (**(code **)(*DAT_0162ee84 + 0x2c))(1);
    }
    else {
      (**(code **)(*DAT_0162ee84 + 0x2c))(DAT_007960d4 == '\0');
    }
  }
  return;
}

