// FUN_00680e90  00680e90

bool FUN_00680e90(void)

{
  char cVar1;
  
  (**(code **)(*DAT_0162ee84 + 0x20c))();
  (**(code **)(*DAT_0162ee84 + 0x21c))();
  (**(code **)(*DAT_0162ee84 + 0x214))();
  (**(code **)(*DAT_007960d8 + 0x14))();
  cVar1 = FUN_00631fe0();
  if (cVar1 != '\0') {
    (**(code **)(*DAT_0162ee84 + 0x9c))();
  }
  return cVar1 != '\0';
}

