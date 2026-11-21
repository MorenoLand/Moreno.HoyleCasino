// FUN_00418190  00418190

undefined4 FUN_00418190(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    if (local_8 == 0) {
      local_18 = FUN_00630f40("SID_CASINO_1DECK");
    }
    else {
      local_18 = FUN_00630f40("SID_CASINO_2DECKS");
    }
    FUN_005f9ff0(0,0,local_8 + 7,1,0x30d4ca,0x50,local_8 * 0x19 + 0xa7,1,local_18,0x1f,0x45,0x42,
                 0xffffffff,0x14,0);
  }
  uVar1 = 8;
  FUN_005fb3a0(1);
  FUN_006065d0(uVar1);
  return 1;
}

