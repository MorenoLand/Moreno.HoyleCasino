// FUN_0047e490  0047e490

int __thiscall FUN_0047e490(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0047f950(param_1);
    if (iVar1 <= local_8) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerGame.cpp",0x74a);
      return -1;
    }
    iVar1 = FUN_004c7050();
    if (iVar1 == param_2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

