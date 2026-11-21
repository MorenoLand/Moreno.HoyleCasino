// FUN_00537a50  00537a50

undefined1 FUN_00537a50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_00537910(param_1,0,param_4);
  if (((cVar1 != '\0') && (cVar1 = FUN_00537910(param_2,1,param_4), cVar1 != '\0')) &&
     (cVar1 = FUN_00537910(param_3,2,param_4), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

