// FUN_00438230  00438230

undefined1 FUN_00438230(void)

{
  char cVar1;
  undefined1 local_c;
  
  cVar1 = FUN_00436a00(0);
  if (cVar1 == '\0') {
LAB_00438271:
    local_c = 0;
  }
  else {
    cVar1 = FUN_00437150();
    if (cVar1 == '\0') {
      cVar1 = FUN_00437200();
      if (cVar1 == '\0') goto LAB_00438271;
    }
    local_c = 1;
  }
  return local_c;
}

