// FUN_0057b050  0057b050

void __fastcall FUN_0057b050(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_005df700(0xffffffff);
  if (cVar1 == '\0') {
    FUN_005f2ba0(0x1391);
  }
  else {
    cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
    if (cVar1 != '\0') {
      if ((*(char *)(param_1 + 0x1c4) != '\0') && (cVar1 = FUN_005da7b0(), cVar1 == '\0')) {
        FUN_005f2b20(0x1391,1);
        return;
      }
      FUN_005f2ba0(0x1391);
    }
  }
  return;
}

