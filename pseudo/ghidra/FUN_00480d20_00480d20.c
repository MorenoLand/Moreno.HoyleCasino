// FUN_00480d20  00480d20

int __fastcall FUN_00480d20(int param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  iVar2 = (*(int *)(param_1 + 0xfc) + -1) * 0x10 +
          *(int *)(param_1 + 0xf8) * 0x30 + *(int *)(param_1 + 0xf4) * 0x180;
  iVar1 = *(int *)(param_1 + 0x104 + *(int *)(param_1 + 0xfc) * 4);
  FUN_00466800(0);
  if (iVar1 < 8) {
    *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
    local_14 = *(int *)(&DAT_007207ec + iVar2 + 4);
  }
  else if ((iVar1 + -1) % 7 == 0) {
    if (*(int *)(param_1 + 0xf0) == iVar1) {
      if (*(int *)(param_1 + 0xec) == 0) {
        FUN_005e9f20("lastMin!=0","..\\Casino\\PokerGame.cpp",0xb2f);
      }
      local_14 = *(int *)(param_1 + 0xec);
    }
    else {
      *(int *)(param_1 + 0xf0) = iVar1;
      local_14 = *(int *)(param_1 + 0xec) + *(int *)(&DAT_007207ec + iVar2 + 8);
    }
    FUN_00466800(1);
  }
  else {
    if (*(int *)(param_1 + 0xec) == 0) {
      FUN_005e9f20("lastMin!=0","..\\Casino\\PokerGame.cpp",0xb37);
    }
    local_14 = *(int *)(param_1 + 0xec);
  }
  *(int *)(param_1 + 0xec) = local_14;
  return local_14;
}

