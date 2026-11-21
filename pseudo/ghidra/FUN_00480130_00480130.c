// FUN_00480130  00480130

void __fastcall FUN_00480130(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_34;
  int local_2c;
  int local_20 [7];
  
  local_34 = -1;
  for (local_2c = 0; local_2c < 7; local_2c = local_2c + 1) {
    local_20[local_2c] = 0;
  }
  FUN_00519e40(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8),local_20);
  for (local_2c = 6; -1 < local_2c; local_2c = local_2c + -1) {
    if (*(int *)(param_1 + 0x3e4 + local_2c * 4) != -1) {
      FUN_0047e390(*(undefined4 *)(param_1 + 0x3e4 + local_2c * 4));
      cVar2 = FUN_004c61b0();
      if (cVar2 != '\0') {
        local_34 = 6 - local_2c;
      }
    }
  }
  FUN_00519e90(*(undefined4 *)(param_1 + 0xf4),local_34 == 0);
  if (local_34 != -1) {
    if (local_34 == 0) {
      FUN_00520730(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    }
    iVar1 = local_20[local_34];
    if (iVar1 < 1000) {
      FUN_005e9f20("prizeAmount >= 1000","..\\Casino\\PokerGame.cpp",0x9e5);
    }
    uVar5 = FUN_0064c8a0(iVar1,0);
    iVar3 = FUN_005dcb00(0);
    *(undefined8 *)(iVar3 + 0x4dc) = uVar5;
    iVar3 = FUN_005dcb00(0);
    iVar4 = *(int *)(iVar3 + 0x4b4) + iVar1;
    uVar5 = FUN_0064c8a0(iVar4,0);
    iVar3 = FUN_005dcb00(0);
    *(undefined8 *)(iVar3 + 0x4b4) = uVar5;
    uVar5 = FUN_0064c8a0(iVar4,0);
    FUN_005dcb00(0,uVar5);
    FUN_005d59e0(uVar5);
    FUN_00519fb0(*(undefined4 *)(param_1 + 0xf4),iVar1);
    uVar5 = FUN_0064c8a0(iVar4,0);
    FUN_005e7e40(0,6,uVar5);
  }
  return;
}

