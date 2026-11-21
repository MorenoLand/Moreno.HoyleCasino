// FUN_00435fd0  00435fd0

undefined1 FUN_00435fd0(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00435e80(param_1,0x1f,0x25,param_2,param_3);
  if ((((cVar1 != '\0') && (cVar1 = FUN_00435e80(param_1,0x20,0x26,param_2,param_3), cVar1 != '\0'))
      && (cVar1 = FUN_00435e80(param_1,0x21,0x27,param_2,param_3), cVar1 != '\0')) &&
     (((cVar1 = FUN_00435e80(param_1,0x22,0x28,param_2,param_3), cVar1 != '\0' &&
       (cVar1 = FUN_00435e80(param_1,0x23,0x29,param_2,param_3), cVar1 != '\0')) &&
      (cVar1 = FUN_00435e80(param_1,0x24,0x2a,param_2,param_3), cVar1 != '\0')))) {
    return 0;
  }
  return 1;
}

