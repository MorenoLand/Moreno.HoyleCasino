// FUN_005d2310  005d2310

undefined1 FUN_005d2310(void)

{
  undefined1 uVar1;
  char cVar2;
  
  if (DAT_016306b0 == 0) {
LAB_005d2334:
    if (DAT_016306a4 != 0) {
      cVar2 = FUN_005f8910();
      if (cVar2 != '\0') goto LAB_005d2358;
    }
    uVar1 = 0;
  }
  else {
    cVar2 = FUN_005f8910();
    if (cVar2 == '\0') goto LAB_005d2334;
LAB_005d2358:
    uVar1 = 1;
  }
  return uVar1;
}

