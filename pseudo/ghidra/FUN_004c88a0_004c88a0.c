// FUN_004c88a0  004c88a0

void __thiscall FUN_004c88a0(int param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34;
  char local_33;
  undefined1 local_32;
  char local_31;
  undefined1 local_30;
  char local_2f;
  undefined1 local_2e;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a24d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = 0;
  if (param_4 == 0) {
    local_20 = 0;
    while (iVar1 = FUN_0060c9a0(), local_20 < iVar1) {
      local_1c = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_20);
      uVar2 = FUN_004dd780(&local_2e,local_1c);
      local_8._0_1_ = 1;
      local_2d = FUN_00484ba0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00464210();
      if (local_2d != '\0') {
        local_18 = *(int **)(local_1c + 8);
        if (local_18 == (int *)0x0) {
          FUN_005e9f20("cardView","..\\Casino\\PokerPlayer.cpp",0x4a9);
        }
        if (1 < local_14) {
          FUN_005e9f20("shTagToUse < MAX_TAGS","..\\Casino\\PokerPlayer.cpp",0x4aa);
        }
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0xb0))(2);
        iVar1 = (**(code **)(*local_18 + 0x54))();
        iVar1 = (**(code **)(*local_18 + 0x4c))(iVar1 + 0x23);
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x44))(iVar1 + 4);
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x74))();
        local_14 = local_14 + 1;
      }
      local_20 = local_20 + 1;
    }
  }
  else if (param_4 == 1) {
    local_24 = 0;
    while (iVar1 = FUN_0060c9a0(), local_24 < iVar1) {
      local_1c = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_24);
      uVar2 = FUN_004dd780(&local_30,local_1c);
      local_8._0_1_ = 2;
      local_2f = FUN_00484ba0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00464210();
      if (local_2f != '\0') {
        local_18 = *(int **)(local_1c + 8);
        if (local_18 == (int *)0x0) {
          FUN_005e9f20("cardView","..\\Casino\\PokerPlayer.cpp",0x4ba);
        }
        if (1 < local_14) {
          FUN_005e9f20("shTagToUse < MAX_TAGS","..\\Casino\\PokerPlayer.cpp",0x4bb);
        }
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0xb0))(0);
        iVar1 = (**(code **)(*local_18 + 0x54))();
        iVar1 = (**(code **)(*local_18 + 0x4c))(iVar1 + 0x21);
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x44))(iVar1 + 4);
        (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x74))();
        local_14 = local_14 + 1;
      }
      local_24 = local_24 + 1;
    }
  }
  else if (param_4 == 2) {
    local_28 = 0;
    while (iVar1 = FUN_0060c9a0(), local_28 < iVar1) {
      local_1c = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_28);
      uVar2 = FUN_004dd780(&local_32,local_1c);
      local_8._0_1_ = 3;
      local_31 = FUN_00484ba0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00464210();
      if (local_31 != '\0') {
        local_18 = *(int **)(local_1c + 8);
        if (local_18 == (int *)0x0) {
          FUN_005e9f20("cardView","..\\Casino\\PokerPlayer.cpp",0x4cb);
        }
        if (1 < local_14) {
          FUN_005e9f20("shTagToUse < MAX_TAGS","..\\Casino\\PokerPlayer.cpp",0x4cc);
        }
        (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0xb0))(1);
        iVar1 = (**(code **)(*local_18 + 0x54))();
        iVar1 = (**(code **)(*local_18 + 0x4c))(iVar1 + 0x33);
        (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0x44))(iVar1 + 4);
        (**(code **)(**(int **)(param_1 + 0x50 + local_14 * 4) + 0x74))();
        local_14 = local_14 + 1;
      }
      local_28 = local_28 + 1;
    }
  }
  else if (param_4 == 3) {
    local_2c = 0;
    while (iVar1 = FUN_0060c9a0(), local_2c < iVar1) {
      local_1c = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_2c);
      uVar2 = FUN_004dd780(&local_34,local_1c);
      local_8._0_1_ = 4;
      local_33 = FUN_00484ba0(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00464210();
      if (local_33 != '\0') {
        local_18 = *(int **)(local_1c + 8);
        if (local_18 == (int *)0x0) {
          FUN_005e9f20("cardView","..\\Casino\\PokerPlayer.cpp",0x4dc);
        }
        if (2 < local_14) {
          FUN_005e9f20("shTagToUse < MAX_HOLE_TAGS","..\\Casino\\PokerPlayer.cpp",0x4dd);
        }
        (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0xb0))(2);
        iVar1 = (**(code **)(*local_18 + 0x54))();
        iVar1 = (**(code **)(*local_18 + 0x4c))(iVar1 + 0x23);
        (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0x44))(iVar1 + 5);
        (**(code **)(**(int **)(param_1 + 0x58 + local_14 * 4) + 0x74))();
        local_14 = local_14 + 1;
      }
      local_2c = local_2c + 1;
    }
  }
  else {
    FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\PokerPlayer.cpp",0x4e6,
                 DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  local_8 = 0xffffffff;
  FUN_00484470();
  ExceptionList = local_10;
  return;
}

