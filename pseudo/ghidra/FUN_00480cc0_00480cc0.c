// FUN_00480cc0  00480cc0

undefined4 __fastcall FUN_00480cc0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00480ea0(param_1,0);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*DAT_00791eb8 + 0x2d0))();
    if (cVar1 == '\0') {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

