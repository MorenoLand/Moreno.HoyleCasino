// FUN_004360c0  004360c0

undefined4 __thiscall FUN_004360c0(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0xac4) == 0) {
    cVar1 = FUN_004369a0(param_2,0);
    if ((cVar1 == '\0') && (cVar1 = FUN_004369a0(param_2,2), cVar1 == '\0')) {
      return 1;
    }
  }
  else {
    cVar1 = FUN_004369a0(param_2,4);
    if ((((cVar1 == '\0') && (cVar1 = FUN_00435d40(param_2), cVar1 == '\0')) &&
        (cVar1 = FUN_004369a0(param_2,5), cVar1 == '\0')) &&
       (cVar1 = FUN_00435de0(param_2), cVar1 == '\0')) {
      return 1;
    }
    cVar1 = FUN_004369a0(param_2,1);
    if ((cVar1 == '\0') && (cVar1 = FUN_004369a0(param_2,3), cVar1 == '\0')) {
      return 1;
    }
    cVar1 = FUN_00435ee0(param_2,0,0);
    if ((cVar1 != '\0') || (cVar1 = FUN_00435fd0(param_2,0,0), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

