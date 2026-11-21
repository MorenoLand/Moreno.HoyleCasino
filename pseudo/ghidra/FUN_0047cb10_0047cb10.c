// FUN_0047cb10  0047cb10

void __thiscall FUN_0047cb10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    FUN_005e9f20("nMultiplierIn >= 1","..\\Casino\\PokerGame.cpp",0x47e);
  }
  if (4 < param_2) {
    FUN_005e9f20("nMultiplierIn <= 4","..\\Casino\\PokerGame.cpp",0x47f);
  }
  *(int *)(param_1 + 0x420) = param_2;
  uVar1 = FUN_0047caf0();
  FUN_0047be00(uVar1);
  return;
}

