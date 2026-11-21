// FUN_0054d7e0  0054d7e0

void __fastcall FUN_0054d7e0(int param_1)

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
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00551960();
  iVar2 = FUN_0054cec0();
  if (iVar2 == 0) {
    cVar1 = FUN_00551330(4,10,0xb);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 1:
      case 5:
      case 7:
      case 8:
      case 9:
        FUN_005519a0(1);
        FUN_00551920();
        break;
      default:
        cVar1 = FUN_00551330(4,1,0xb);
        if (cVar1 == '\0') {
          cVar1 = FUN_00551330(3,10,0xb);
          if (cVar1 == '\0') {
            cVar1 = FUN_005515d0();
            if (cVar1 == '\0') {
              cVar1 = FUN_0054c840();
              if (cVar1 == '\0') {
                cVar1 = FUN_00551330(3,1,0xb);
                if (cVar1 != '\0') {
                  iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x14) * 2))
                  ;
                  iVar4 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x16) * 2))
                  ;
                  if (iVar2 + 4 != iVar4) {
                    FUN_005519a0(0xc);
                    return;
                  }
                  FUN_00551960();
                }
                cVar1 = FUN_00551890();
                if (cVar1 == '\0') {
                  cVar1 = FUN_00551670(4,1,0xb);
                  if (cVar1 == '\0') {
                    FUN_00551960();
                  }
                  else {
                    FUN_005519a0(0x17);
                  }
                }
                else {
                  FUN_005519a0(0x2e);
                }
              }
              else {
                for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                  uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
                  iVar2 = FUN_0054cf20(uVar3);
                  if (iVar2 == 2) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
                FUN_005519a0(0x2a);
              }
            }
            else {
              FUN_005519a0(0x23);
            }
          }
          else {
            FUN_005519a0(5);
          }
        }
        else {
          FUN_005519a0(9);
        }
        break;
      case 6:
        FUN_005519a0(0x13);
      case 10:
        FUN_005519a0(0x27);
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
          iVar2 = FUN_0054cf20(uVar3);
          if (1 < iVar2) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
    }
    else {
      FUN_005519a0(2);
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 9:
      FUN_005519a0(1);
      FUN_00551920();
      break;
    case 2:
      FUN_005519a0(0x16);
      for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_0054c590(CONCAT22(extraout_var_07,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        if (iVar2 == 0x14) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
      break;
    case 4:
      iVar2 = FUN_0054cec0();
      if (iVar2 == 4) {
        FUN_005519a0(0x16);
      }
      else {
        FUN_005519a0(1);
      }
      iVar2 = FUN_0054cec0();
      if (iVar2 == 4) {
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          iVar2 = FUN_0054cf20(uVar3);
          if ((1 < iVar2) ||
             (iVar2 = FUN_0054c590(CONCAT22(extraout_var_01,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2))),
             iVar2 == 0x14)) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      break;
    case 6:
      iVar2 = FUN_0054cec0();
      if (iVar2 == 3) {
        FUN_005519a0(0x29);
      }
      else {
        FUN_005519a0(0x15);
      }
      iVar2 = FUN_0054cec0();
      if (iVar2 == 3) {
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(CONCAT22(extraout_var_08,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
          iVar2 = FUN_0054cf20(uVar3);
          if ((1 < iVar2) ||
             (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 0x14)) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      break;
    case 10:
      iVar2 = FUN_0054cec0();
      if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_0054cec0(), iVar2 == 1 && (cVar1 = FUN_00551330(3,10,0xb), cVar1 != '\0'))))
      {
        FUN_005519a0(3);
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          if (*(char *)(param_1 + local_c + 0x14) == -1) {
            local_8 = local_c;
            break;
          }
        }
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        FUN_00551960();
        iVar2 = FUN_0054cec0();
        if (iVar2 == 2) {
          FUN_005519a0(0x2f);
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_09,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
        else {
          FUN_005519a0(0x28);
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
            iVar2 = FUN_0054cf20(uVar3);
            if ((1 < iVar2) ||
               (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 0x14)) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
      }
      break;
    default:
      iVar2 = FUN_0054cec0();
      if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_0054cec0(), iVar2 == 1 && (cVar1 = FUN_00551330(3,10,0xb), cVar1 != '\0'))))
      {
        FUN_005519a0(3);
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          if (*(char *)(param_1 + local_c + 0x14) == -1) {
            local_8 = local_c;
            break;
          }
        }
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(CONCAT22(extraout_var_03,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
      else {
        FUN_00551960();
        iVar2 = FUN_0054cec0();
        if ((iVar2 == 1) && (cVar1 = FUN_00551330(3,1,0xb), cVar1 != '\0')) {
          FUN_005519a0(10);
          for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(char *)(param_1 + local_c + 0x14) == -1) {
              local_8 = local_c;
              break;
            }
          }
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_04,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
        else {
          FUN_00551960();
          iVar2 = FUN_0054cec0();
          if ((iVar2 == 1) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) {
            FUN_005519a0(6);
            for (local_c = 0; local_c < 5; local_c = local_c + 1) {
              if (*(char *)(param_1 + local_c + 0x14) == -1) {
                local_8 = local_c;
                break;
              }
            }
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_0054c590(CONCAT22(extraout_var_05,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              if (iVar2 == 0x14) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
          }
          else {
            FUN_00551960();
            iVar2 = FUN_0054cec0();
            if ((iVar2 == 1) && (cVar1 = FUN_00551670(3,1,0xb), cVar1 != '\0')) {
              FUN_005519a0(0x22);
              for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
                if (iVar2 == 0x14) {
                  *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
                  return;
                }
              }
            }
            else {
              FUN_00551960();
              iVar2 = FUN_0054cec0();
              if (iVar2 == 1) {
                for (local_c = 1; local_c < 5; local_c = local_c + 1) {
                  cVar1 = FUN_005510d0(local_c,3);
                  if (cVar1 != '\0') {
                    FUN_005519a0(0x24);
                    for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2;
                        local_10 = local_10 + 1) {
                      iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2));
                      if ((iVar2 == local_c) ||
                         (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_10 * 2)),
                         iVar2 == 0x14)) {
                        *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                        local_8 = local_8 + 1;
                      }
                    }
                    return;
                  }
                }
              }
              iVar2 = FUN_0054cec0();
              if ((iVar2 == 1) && (cVar1 = FUN_00551330(2,1,0xb), cVar1 != '\0')) {
                FUN_005519a0(0x11);
                for (local_c = 0; local_c < 5; local_c = local_c + 1) {
                  if (*(char *)(param_1 + local_c + 0x14) == -1) {
                    local_8 = local_c;
                    break;
                  }
                }
                for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
                  if (iVar2 == 0x14) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
              }
              else {
                for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_0054c590(CONCAT22(extraout_var_06,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
                  if (iVar2 == 0x14) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
                if (local_8 == 0) {
                  FUN_00551960();
                }
                else {
                  FUN_005519a0(0x31);
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

