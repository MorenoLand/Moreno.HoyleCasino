// FUN_006604f0  006604f0

void __thiscall FUN_006604f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str2;
  char *_Str1;
  int local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  void *local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  if (DAT_016306b0 != (CPropertySection *)0x0) {
    local_84[0] = FUN_005fb300(0);
    local_84[1] = 0;
    local_84[2] = FUN_005fb300(1);
    local_84[3] = 1;
    local_84[4] = FUN_005fb300(2);
    local_70 = 2;
    local_6c = FUN_005fb300(3);
    local_68 = 3;
    local_64 = FUN_005fb300(0x5a);
    local_60 = 4;
    local_5c = FUN_005fb300(4);
    local_58 = 5;
    local_54 = FUN_005fb300(5);
    local_50 = 6;
    local_4c = *(undefined4 *)(DAT_016306b0 + 0x1bc);
    local_48 = 7;
    local_44 = CPropertySection::Get(DAT_016306b0,0x5f,(ulong *)0x0);
    local_40 = 8;
    local_3c = CPropertySection::Get(DAT_016306b0,0x60,(ulong *)0x0);
    local_38 = 9;
    iVar2 = FUN_005fb720(0);
    local_34 = *(undefined4 *)(iVar2 + 0x48);
    local_30 = 10;
    local_2c = FUN_005fb300(99);
    local_28 = 0xb;
    local_24 = FUN_005fb300(0x5b);
    local_20 = 0xc;
    local_1c = FUN_005fb5e0(0x5c);
    local_18 = 0xd;
    local_10 = 0xe;
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      if ((local_84[local_c * 2] != 0) &&
         (cVar1 = (**(code **)(*(int *)local_84[local_c * 2] + 0x84))(param_2), cVar1 != '\0')) {
        local_8 = local_84[local_c * 2 + 1];
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
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_OK");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 1) {
        _Str2 = (char *)FUN_00630f40("SID_GENERIC_QUIT");
        FUN_005fb300(1);
        _Str1 = (char *)FUN_00602b70();
        iVar2 = strcmp(_Str1,_Str2);
        if (iVar2 == 0) {
          uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_QUIT");
          (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
        }
        else {
          uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_CANCEL");
          (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
        }
      }
      if (local_8 == 2) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_NEW");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 3) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_DELETE");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 4) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_FACEMAKER");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 5) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_CREDITS");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 6) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_HELP");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 7) {
        if ((*(char *)(*(int *)(DAT_016306b0 + 0x1bc) + 0x88) == '\0') ||
           (cVar1 = FUN_0065c7f0(), cVar1 == '\0')) {
          cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
          if (cVar1 == '\0') {
            uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_PICTURE_NONTALKING");
            (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
          }
          else {
            uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_PICTURE_TALKING");
            (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
          }
        }
        else {
          uVar3 = FUN_00630f40("SID_SHELL_FACEMAKER_FILTERED_NONTALKING");
          (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
        }
      }
      if (local_8 == 8) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_STANDARD_FACES");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 9) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_CUSTOM_FACES");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 10) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_LIST_BOX");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 0xb) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_DELETE_FACE");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 0xc) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_VOICE_PREVIEW");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
      if (local_8 == 0xd) {
        uVar3 = FUN_00630f40("SID_SHELL_LOGINROLLOVER_VOICE_SELECTION");
        (**(code **)(**(int **)(param_1 + 0x6c) + 0xb4))(uVar3);
      }
    }
  }
  return;
}

