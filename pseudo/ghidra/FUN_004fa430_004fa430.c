// FUN_004fa430  004fa430

void __fastcall FUN_004fa430(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  
  for (sVar3 = 0; sVar3 < 8; sVar3 = sVar3 + 1) {
    uVar2 = FUN_0047e390((int)sVar3);
    cVar1 = FUN_004c6210(param_1,sVar3,uVar2);
    if (cVar1 == '\0') {
      FUN_004c6d90(0);
      FUN_004c7030(0);
    }
    else {
      cVar1 = FUN_004c61b0();
      FUN_004c6d90((cVar1 != '\0') + '\x01');
      FUN_004c7030(1);
    }
  }
  return;
}

