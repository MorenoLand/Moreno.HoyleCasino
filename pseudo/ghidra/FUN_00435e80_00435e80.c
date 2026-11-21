// FUN_00435e80  00435e80

undefined4
FUN_00435e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  char cVar1;
  
  cVar1 = FUN_004369a0(param_1,param_2);
  if (cVar1 == '\0') {
    return 1;
  }
  cVar1 = FUN_004369a0(param_1,param_3);
  if ((cVar1 != '\0') && (param_5 == '\0')) {
    return 1;
  }
  if (param_4 != '\0') {
    FUN_0042a2b0(param_2);
  }
  return 0;
}

