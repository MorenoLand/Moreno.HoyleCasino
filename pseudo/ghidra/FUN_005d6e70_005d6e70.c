// FUN_005d6e70  005d6e70

bool FUN_005d6e70(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_005d52e0();
  if ((*(char *)(iVar2 + 0x29) != '\0') && (cVar1 = FUN_005d6c60(), cVar1 != '\0')) {
    cVar1 = FUN_005da7b0();
    if (cVar1 == '\0') {
      iVar2 = FUN_005d5a50();
      iVar3 = FUN_005d6bd0();
      return iVar3 <= iVar2;
    }
  }
  return false;
}

