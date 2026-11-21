// FUN_004fc640  004fc640

undefined1 FUN_004fc640(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') &&
     ((*(int *)(DAT_00791364 + 0xfc) != 3 ||
      ((iVar2 = FUN_005daec0(), iVar2 != 1 && (cVar1 = FUN_00480540(), cVar1 == '\0')))))) {
    return 0;
  }
  return 1;
}

