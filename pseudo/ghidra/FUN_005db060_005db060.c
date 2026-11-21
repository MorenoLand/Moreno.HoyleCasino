// FUN_005db060  005db060

undefined4 FUN_005db060(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *extraout_var;
  int *piVar5;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    *(int *)(DAT_007947e0 + 0x4ef8) = *(int *)(DAT_007947e0 + 0x4ef8) + 1;
    piVar5 = extraout_var;
    iVar2 = FUN_005daec0();
    if (iVar2 == 0) {
      uVar3 = FUN_00630f40("SID_CASINO_TOURNAMENTOVER",0);
      uVar3 = FUN_00630f40("SID_CASINO_NOWINNER",uVar3);
      FUN_0062ff10(uVar3);
      uVar3 = (**(code **)(*DAT_0162ee84 + 600))();
      (**(code **)(*DAT_0162ee84 + 0x34))(uVar3);
      uVar3 = 0;
    }
    else {
      cVar1 = (**(code **)(*piVar5 + 0x2d0))();
      if (cVar1 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_005da880(0);
        uVar4 = FUN_0064c8a0(uVar3);
        uVar3 = FUN_005dac90(uVar4);
        FUN_005dcb00(uVar3);
        FUN_005d5cf0(uVar4);
        uVar3 = FUN_005dac90();
        uVar3 = FUN_005dcb00(uVar3);
        iVar2 = FUN_0063aac0();
        iVar2 = iVar2 + 4;
        uVar3 = FUN_005da880(piVar5,iVar2,uVar3);
        FUN_005dbf60(iVar2,uVar3);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

