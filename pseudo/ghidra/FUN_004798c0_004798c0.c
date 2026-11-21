// FUN_004798c0  004798c0

undefined4 __fastcall FUN_004798c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  
  local_c = 0;
  while( true ) {
    iVar2 = FUN_0047f950(param_1);
    if (iVar2 <= local_c) {
      FUN_005e9f20("false","..\\Casino\\PokerGame.cpp",0xa3);
      return 0;
    }
    uVar3 = FUN_0047e390(local_c);
    cVar1 = FUN_004c61b0();
    if (cVar1 != '\0') break;
    local_c = local_c + 1;
  }
  return uVar3;
}

