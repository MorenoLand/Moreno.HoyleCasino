// FUN_00435d40  00435d40

undefined1 FUN_00435d40(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_004369a0(param_1,0x13);
  if ((((cVar1 == '\0') && (cVar1 = FUN_004369a0(param_1,0x14), cVar1 == '\0')) &&
      (cVar1 = FUN_004369a0(param_1,0x15), cVar1 == '\0')) &&
     (((cVar1 = FUN_004369a0(param_1,0x16), cVar1 == '\0' &&
       (cVar1 = FUN_004369a0(param_1,0x17), cVar1 == '\0')) &&
      (cVar1 = FUN_004369a0(param_1,0x18), cVar1 == '\0')))) {
    return 0;
  }
  return 1;
}

