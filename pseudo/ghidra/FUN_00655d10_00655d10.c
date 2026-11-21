// FUN_00655d10  00655d10

undefined4 __thiscall FUN_00655d10(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005fb300(0);
  cVar1 = FUN_00656230(param_2,uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_005fb300(1);
    cVar1 = FUN_00656230(param_2,uVar2);
    if (cVar1 == '\0') {
      uVar2 = FUN_005fb300(2);
      cVar1 = FUN_00656230(param_2,uVar2);
      if (cVar1 == '\0') {
        uVar2 = FUN_005fb350(3);
        cVar1 = FUN_00656230(param_2,uVar2);
        if (cVar1 == '\0') {
          uVar2 = FUN_005fb350(4);
          cVar1 = FUN_00656230(param_2,uVar2);
          if (cVar1 == '\0') {
            uVar2 = FUN_005fb350(0xc);
            cVar1 = FUN_00656230(param_2,uVar2);
            if (cVar1 == '\0') {
              uVar2 = FUN_005fb350(5);
              cVar1 = FUN_00656230(param_2,uVar2);
              if (cVar1 == '\0') {
                uVar2 = FUN_005fb350(6);
                cVar1 = FUN_00656230(param_2,uVar2);
                if (cVar1 == '\0') {
                  uVar2 = FUN_005fb350(7);
                  cVar1 = FUN_00656230(param_2,uVar2);
                  if (cVar1 == '\0') {
                    uVar2 = FUN_005fb860(9);
                    cVar1 = FUN_00656230(param_2,uVar2);
                    if (cVar1 == '\0') {
                      uVar2 = FUN_005fb860(10);
                      cVar1 = FUN_00656230(param_2,uVar2);
                      if (cVar1 == '\0') {
                        uVar2 = FUN_005fb860(0xd);
                        cVar1 = FUN_00656230(param_2,uVar2);
                        if (cVar1 == '\0') {
                          uVar2 = FUN_005fb720(0xb);
                          cVar1 = FUN_00656230(param_2,uVar2);
                          if (cVar1 == '\0') {
                            uVar2 = 0;
                          }
                          else {
                            cVar1 = (**(code **)(*DAT_0162ee84 + 0x178))();
                            if (cVar1 == '\0') {
                              uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC_CHOICE");
                              (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))
                                        (uVar2);
                              uVar2 = 1;
                            }
                            else {
                              uVar2 = FUN_00630f40(
                                                  "SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC_CHOICE_SOMEGAMES"
                                                  );
                              (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))
                                        (uVar2);
                              uVar2 = 1;
                            }
                          }
                        }
                        else {
                          uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_VOLUME");
                          (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                          uVar2 = 1;
                        }
                      }
                      else {
                        uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_SPEED");
                        (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                        uVar2 = 1;
                      }
                    }
                    else {
                      uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_ATTITUDE");
                      (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                      uVar2 = 1;
                    }
                  }
                  else {
                    uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_MOVIE");
                    (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                    uVar2 = 1;
                  }
                }
                else {
                  uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_SOUNDS");
                  (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                  uVar2 = 1;
                }
              }
              else {
                uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_NOISE");
                (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
                uVar2 = 1;
              }
            }
            else {
              uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC");
              (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
              uVar2 = 1;
            }
          }
          else {
            uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_ANIMATIONS");
            (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
            uVar2 = 1;
          }
        }
        else {
          uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_SPEECH");
          (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
          uVar2 = 1;
        }
      }
      else {
        uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_APPLY");
        (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_CANCEL");
      (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_00630f40("SID_SHELL_ENVIRONMENT_ROLLOVER_OK");
    (**(code **)(**(int **)(*(int *)(param_1 + 0x1bc) + 0x6c) + 0xb4))(uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

