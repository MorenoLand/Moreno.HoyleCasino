// FUN_0047b5b0  0047b5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047b5b0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int *local_30;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ff54;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x30);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = (int *)FUN_00463e70(param_3);
  }
  local_8 = 0xffffffff;
  (**(code **)(*DAT_0162ee84 + 0x80))(0x387,0,0,5,1,0x3f800000,_DAT_006b3654,0,uVar1);
  iVar3 = FUN_0060c9a0();
  if (*(int *)(param_1 + 0x414) < iVar3) {
    local_1c = FUN_0060ca40(*(undefined4 *)(param_1 + 0x414));
  }
  else {
    iVar3 = FUN_0060c9a0();
    if (iVar3 <= *(int *)(param_1 + 0x4a4)) {
      FUN_005e9f20("nDiscardPileCounter < discardPile->Size()","..\\Casino\\PokerGame.cpp",0x2ec);
    }
    local_1c = FUN_0060ca40(*(undefined4 *)(param_1 + 0x4a4));
  }
  FUN_0060c7d0(local_1c);
  if (*(int *)(local_1c + 8) == 0) {
    FUN_00463b90();
  }
  iVar3 = FUN_0047bbc0();
  iVar3 = FUN_0047bbc0(*(undefined4 *)(*(int *)(param_1 + 4 + iVar3 * 4) + 0x14));
  (**(code **)(**(int **)(local_1c + 8) + 0x44))
            (*(undefined4 *)(*(int *)(param_1 + 4 + iVar3 * 4) + 0x10));
  iVar3 = FUN_004c70d0();
  if (iVar3 != -1) {
    FUN_005e9f20("dealToPlayer->GetSeatNumber() == -1","..\\Casino\\PokerGame.cpp",0x2f6);
  }
  iVar3 = FUN_0060c9a0();
  if (4 < iVar3 + -1) {
    FUN_005e9f20("nCurrentHandSize < 5","..\\Casino\\PokerGame.cpp",0x2f9);
  }
  FUN_00463db0(0);
  switch(iVar3 + -1) {
  case 0:
    (**(code **)(*local_30 + 0xc))(*(int *)(param_2 + 0x10) + 99,*(int *)(param_2 + 0x14) + -0x15);
    (**(code **)(**(int **)(local_1c + 8) + 0x6c))(100);
    break;
  case 1:
    (**(code **)(*local_30 + 0xc))(*(int *)(param_2 + 0x10) + 0x56,*(int *)(param_2 + 0x14) + 1);
    (**(code **)(**(int **)(local_1c + 8) + 0x6c))(0x65);
    break;
  case 2:
    (**(code **)(*local_30 + 0xc))(*(int *)(param_2 + 0x10) + 99,*(int *)(param_2 + 0x14) + 0x17);
    (**(code **)(**(int **)(local_1c + 8) + 0x6c))(0x68);
    break;
  case 3:
    (**(code **)(*local_30 + 0xc))(*(int *)(param_2 + 0x10) + 0x70,*(int *)(param_2 + 0x14) + 1);
    (**(code **)(**(int **)(local_1c + 8) + 0x6c))(0x67);
    break;
  case 4:
    (**(code **)(*local_30 + 0xc))(*(int *)(param_2 + 0x10) + 99,*(int *)(param_2 + 0x14) + 1);
    (**(code **)(**(int **)(local_1c + 8) + 0x6c))(0x66);
  }
  uVar4 = FUN_00637810(4);
  *(undefined4 *)(*(int *)(local_1c + 8) + 0x184) = uVar4;
  FUN_005f6050(local_30);
  iVar3 = FUN_0060c9a0();
  if (*(int *)(param_1 + 0x414) < iVar3) {
    *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 1;
    iVar3 = FUN_0060c9a0();
    if (*(int *)(param_1 + 0x414) == iVar3) {
      FUN_0047f980();
    }
  }
  else {
    *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + 1;
    if (*(int *)(param_1 + 0x4a4) == *(int *)(param_1 + 0x4a8)) {
      FUN_0047f980();
    }
  }
  ExceptionList = local_10;
  return;
}

