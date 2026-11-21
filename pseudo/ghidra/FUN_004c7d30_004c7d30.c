// FUN_004c7d30  004c7d30

undefined4 __thiscall FUN_004c7d30(int param_1,undefined4 param_2,char param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1d;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a22e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0060c9a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (iVar1 != 5) {
    FUN_005e9f20("hand->Size() == 5","..\\Casino\\PokerPlayer.cpp",0x3fa);
  }
  if (param_4 < 0) {
    FUN_005e9f20("shCardsToUse >= 0","..\\Casino\\PokerPlayer.cpp",0x3fb);
  }
  if (5 < param_4) {
    FUN_005e9f20("shCardsToUse <= 5","..\\Casino\\PokerPlayer.cpp",0x3fc);
  }
  FUN_00484300();
  local_8 = 1;
  if (*(int *)(param_1 + 8) != 0) {
    local_1c = 0;
    while (iVar1 = FUN_0060c9a0(), local_1c < iVar1) {
      if ((((((local_1c != 4) || ((0 < param_4 && (param_3 == '\0')))) &&
            ((local_1c != 2 || ((2 < param_4 && (param_3 == '\0')))))) &&
           ((local_1c != 3 || ((1 < param_4 && (param_3 != '\0')))))) &&
          ((local_1c != 1 || ((3 < param_4 && (param_3 != '\0')))))) &&
         ((local_1c != 0 || (4 < param_4)))) {
        uVar2 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_1c);
        uVar2 = FUN_004dd780(&local_1d,uVar2);
        local_8._0_1_ = 2;
        FUN_00484830(uVar2);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00464210();
      }
      local_1c = local_1c + 1;
    }
  }
  FUN_00484320(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470();
  ExceptionList = local_10;
  return param_2;
}

