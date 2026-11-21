// FUN_004603a0  004603a0

undefined1 FUN_004603a0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_005cb7d0(param_1,0);
  if ((cVar1 == '\0') && (cVar1 = FUN_005cb7d0(param_1,1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

