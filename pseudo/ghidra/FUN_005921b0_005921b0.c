// FUN_005921b0  005921b0

void __fastcall FUN_005921b0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005da7b0(param_1);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_007935a4 + 0x2d4))(), cVar1 != '\0')) {
    cVar1 = FUN_00599780();
    if (cVar1 == '\0') {
      uVar2 = FUN_005df650();
      FUN_005956f0(uVar2);
    }
    else {
      FUN_005db8c0(0,0xaa);
    }
  }
  return;
}

