// FUN_00484830  00484830

undefined1 * __thiscall FUN_00484830(int *param_1,undefined1 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *local_50;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a00a1;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar3 = FUN_00484ba0(param_2);
  bVar1 = false;
  bVar2 = false;
  if (cVar3 != '\0') {
    uVar5 = FUN_00464130(DAT_007907b4,DAT_00790784);
    local_8 = 0;
    cVar3 = FUN_00464500(uVar5);
    bVar1 = true;
    bVar2 = false;
    if (cVar3 == '\0') {
      uVar5 = FUN_00464130(DAT_0079077c,DAT_00790780);
      local_8 = 1;
      cVar3 = FUN_00464500(uVar5);
      bVar1 = true;
      bVar2 = true;
      if (cVar3 == '\0') {
        FUN_005e9f20("!ContainsCard(pcAdd) || (pcAdd == PokerCard(BugRank,BugSuit)) || (pcAdd == PokerCard(WildRank,WildSuit))"
                     ,"..\\Casino\\PokerHand.cpp",0x78);
        bVar1 = true;
        bVar2 = true;
      }
    }
  }
  local_8 = 0;
  if (bVar2) {
    FUN_00464210(uVar4);
  }
  local_8 = 0xffffffff;
  if (bVar1) {
    FUN_00464210(uVar4);
  }
  if (((int)(short)param_1[1] % 7 == 0) && (((short)param_1[1] != 0 || (*param_1 == 0)))) {
    uVar4 = (uint)(short)((short)(((short)param_1[1] + 7) / 7) * 7);
    local_50 = operator_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    local_8 = 2;
    if (local_50 == (uint *)0x0) {
      local_50 = (uint *)0x0;
    }
    else {
      *local_50 = uVar4;
      _eh_vector_constructor_iterator_(local_50 + 1,1,uVar4,FUN_00464110,FUN_00464210);
      local_50 = local_50 + 1;
    }
    local_8 = 0xffffffff;
    if (local_50 == (uint *)0x0) {
      FUN_005e9f20("ppcNew","..\\Casino\\PokerHand.cpp",0x7f);
    }
    for (local_1c = 0; local_1c < (short)param_1[1]; local_1c = local_1c + 1) {
      *(undefined1 *)((int)local_50 + local_1c) = *(undefined1 *)(*param_1 + local_1c);
    }
    if ((*param_1 != 0) && (*param_1 != 0)) {
      FID_conflict__vector_deleting_destructor_(3);
    }
    *param_1 = (int)local_50;
  }
  *(undefined1 *)(*param_1 + (int)(short)param_1[1]) = *param_2;
  *(short *)(param_1 + 1) = (short)param_1[1] + 1;
  ExceptionList = local_10;
  return param_2;
}

