// FUN_00674500  00674500

void __thiscall FUN_00674500(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_40 [5];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_016306d0 != 0) {
    local_40[0] = FUN_005fb300(0);
    local_40[1] = 0;
    local_40[2] = FUN_005fb300(1);
    local_40[3] = 1;
    iVar2 = FUN_005fb720(0);
    local_40[4] = *(undefined4 *)(iVar2 + 0x48);
    local_2c = 2;
    local_28 = *(undefined4 *)(DAT_016306d0 + 0x1bc);
    local_24 = 3;
    local_20 = FUN_005fb810(0);
    local_1c = 4;
    local_18 = FUN_005fb300(2);
    local_14 = 5;
    local_10 = 6;
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      if ((local_40[local_c * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_40[local_c * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_40[local_c * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(&PTR_006b27f8);
      }
    }
    else if (*(char *)(DAT_016306d0 + 0x1c4) == '\0') {
      if (local_8 == 0) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER6");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 1) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER7");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 2) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER8");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 3) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER9");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 5) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER10");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
    }
    else {
      if (local_8 == 0) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER1");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 1) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER2");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 2) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER3");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 3) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER4");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 4) {
        uVar3 = FUN_00630f40("SID_SHELL_SAVEGAME_ROLLOVER5");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
    }
  }
  return;
}

