// FUN_00401f30  00401f30

void __fastcall FUN_00401f30(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005da7b0(param_1);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_007902ec + 0x2d4))(), cVar1 != '\0')) {
    cVar1 = FUN_00408ec0();
    if (cVar1 == '\0') {
      uVar2 = FUN_005df650();
      FUN_00404160(uVar2);
    }
    else {
      FUN_005db8c0(0,0xaa);
    }
  }
  return;
}

