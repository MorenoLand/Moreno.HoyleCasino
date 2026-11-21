// FUN_00435de0  00435de0

undefined1 FUN_00435de0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_004369a0(param_1,0x1f);
  if ((((cVar1 == '\0') && (cVar1 = FUN_004369a0(param_1,0x20), cVar1 == '\0')) &&
      (cVar1 = FUN_004369a0(param_1,0x21), cVar1 == '\0')) &&
     (((cVar1 = FUN_004369a0(param_1,0x22), cVar1 == '\0' &&
       (cVar1 = FUN_004369a0(param_1,0x23), cVar1 == '\0')) &&
      (cVar1 = FUN_004369a0(param_1,0x24), cVar1 == '\0')))) {
    return 0;
  }
  return 1;
}

