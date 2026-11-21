// FUN_005a8590  005a8590

void __fastcall FUN_005a8590(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005da7b0(param_1);
  if ((cVar1 == '\0') || (cVar1 = (**(code **)(*DAT_00793600 + 0x2d4))(), cVar1 != '\0')) {
    cVar1 = FUN_005b7d30();
    if (cVar1 == '\0') {
      uVar2 = FUN_005df650();
      FUN_005aef40(uVar2);
    }
    else {
      FUN_005db8c0(0,0xaa);
    }
  }
  return;
}

