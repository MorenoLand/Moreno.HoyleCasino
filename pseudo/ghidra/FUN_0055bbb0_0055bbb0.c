// FUN_0055bbb0  0055bbb0

void __fastcall FUN_0055bbb0(int param_1)

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
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_0055ec70();
  iVar2 = FUN_00559d00();
  if (iVar2 == 0) {
    cVar1 = FUN_0055e640(4,10,0xb);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 0:
      case 3:
      case 5:
      case 6:
      case 7:
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
              cVar1 = FUN_0055eba0();
              if (cVar1 == '\0') {
                cVar1 = FUN_0055e640(3,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0055ecf0();
                  if (cVar1 != '\0') {
                    FUN_0055ecb0(0xd);
                    return;
                  }
                  FUN_0055ec70();
                }
                cVar1 = FUN_0055e980(4,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0055ecf0();
                  if (cVar1 != '\0') {
                    FUN_0055ecb0(0x17);
                    return;
                  }
                  FUN_0055ec70();
                }
                cVar1 = FUN_0055e640(3,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_0055ee60((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16)
                                      );
                  if (cVar1 == '\0') {
                    FUN_0055ecb0(0xe);
                    return;
                  }
                  FUN_0055ec70();
                }
                cVar1 = FUN_0055e640(2,10,0xb);
                if (cVar1 == '\0') {
                  iVar2 = FUN_00641280(CONCAT22(extraout_var_04,*(undefined2 *)(param_1 + 0xc)));
                  if (iVar2 == 0xe) {
                    iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 10)));
                    if (iVar2 == 0xd) {
                      FUN_0055ecb0(0x32);
                      *(undefined1 *)(param_1 + 0x14) = 3;
                    }
                    local_8 = (uint)(iVar2 == 0xd);
                    *(undefined1 *)(param_1 + local_8 + 0x14) = 4;
                    local_8 = local_8 + 1;
                  }
                  else {
                    iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xc)));
                    if (iVar2 == 0xd) {
                      *(undefined1 *)(param_1 + 0x14) = 4;
                      local_8 = 1;
                    }
                  }
                  if (local_8 == 0) {
                    FUN_0055ec70();
                  }
                  else {
                    FUN_0055ecb0(0x33);
                  }
                }
                else {
                  FUN_0055ecb0(7);
                }
              }
              else {
                FUN_0055ecb0(0x2e);
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
      case 4:
        FUN_0055ecb0(0x13);
      case 8:
        FUN_0055ecb0(0x27);
      case 9:
        FUN_0055ecb0(0x2a);
      case 10:
        FUN_0055ecb0(0x2b);
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
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
  else {
    cVar1 = FUN_0055e640(3,10,0xb);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
      case 6:
      case 7:
        FUN_0055ecb0(1);
        FUN_0055ec30();
        break;
      case 4:
        FUN_0055ecb0(0x14);
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
code_r0x0055bfed:
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
          else {
            uVar3 = FUN_00641280(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar2 = FUN_00559d60(uVar3);
            if (1 < iVar2) goto code_r0x0055bfed;
          }
        }
        break;
      case 8:
        cVar1 = FUN_0055e640(3,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
            if (iVar2 == 0x14) {
              FUN_0055ecb0(10);
              *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
              return;
            }
          }
          FUN_0055ec70();
        }
        FUN_0055ecb0(0x28);
        for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 0x14) {
code_r0x0055c0dc:
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
          else {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
            iVar2 = FUN_00559d60(uVar3);
            if (1 < iVar2) goto code_r0x0055c0dc;
          }
        }
        break;
      default:
        cVar1 = FUN_0055e640(3,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(CONCAT22(extraout_var_06,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_0055ecb0(10);
              *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
              return;
            }
          }
          FUN_0055ec70();
        }
        for (local_c = 1; local_c < 5; local_c = local_c + 1) {
          cVar1 = FUN_0055e3e0(local_c,3);
          if ((cVar1 != '\0') &&
             ((cVar1 = FUN_0055e350(local_c,0xd), cVar1 != '\0' ||
              (cVar1 = FUN_0055e350(local_c,0xe), cVar1 != '\0')))) {
            FUN_0055ecb0(0x25);
            for (local_10 = 0; iVar2 = FUN_00559380(), local_10 < iVar2; local_10 = local_10 + 1) {
              iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2));
              if ((iVar2 == local_c) ||
                 (iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar2 == 0x14))
              {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                local_8 = local_8 + 1;
              }
            }
            return;
          }
        }
        cVar1 = FUN_0055e640(2,10,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(CONCAT22(extraout_var_07,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_0055ecb0(6);
              *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
              return;
            }
          }
        }
        cVar1 = FUN_0055e640(2,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
            if (iVar2 == 0x14) {
              FUN_0055ecb0(0x11);
              *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
              return;
            }
          }
        }
        cVar1 = FUN_0055e2e0(0xe);
        if (cVar1 == '\0') {
          cVar1 = FUN_0055e2e0(0xd);
          if (cVar1 == '\0') {
            cVar1 = FUN_0055e980(3,1,0xb);
            if (cVar1 != '\0') {
              for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_005593d0(CONCAT22(extraout_var_08,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 0x14) {
                  *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
                  FUN_0055ecb0(0x22);
                  return;
                }
              }
            }
            for (local_c = 1; local_c < 5; local_c = local_c + 1) {
              cVar1 = FUN_0055e3e0(local_c,3);
              if (cVar1 != '\0') {
                for (local_10 = 0; iVar2 = FUN_00559380(), local_10 < iVar2; local_10 = local_10 + 1
                    ) {
                  iVar2 = FUN_00641290(CONCAT22(extraout_var_09,
                                                *(undefined2 *)(param_1 + 4 + local_10 * 2)));
                  if ((iVar2 == local_c) ||
                     (iVar2 = FUN_005593d0(CONCAT22(extraout_var_10,
                                                    *(undefined2 *)(param_1 + 4 + local_10 * 2))),
                     iVar2 == 0x14)) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                    local_8 = local_8 + 1;
                  }
                }
                FUN_0055ecb0(0x24);
                return;
              }
            }
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if (iVar2 == 0x14) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_0055ecb0(0x31);
          }
          else {
            for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if ((iVar2 == 0xd) ||
                 (iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 0x14))
              {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_0055ecb0(0x2c);
          }
        }
        else {
          FUN_0055ecb0(0x2c);
          for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_00641280(CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if ((iVar2 == 0xe) ||
               (iVar2 = FUN_005593d0(CONCAT22(extraout_var_03,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2))),
               iVar2 == 0x14)) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
      }
    }
    else {
      for (local_c = 0; iVar2 = FUN_00559380(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_005593d0(CONCAT22(extraout_var_05,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        if (iVar2 == 0x14) {
          *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
          break;
        }
      }
      FUN_0055ecb0(4);
    }
  }
  return;
}

