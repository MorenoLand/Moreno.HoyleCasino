// FUN_00464e10  00464e10

void __thiscall FUN_00464e10(undefined4 param_1,ushort *param_2)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  if (*param_2 == 0) {
    FUN_005e9f20("usSuitBag != 0x0000u","..\\Casino\\PokerCardBag.cpp",0xd2);
  }
  uStack_8 = CONCAT13(*DAT_00790758,(undefined3)uStack_8);
  while( true ) {
    if (*DAT_007907a4 < uStack_8._3_1_) {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerCardBag.cpp",0xdd);
      return;
    }
    if (((uint)*param_2 & 1 << (uStack_8._3_1_ & 0x1f)) != 0) break;
    uStack_8 = CONCAT13(uStack_8._3_1_ + 1,(undefined3)uStack_8);
  }
  uStack_8._0_3_ = CONCAT12(uStack_8._3_1_,(undefined2)uStack_8);
  FUN_00464380((int)&uStack_8 + 2);
  *param_2 = *param_2 & 0x1fffU - (short)(1 << (uStack_8._3_1_ & 0x1f));
  return;
}

