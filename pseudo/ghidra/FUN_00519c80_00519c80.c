// FUN_00519c80  00519c80

void FUN_00519c80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 < 0) || (7 < param_1)) {
    FUN_005e9f20("(0<=tournament) && (tournament<POKERTOURN_NUM_TOURNAMENTS)",
                 "..\\Casino\\PokerTourn.cpp",0x203);
  }
  if ((param_2 < 1) || (3 < param_2)) {
    FUN_005e9f20("(1<=strategy) && (strategy<=3)","..\\Casino\\PokerTourn.cpp",0x204);
  }
  if (param_1 == 4) {
    if (*(int *)(DAT_00791364 + 0xfc) == 1) {
      param_1 = 2;
    }
    else if (*(int *)(DAT_00791364 + 0xfc) == 2) {
      param_1 = 7;
    }
    else {
      param_1 = 0;
    }
  }
  puVar2 = (undefined4 *)(&DAT_007213e8 + param_2 * 0x20 + param_1 * 0x80);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

