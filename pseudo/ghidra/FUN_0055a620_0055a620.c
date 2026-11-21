// FUN_0055a620  0055a620

void __fastcall FUN_0055a620(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  undefined2 extraout_var_11;
  undefined2 extraout_var_12;
  undefined2 extraout_var_13;
  undefined2 extraout_var_14;
  undefined2 extraout_var_15;
  undefined2 extraout_var_16;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_0055ec70();
  iVar2 = FUN_00559d00();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_0055ecb0(1);
      FUN_0055ec30();
    }
    else {
      cVar1 = FUN_0055e640(4,10,0xb);
      if (cVar1 == '\0') {
        switch(*(undefined4 *)(param_1 + 0x10)) {
        case 1:
        case 5:
        case 7:
        case 8:
        case 9:
          FUN_0055ecb0(1);
          FUN_0055ec30();
          break;
        default:
          cVar1 = FUN_0055e640(4,1,0xb);
          if (cVar1 == '\0') {
            cVar1 = FUN_0055e640(3,10,0xb);
            if (cVar1 == '\0') {
              cVar1 = FUN_0055e8e0();
              if (cVar1 == '\0') {
                cVar1 = FUN_00559680();
                if (cVar1 == '\0') {
                  cVar1 = FUN_0055e640(3,1,0xb);
                  if (cVar1 != '\0') {
                    iVar2 = FUN_00641280(*(undefined2 *)
                                          (param_1 + 4 + *(char *)(param_1 + 0x14) * 2));
                    iVar4 = FUN_00641280(*(undefined2 *)
                                          (param_1 + 4 + *(char *)(param_1 + 0x16) * 2));
                    if (iVar2 + 4 != iVar4) {
                      FUN_0055ecb0(0xc);
                      return;
                    }
                    FUN_0055ec70();
                  }
                  cVar1 = FUN_0055eba0();
                  if (cVar1 == '\0') {
                    cVar1 = FUN_0055e980(4,1,0xb);
                    if (cVar1 == '\0') {
                      FUN_0055ec70();
                    }
                    else {
                      FUN_0055ecb0(0x17);
                    }
                  }
                  else {
                    FUN_0055ecb0(0x2e);
                  }
                }
                else {
                  for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1)
                  {
                    uVar3 = FUN_00641280(CONCAT22(extraout_var,
                                                  *(undefined2 *)(param_1 + 4 + local_c * 2)));
                    iVar2 = FUN_00559d60(uVar3);
                    if (iVar2 == 2) {
                      *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                      local_8 = local_8 + 1;
                    }
                  }
                  FUN_0055ecb0(0x2a);
                }
              }
              else {
                FUN_0055ecb0(0x23);
              }
            }
            else {
              FUN_0055ecb0(5);
            }
          }
          else {
            FUN_0055ecb0(9);
          }
          break;
        case 6:
          FUN_0055ecb0(0x13);
        case 10:
          FUN_0055ecb0(0x27);
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            uVar3 = FUN_00641280(CONCAT22(extraout_var_06,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar2 = FUN_00559d60(uVar3);
            if (1 < iVar2) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
      }
      else {
        FUN_0055ecb0(2);
      }
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 7:
      FUN_0055ecb0(1);
      FUN_0055ec30();
      break;
    case 2:
      FUN_0055ecb0(0x16);
      for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
        if (iVar2 == 0x14) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
      break;
    case 4:
      iVar2 = FUN_00559d00();
      if (iVar2 == 4) {
        FUN_0055ecb0(0x16);
      }
      else {
        FUN_0055ecb0(1);
      }
      iVar2 = FUN_00559d00();
      if (iVar2 == 4) {
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(CONCAT22(extraout_var_08,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          iVar2 = FUN_00559d60(uVar3);
          if ((1 < iVar2) ||
             (iVar2 = FUN_005593d0(CONCAT22(extraout_var_09,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2))),
             iVar2 == 0x14)) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      break;
    case 6:
      iVar2 = FUN_00559d00();
      if (iVar2 == 3) {
        FUN_0055ecb0(0x29);
      }
      else {
        FUN_0055ecb0(0x15);
      }
      iVar2 = FUN_00559d00();
      if (iVar2 == 3) {
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          iVar2 = FUN_00559d60(uVar3);
          if ((1 < iVar2) ||
             (iVar2 = FUN_005593d0(CONCAT22(extraout_var_02,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2))),
             iVar2 == 0x14)) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      break;
    case 8:
    case 9:
      iVar2 = FUN_00559d00();
      if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0'))))
      {
        FUN_0055ecb0(3);
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          if (*(char *)(param_1 + local_c + 0x14) == -1) {
            local_8 = local_c;
            break;
          }
        }
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(CONCAT22(extraout_var_07,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        FUN_0055ec70();
        FUN_0055ecb0(1);
        FUN_0055ec30();
      }
      break;
    case 10:
      iVar2 = FUN_00559d00();
      if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0'))))
      {
        FUN_0055ecb0(3);
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          if (*(char *)(param_1 + local_c + 0x14) == -1) {
            local_8 = local_c;
            break;
          }
        }
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(CONCAT22(extraout_var_10,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        FUN_0055ec70();
        iVar2 = FUN_00559d00();
        if ((iVar2 == 1) && (cVar1 = FUN_0055e640(3,1,0xb), cVar1 != '\0')) {
          FUN_0055ecb0(10);
          for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(char *)(param_1 + local_c + 0x14) == -1) {
              local_8 = local_c;
              break;
            }
          }
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(CONCAT22(extraout_var_11,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
        else {
          FUN_0055ec70();
          iVar2 = FUN_00559d00();
          if (iVar2 == 2) {
            FUN_0055ecb0(0x2f);
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if (iVar2 == 0x14) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
          }
          else {
            FUN_0055ecb0(0x28);
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              uVar3 = FUN_00641280(CONCAT22(extraout_var_03,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              iVar2 = FUN_00559d60(uVar3);
              if ((1 < iVar2) ||
                 (iVar2 = FUN_005593d0(CONCAT22(extraout_var_04,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2))),
                 iVar2 == 0x14)) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
          }
        }
      }
      break;
    default:
      iVar2 = FUN_00559d00();
      if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0'))))
      {
        FUN_0055ecb0(3);
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          if (*(char *)(param_1 + local_c + 0x14) == -1) {
            local_8 = local_c;
            break;
          }
        }
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(CONCAT22(extraout_var_12,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        FUN_0055ec70();
        iVar2 = FUN_00559d00();
        if ((iVar2 == 1) && (cVar1 = FUN_0055e640(3,1,0xb), cVar1 != '\0')) {
          FUN_0055ecb0(10);
          for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(char *)(param_1 + local_c + 0x14) == -1) {
              local_8 = local_c;
              break;
            }
          }
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(CONCAT22(extraout_var_13,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
        else {
          FUN_0055ec70();
          iVar2 = FUN_00559d00();
          if ((iVar2 == 1) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) {
            FUN_0055ecb0(6);
            for (local_c = 0; local_c < 5; local_c = local_c + 1) {
              if (*(char *)(param_1 + local_c + 0x14) == -1) {
                local_8 = local_c;
                break;
              }
            }
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_005593d0(CONCAT22(extraout_var_14,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              if (iVar2 == 0x14) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
          }
          else {
            FUN_0055ec70();
            iVar2 = FUN_00559d00();
            if (iVar2 == 1) {
              for (local_c = 1; local_c < 5; local_c = local_c + 1) {
                cVar1 = FUN_0055e3e0(local_c,3);
                if (cVar1 != '\0') {
                  for (local_10 = 0; iVar2 = FUN_00559380(), local_10 < iVar2;
                      local_10 = local_10 + 1) {
                    iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2));
                    if ((iVar2 == local_c) ||
                       (iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                       iVar2 == 0x14)) {
                      *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                      local_8 = local_8 + 1;
                    }
                  }
                  FUN_0055ecb0(0x24);
                  return;
                }
              }
            }
            FUN_0055ec70();
            iVar2 = FUN_00559d00();
            if ((iVar2 == 1) && (cVar1 = FUN_0055e980(3,1,0xb), cVar1 != '\0')) {
              FUN_0055ecb0(0x22);
              for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_005593d0(CONCAT22(extraout_var_15,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 0x14) {
                  *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
                  return;
                }
              }
            }
            else {
              FUN_0055ec70();
              iVar2 = FUN_00559d00();
              if ((iVar2 == 1) && (cVar1 = FUN_0055e640(2,1,0xb), cVar1 != '\0')) {
                FUN_0055ecb0(0x11);
                for (local_c = 0; local_c < 5; local_c = local_c + 1) {
                  if (*(char *)(param_1 + local_c + 0x14) == -1) {
                    local_8 = local_c;
                    break;
                  }
                }
                for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_005593d0(CONCAT22(extraout_var_05,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
                  if (iVar2 == 0x14) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
              }
              else {
                for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_005593d0(CONCAT22(extraout_var_16,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
                  if (iVar2 == 0x14) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
                if (local_8 == 0) {
                  FUN_0055ec70();
                }
                else {
                  FUN_0055ecb0(0x31);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

