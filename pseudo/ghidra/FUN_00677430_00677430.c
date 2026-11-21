// FUN_00677430  00677430

void __thiscall FUN_00677430(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *local_48;
  int local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_016306d8 != 0) {
    local_30[0] = FUN_005fb300(0);
    local_30[1] = 0;
    local_30[2] = FUN_005fb300(1);
    local_30[3] = 1;
    local_30[4] = FUN_005fb300(2);
    local_1c = 2;
    iVar2 = FUN_005fb720(0);
    local_18 = *(undefined4 *)(iVar2 + 0x48);
    local_14 = 3;
    local_c = 4;
    for (local_10 = 0; local_10 < local_c; local_10 = local_10 + 1) {
      if ((local_30[local_10 * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_30[local_10 * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_30[local_10 * 2 + 1];
        break;
      }
    }
    if (local_8 == -1) {
      if (*(int *)(param_2 + 0x18) == 3) {
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(&PTR_006b27f8);
      }
    }
    else {
      if (local_8 == 0) {
        uVar3 = FUN_00630f40("SID_SHELL_BACKGROUNDS_ROLLOVER1");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 1) {
        uVar3 = FUN_00630f40("SID_SHELL_BACKGROUNDS_ROLLOVER2");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 2) {
        uVar3 = FUN_00630f40("SID_SHELL_BACKGROUNDS_ROLLOVER3");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 3) {
        cVar1 = (**(code **)(*DAT_0162ee84 + 0xc0))();
        if (cVar1 == '\0') {
          local_48 = "SID_SHELL_BACKGROUNDS_ROLLOVER4_STANDALONE";
        }
        else {
          local_48 = "SID_SHELL_BACKGROUNDS_ROLLOVER4_COLLECTION";
        }
        uVar3 = FUN_00630f40(local_48);
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
    }
  }
  return;
}

