// FUN_0041ade0  0041ade0

undefined4 FUN_0041ade0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_0041af20(param_1);
  if (((cVar1 != '\0') && (cVar1 = FUN_00418600(extraout_var), cVar1 != '\0')) &&
     (cVar1 = FUN_0041afe0(param_1,param_2), cVar1 != '\0')) {
    cVar1 = FUN_00418690();
    if (((cVar1 == '\0') && (iVar2 = FUN_00419780(param_1,param_2,0), iVar2 == 1)) &&
       (iVar2 = FUN_004194c0(param_1), 1 < iVar2)) {
      return 0;
    }
    cVar1 = FUN_00418600();
    if ((cVar1 == '\x01') && (iVar2 = FUN_004194c0(param_1), iVar2 == 1)) {
      return 1;
    }
    cVar1 = FUN_00418600();
    if ((cVar1 == '\x03') && (iVar2 = FUN_004194c0(param_1), iVar2 < 4)) {
      return 1;
    }
  }
  return 0;
}

