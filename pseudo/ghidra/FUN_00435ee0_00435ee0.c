// FUN_00435ee0  00435ee0

undefined1 FUN_00435ee0(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00435e80(param_1,0x13,0x19,param_2,param_3);
  if ((((cVar1 != '\0') && (cVar1 = FUN_00435e80(param_1,0x14,0x1a,param_2,param_3), cVar1 != '\0'))
      && (cVar1 = FUN_00435e80(param_1,0x15,0x1b,param_2,param_3), cVar1 != '\0')) &&
     (((cVar1 = FUN_00435e80(param_1,0x16,0x1c,param_2,param_3), cVar1 != '\0' &&
       (cVar1 = FUN_00435e80(param_1,0x17,0x1d,param_2,param_3), cVar1 != '\0')) &&
      (cVar1 = FUN_00435e80(param_1,0x18,0x1e,param_2,param_3), cVar1 != '\0')))) {
    return 0;
  }
  return 1;
}

