// FUN_00537ce0  00537ce0

undefined4 FUN_00537ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00537910(param_1,param_4,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00537910(param_2,param_4,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00537910(param_3,param_4,1);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

