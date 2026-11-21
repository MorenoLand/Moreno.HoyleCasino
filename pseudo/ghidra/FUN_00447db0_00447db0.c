// FUN_00447db0  00447db0

void __fastcall FUN_00447db0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005da7b0(param_1);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_0079070c + 0x2d4))(), cVar1 != '\0')) {
    cVar1 = FUN_0044c830();
    if (cVar1 == '\0') {
      uVar2 = FUN_005df650();
      FUN_00449710(uVar2);
    }
    else {
      FUN_005db8c0(0,0xaa);
    }
  }
  return;
}

