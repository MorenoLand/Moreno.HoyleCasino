// FUN_0055c5d0  0055c5d0

void __fastcall FUN_0055c5d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
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
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_0055ec70();
  iVar2 = FUN_00559d00();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_0055ecb0(1);
      FUN_0055ec30();
      return;
    }
    cVar1 = FUN_0055e640(4,10,0xb);
    if (cVar1 != '\0') {
      FUN_0055ecb0(2);
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 8:
      FUN_0055ecb0(1);
      FUN_0055ec30();
      return;
    case 5:
      FUN_0055ecb0(0x13);
    case 9:
      FUN_0055ecb0(0x27);
      for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
        uVar3 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        iVar2 = FUN_00559d60(uVar3);
        if (1 < iVar2) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
      return;
    }
    cVar1 = FUN_0055e640(4,1,0xb);
    if (cVar1 != '\0') {
      FUN_0055ecb0(9);
      return;
    }
    cVar1 = FUN_0055e640(3,10,0xb);
    if (cVar1 != '\0') {
      FUN_0055ecb0(5);
      return;
    }
    cVar1 = FUN_0055e640(3,1,0xb);
    if (cVar1 != '\0') {
      cVar1 = FUN_0055ecf0();
      if (cVar1 != '\0') {
        FUN_0055ecb0(0xd);
        return;
      }
      FUN_0055ec70();
    }
    cVar1 = FUN_0055e8e0();
    if (cVar1 != '\0') {
      FUN_0055ecb0(0x23);
      return;
    }
    cVar1 = FUN_0055eba0();
    if (cVar1 != '\0') {
      FUN_0055ecb0(0x2e);
      return;
    }
    cVar1 = FUN_0055e980(4,1,0xb);
    if (cVar1 != '\0') {
      cVar1 = FUN_0055ecf0();
      if (cVar1 != '\0') {
        FUN_0055ecb0(0x18);
        return;
      }
      FUN_0055ec70();
    }
    cVar1 = FUN_0055e640(2,10,0xb);
    if (cVar1 != '\0') {
      iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2));
      if (iVar2 != 0xe) {
        FUN_0055ecb0(8);
        return;
      }
      FUN_0055ec70();
    }
    cVar1 = FUN_0055e640(3,1,0xb);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_0055ee60((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16));
    if (cVar1 != '\0') {
      FUN_0055ec70();
      return;
    }
    FUN_0055ecb0(0xe);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
    FUN_0055ecb0(1);
    FUN_0055ec30();
    return;
  case 5:
    iVar2 = FUN_00559d00();
    if (iVar2 != 3) {
      FUN_0055ecb0(0x15);
      local_c = 0;
      do {
        if (4 < local_c) {
LAB_0055cb04:
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            uVar3 = FUN_00641280(CONCAT22(extraout_var_04,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar2 = FUN_00559d60(uVar3);
            if ((1 < iVar2) ||
               (iVar2 = FUN_00641280(CONCAT22(extraout_var_05,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2))),
               iVar2 == 2)) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
          return;
        }
        if (*(char *)(param_1 + local_c + 0x14) == -1) {
          local_8 = local_c;
          goto LAB_0055cb04;
        }
        local_c = local_c + 1;
      } while( true );
    }
    FUN_0055ecb0(0x29);
LAB_0055cb7a:
    iVar2 = FUN_00559d00();
    if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
       ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0')))) {
      FUN_0055ecb0(3);
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        if (*(char *)(param_1 + local_c + 0x14) == -1) {
          local_8 = local_c;
          break;
        }
      }
      for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
        if (iVar2 == 2) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
    }
    else {
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        *(undefined1 *)(param_1 + local_c + 0x14) = 0xff;
      }
      iVar2 = FUN_00559d00();
      if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,1,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,1,0xb), cVar1 != '\0')))) {
        if (*(char *)(param_1 + 0x19) != '\x15') {
          FUN_0055ecb0(0xb);
          local_c = 0;
          do {
            if (4 < local_c) {
LAB_0055cd11:
              for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_00641280(CONCAT22(extraout_var_06,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 2) {
                  *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                  local_8 = local_8 + 1;
                }
              }
              return;
            }
            if (*(char *)(param_1 + local_c + 0x14) == -1) {
              local_8 = local_c;
              goto LAB_0055cd11;
            }
            local_c = local_c + 1;
          } while( true );
        }
      }
      else {
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
          *(undefined1 *)(param_1 + local_c + 0x14) = 0xff;
        }
        if ((*(char *)(param_1 + 0x19) != ')') && (*(char *)(param_1 + 0x19) != '\x15')) {
          if ((*(int *)(param_1 + 0x10) != 9) || (iVar2 = FUN_00559d00(), iVar2 < 2)) {
            FUN_0055ecb0(0x28);
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              uVar3 = FUN_00641280(CONCAT22(extraout_var_00,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              iVar2 = FUN_00559d60(uVar3);
              if ((1 < iVar2) ||
                 (iVar2 = FUN_00641280(CONCAT22(extraout_var_01,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2))),
                 iVar2 == 2)) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            return;
          }
          FUN_0055ecb0(0x2f);
        }
      }
