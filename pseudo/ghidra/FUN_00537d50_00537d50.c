// FUN_00537d50  00537d50

undefined4
FUN_00537d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00537910(param_1,param_5,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00537910(param_2,param_5,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00537910(param_3,param_5,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_00537910(param_4,param_5,1);
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
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

