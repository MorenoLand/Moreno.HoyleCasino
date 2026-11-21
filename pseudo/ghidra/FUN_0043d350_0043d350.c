// FUN_0043d350  0043d350

undefined4 __fastcall FUN_0043d350(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00444ac0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x188) == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

