// FUN_005cea60  005cea60

void __thiscall FUN_005cea60(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    cVar1 = (**(code **)(*DAT_0162ee80 + 0x168))();
    if (cVar1 == '\0') {
      FUN_005dbe20();
    }
    else {
      FUN_005ce980(*(undefined4 *)(param_1 + 0x1bc));
      FUN_005dbe20();
      *(undefined1 *)(DAT_007947e0 + 0x4ee9) = 1;
      *(undefined1 *)(DAT_007947e0 + 0x4eea) = 0;
      uVar2 = FUN_00630f40("SID_CASINO_TOURNAMENTOPPONENTS_TITLE",4);
      uVar2 = FUN_00630f40("SID_CASINO_TOURNAMENTOPPONENTS_MESSAGE",uVar2);
      iVar3 = FUN_0062ff10(uVar2);
      if (iVar3 == 6) {
        *(undefined1 *)(DAT_007947e0 + 0x4eea) = 1;
      }
      (**(code **)(*DAT_0162ee84 + 0x334))(*(undefined4 *)(param_1 + 0x1bc),0xffffffff);
    }
  }
  else if (param_2 == 1) {
    FUN_005dbe20();
  }
  return;
}