LAB_0055ce4b:
      cVar1 = FUN_00559920();
      if ((cVar1 == '\0') || (iVar2 = FUN_00559d00(), iVar2 != 3)) {
        cVar1 = FUN_00559920();
        if ((cVar1 == '\0') || (iVar2 = FUN_00559d00(), iVar2 < 1)) {
          iVar2 = FUN_00559d00();
          if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
             ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0')
              ))) {
            for (local_c = 0; local_c < 5; local_c = local_c + 1) {
              if (*(char *)(param_1 + local_c + 0x14) == -1) {
                local_8 = local_c;
                break;
              }
            }
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if (iVar2 == 2) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_0055ecb0(3);
          }
          else {
            FUN_0055ec70();
            iVar2 = FUN_00559d00();
            if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,1,0xb), cVar1 != '\0')) ||
               ((iVar2 = FUN_00559d00(), iVar2 == 1 &&
                (cVar1 = FUN_0055e640(3,1,0xb), cVar1 != '\0')))) {
              FUN_0055ecb0(0xb);
              for (local_c = 0; local_c < 5; local_c = local_c + 1) {
                if (*(char *)(param_1 + local_c + 0x14) == -1) {
                  local_8 = local_c;
                  break;
                }
              }
              for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_00641280(CONCAT22(extraout_var_02,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 2) {
                  *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                  local_8 = local_8 + 1;
                }
              }
            }
            else {
              FUN_0055ec70();
              cVar1 = FUN_00559c00();
              if ((cVar1 == '\0') || (iVar2 = FUN_00559d00(), iVar2 != 2)) {
                iVar2 = FUN_00559d00();
                if ((iVar2 == 1) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) {
                  for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1)
                  {
                    iVar2 = FUN_00641280(CONCAT22(extraout_var_09,
                                                  *(undefined2 *)(param_1 + 4 + local_c * 2)));
                    if (iVar2 == 2) {
                      *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
                      break;
                    }
                  }
                  FUN_0055ecb0(6);
                }
                else {
                  for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1)
                  {
                    iVar2 = FUN_00641280(CONCAT22(extraout_var_10,
                                                  *(undefined2 *)(param_1 + 4 + local_c * 2)));
                    if (iVar2 == 2) {
                      *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                      local_8 = local_8 + 1;
                    }
                  }
                  if (local_8 < 1) {
                    FUN_0055ec70();
                  }
                  else {
                    FUN_0055ecb0(0x31);
                  }
                }
              }
              else {
                FUN_0055ecb0(0x2f);
                for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
                  if (iVar2 == 2) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
              }
            }
          }
        }
        else {
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            uVar3 = FUN_00641280(CONCAT22(extraout_var_07,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar2 = FUN_00559d60(uVar3);
            if ((1 < iVar2) ||
               (iVar2 = FUN_00641280(CONCAT22(extraout_var_08,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2))),
               iVar2 == 2)) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
    }
    return;
  case 7:
  case 8:
    iVar2 = FUN_00559d00();
    if (((iVar2 == 2) && (cVar1 = FUN_0055e640(2,10,0xb), cVar1 != '\0')) ||
       ((iVar2 = FUN_00559d00(), iVar2 == 1 && (cVar1 = FUN_0055e640(3,10,0xb), cVar1 != '\0')))) {
      local_c = 0;
      do {
        if (4 < local_c) {
LAB_0055c94d:
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_00641280(CONCAT22(extraout_var_03,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
          FUN_0055ecb0(3);
          return;
        }
        if (*(char *)(param_1 + local_c + 0x14) == -1) {
          local_8 = local_c;
          goto LAB_0055c94d;
        }
        local_c = local_c + 1;
      } while( true );
    }
    FUN_0055ec70();
    iVar2 = FUN_00559d00();
    if (((iVar2 != 2) || (cVar1 = FUN_0055e640(2,1,0xb), cVar1 == '\0')) &&
       ((iVar2 = FUN_00559d00(), iVar2 != 1 || (cVar1 = FUN_0055e640(3,1,0xb), cVar1 == '\0')))) {
      FUN_0055ec70();
      FUN_0055ecb0(1);
      FUN_0055ec30();
      return;
    }
    FUN_0055ecb0(0xb);
    local_c = 0;
    do {
      if (4 < local_c) {
LAB_0055ca3a:
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
        return;
      }
      if (*(char *)(param_1 + local_c + 0x14) == -1) {
        local_8 = local_c;
        goto LAB_0055ca3a;
      }
      local_c = local_c + 1;
    } while( true );
  case 9:
    goto LAB_0055cb7a;
  default:
    goto LAB_0055ce4b;
  }
}

