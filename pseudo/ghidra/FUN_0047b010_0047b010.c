// FUN_0047b010  0047b010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0047b010(int param_1,int param_2,int param_3,char param_4,undefined4 param_5,undefined1 param_6,
            int param_7,char param_8)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *local_34;
  int local_24;
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ff2e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 1) {
    FUN_005e9f20("numCards == 1","..\\Casino\\PokerGame.cpp",0x271,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  iVar1 = FUN_0060c9a0();
  if ((*(int *)(param_1 + 0x414) < iVar1) || (iVar1 = FUN_0047e1d0(), iVar1 != 1)) {
    local_18 = 0;
    pvVar2 = operator_new(0x30);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_34 = (int *)0x0;
    }
    else {
      local_34 = (int *)FUN_00463e70(param_5);
    }
    local_8 = 0xffffffff;
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      (**(code **)(*DAT_0162ee84 + 0x80))(0x186a2,0,0,5,1,0x3f800000,_DAT_006b3654,0);
      iVar1 = FUN_0060c9a0();
      if (*(int *)(param_1 + 0x414) < iVar1) {
        local_24 = FUN_0060ca40(*(undefined4 *)(param_1 + 0x414));
      }
      else {
        iVar1 = FUN_0060c9a0();
        if (iVar1 <= *(int *)(param_1 + 0x4a4)) {
          FUN_005e9f20("nDiscardPileCounter < discardPile->Size()","..\\Casino\\PokerGame.cpp",0x284
                      );
        }
        local_24 = FUN_0060ca40(*(undefined4 *)(param_1 + 0x4a4));
      }
      if (param_8 == '\0') {
        FUN_0060c7d0(local_24);
      }
      else {
        FUN_0060c7d0(local_24);
      }
      if (*(int *)(local_24 + 8) == 0) {
        FUN_00463b90();
      }
      iVar1 = FUN_0047bbc0();
      iVar1 = FUN_0047bbc0(*(undefined4 *)(*(int *)(param_1 + 4 + iVar1 * 4) + 0x14));
      (**(code **)(**(int **)(local_24 + 8) + 0x44))
                (*(undefined4 *)(*(int *)(param_1 + 4 + iVar1 * 4) + 0x10));
      uVar3 = FUN_004c70d0();
      switch(uVar3) {
      case 2:
      case 3:
      case 4:
      case 5:
        if (param_8 == '\0') {
          iVar1 = FUN_0060c9a0(*(int *)(param_2 + 0x14) + 8);
          (**(code **)(*local_34 + 0xc))((iVar1 + -1) * 0xd + -0x55 + *(int *)(param_2 + 0x10));
        }
        else {
          iVar1 = FUN_0060c9a0(*(int *)(param_2 + 0x14) + -10);
          (**(code **)(*local_34 + 0xc))((iVar1 + 1) * 0xd + -0x55 + *(int *)(param_2 + 0x10));
        }
        break;
      case 0xffffffff:
      case 0:
      case 1:
      case 6:
      case 7:
        if (param_8 == '\0') {
          iVar1 = FUN_0060c9a0(*(int *)(param_2 + 0x14) + 8);
          (**(code **)(*local_34 + 0xc))((iVar1 + -1) * 0xd + 0x56 + *(int *)(param_2 + 0x10));
        }
        else {
          iVar1 = FUN_0060c9a0(*(int *)(param_2 + 0x14) + -10);
          (**(code **)(*local_34 + 0xc))((iVar1 + 1) * 0xd + 0x56 + *(int *)(param_2 + 0x10));
        }
      }
      if (param_8 == '\0') {
        if (param_4 == '\0') {
          FUN_00463db0(param_6);
        }
        else {
          FUN_00463d40();
        }
      }
      else {
        FUN_00463d40();
        (**(code **)(**(int **)(local_24 + 8) + 0x6c))(200);
      }
      uVar3 = FUN_00637810(4);
      *(undefined4 *)(*(int *)(local_24 + 8) + 0x184) = uVar3;
      if (*(int *)(*(int *)(local_24 + 8) + 0x184) < 4) {
        *(undefined4 *)(*(int *)(local_24 + 8) + 0x184) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(local_24 + 8) + 0x184) = 1;
      }
      iVar1 = FUN_0060c9a0();
      (**(code **)(**(int **)(local_24 + 8) + 0x6c))(iVar1 + 100);
      FUN_005f6050(local_34);
      iVar1 = FUN_0060c9a0();
      if (*(int *)(param_1 + 0x414) < iVar1) {
        *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 1;
        iVar1 = FUN_0060c9a0();
        if (*(int *)(param_1 + 0x414) == iVar1) {
          FUN_0047f980();
        }
      }
      else {
        *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + 1;
        if (*(int *)(param_1 + 0x4a4) == *(int *)(param_1 + 0x4a8)) {
          FUN_0047f980();
        }
      }
      if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xaf2)) {
        local_18 = 1;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xaff)) {
        local_18 = 1;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xb0c)) {
        local_18 = 1;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xb19)) {
        local_18 = 1;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xaf3)) {
        local_18 = 2;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xb00)) {
        local_18 = 2;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xb0d)) {
        local_18 = 2;
      }
      else if ((param_7 == 1) && (iVar1 = FUN_00463e50(), iVar1 == 0xb1a)) {
        local_18 = 2;
      }
      else if ((param_7 == 2) && (iVar1 = FUN_00463e50(), iVar1 == 0xafb)) {
        local_18 = 4;
      }
    }
  }
  else {
    local_18 = 3;
  }
  ExceptionList = local_10;
  return local_18;
}

