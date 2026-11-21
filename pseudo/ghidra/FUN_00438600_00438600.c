// FUN_00438600  00438600

undefined4 __fastcall FUN_00438600(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00437340(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00437460();
    if (cVar1 == '\0') {
      cVar1 = FUN_00437860();
      if (cVar1 == '\0') {
        cVar1 = FUN_004380d0();
        if ((cVar1 == '\0') && (cVar1 = FUN_00438180(), cVar1 == '\0')) {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

