// FUN_005af1b0  005af1b0

void __fastcall FUN_005af1b0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int local_50;
  undefined4 local_48;
  undefined1 local_44;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7ce2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
    FUN_005b7220(DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  FUN_005a7ea0();
  FUN_005a8730(0);
  iVar3 = FUN_005b5240();
  if (iVar3 == -1) {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      FUN_005b7310(7,4);
      (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
    }
    else {
      iVar3 = FUN_005b5380();
      if (iVar3 == -1) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          FUN_005b6f40();
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        cVar2 = FUN_005b64c0();
        if (cVar2 == '\0') {
          FUN_005b70e0(0xffffffff,0);
          FUN_005aef40(200);
        }
        else {
          cVar2 = FUN_005b66c0();
          if (cVar2 == '\0') {
            iVar3 = FUN_005b56c0();
            if (iVar3 == -1) {
              if (*(char *)(DAT_00793604 + 0x678) == '\0') {
                FUN_005b70e0(0xffffffff,0);
                FUN_005a86d0();
              }
              else {
                iVar3 = FUN_005b5460();
                if (iVar3 == -1) {
                  cVar2 = FUN_005b3850();
                  if (cVar2 == '\0') {
                    iVar3 = FUN_005b57c0();
                    if (iVar3 == -1) {
                      iVar3 = FUN_005b5730();
                      if (iVar3 == -1) {
                        FUN_005b70e0(0xffffffff,0);
                        cVar2 = FUN_005b6530();
                        if (cVar2 == '\0') {
                          if (*(char *)(param_1 + 0xf) == '\0') {
                            *(undefined1 *)(param_1 + 0xf) = 1;
                            FUN_005b7310(0xb,4);
                            (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                          }
                          else {
                            *(undefined1 *)(param_1 + 0xf) = 0;
                            (**(code **)(**(int **)(DAT_00793600 + 4) + 4))(1);
                            pvVar5 = operator_new(0x28);
                            local_8 = 0;
                            if (pvVar5 == (void *)0x0) {
                              local_48 = 0;
                            }
                            else {
                              local_48 = FUN_005ab7f0(*(undefined4 *)(DAT_00793600 + 4));
                            }
                            local_8 = 0xffffffff;
                            FUN_005fc420(local_48);
                          }
                        }
                        else if ((*(char *)(param_1 + 0xf) == '\0') &&
                                (cVar2 = FUN_005b3300(4,0xffffffff), cVar2 == '\0')) {
                          *(undefined1 *)(param_1 + 0xf) = 1;
                          FUN_005b7310(0xb,4);
                          (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                        }
                        else {
                          local_50 = FUN_005b5620();
                          if (local_50 == -1) {
                            cVar2 = FUN_005da7b0();
                            if ((cVar2 == '\0') || (*(char *)(param_1 + 0x13) != '\0')) {
                              FUN_005b70e0(0xffffffff,0);
                              if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                                FUN_005a8590();
                              }
                              else {
                                FUN_005aef40(200);
                              }
                            }
                            else {
                              *(undefined1 *)(param_1 + 0x13) = 1;
                              FUN_005b7310(6,0xffffffff);
                              (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                            }
                          }
                          else {
                            FUN_005b70e0(local_50,0);
                            FUN_005b3870(local_50);
                            if (*(char *)(param_1 + 0x11) == '\0') {
                              *(undefined1 *)(param_1 + 0x11) = 1;
                              FUN_005b7310(0xc,4);
                              (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                            }
                            else if (*(char *)(param_1 + 0x12) == '\0') {
                              *(undefined1 *)(param_1 + 0x12) = 1;
                              FUN_005dcb00(local_50);
                              piVar4 = (int *)FUN_0063aac0();
                              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3))
                              {
                                bVar1 = true;
                              }
                              else {
                                bVar1 = false;
                              }
                              if (bVar1) {
                                local_50 = -1;
                              }
                              FUN_005b7310(5,local_50);
                              (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                            }
                            else {
                              *(undefined1 *)(param_1 + 0x11) = 0;
                              *(undefined1 *)(param_1 + 0x12) = 0;
                              (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                            }
                          }
                        }
                      }
                      else {
                        FUN_005b70e0(iVar3,0);
                        cVar2 = FUN_005b6040(iVar3);
                        if (cVar2 == '\0') {
                          if (*(char *)(param_1 + 0xd) == '\0') {
                            FUN_005af020(iVar3);
                          }
                          else {
                            FUN_005aee50(iVar3);
                          }
                        }
                        else {
                          FUN_005aea50(iVar3);
                        }
                      }
                    }
                    else {
                      FUN_005b70e0(iVar3,0);
                      FUN_005b3df0(iVar3);
                      (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
                    }
                  }
                  else {
                    FUN_005b70e0(0xffffffff,0);
                    FUN_005ad500();
                  }
                }
                else {
                  FUN_005b70e0(iVar3,0);
                  FUN_005acf90(iVar3);
                }
              }
            }
            else {
              FUN_005b70e0(iVar3,0);
              FUN_005b3b60(iVar3);
              (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
            }
          }
          else {
            FUN_005b70e0(0xffffffff,0);
            FUN_005ad0a0();
          }
        }
      }
      else {
        FUN_005dcb00(iVar3);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          local_44 = 1;
        }
        else {
          local_44 = 0;
        }
        FUN_005b70e0(iVar3,local_44);
        FUN_005aeb60(iVar3);
      }
    }
  }
  else {
    FUN_005ad620(0);
  }
  ExceptionList = local_10;
  return;
}

