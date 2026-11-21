// FUN_0054eb80  0054eb80

void __fastcall FUN_0054eb80(int param_1)

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
  FUN_00551960();
  iVar2 = FUN_0054cec0();
  if (iVar2 == 0) {
    cVar1 = FUN_00551330(4,10,0xb);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 0:
      case 3:
      case 5:
      case 6:
      case 7:
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
              cVar1 = FUN_00551890();
              if (cVar1 == '\0') {
                cVar1 = FUN_00551330(3,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_005519e0();
                  if (cVar1 != '\0') {
                    FUN_005519a0(0xd);
                    return;
                  }
                  FUN_00551960();
                }
                cVar1 = FUN_00551670(4,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_005519e0();
                  if (cVar1 != '\0') {
                    FUN_005519a0(0x17);
                    return;
                  }
                  FUN_00551960();
                }
                cVar1 = FUN_00551330(3,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_00551b50((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16)
                                      );
                  if (cVar1 == '\0') {
                    FUN_005519a0(0xe);
                    return;
                  }
                  FUN_00551960();
                }
                cVar1 = FUN_00551330(2,10,0xb);
                if (cVar1 == '\0') {
                  iVar2 = FUN_00641280(CONCAT22(extraout_var_04,*(undefined2 *)(param_1 + 0xc)));
                  if (iVar2 == 0xe) {
                    iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 10)));
                    if (iVar2 == 0xd) {
                      FUN_005519a0(0x32);
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
                    FUN_00551960();
                  }
                  else {
                    FUN_005519a0(0x33);
                  }
                }
                else {
                  FUN_005519a0(7);
                }
              }
              else {
                FUN_005519a0(0x2e);
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
      case 4:
        FUN_005519a0(0x13);
      case 8:
        FUN_005519a0(0x27);
      case 9:
        FUN_005519a0(0x2a);
      case 10:
        FUN_005519a0(0x2b);
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
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
    cVar1 = FUN_00551330(3,10,0xb);
    if (cVar1 == '\0') {
      switch(*(undefined4 *)(param_1 + 0x10)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
      case 6:
      case 7:
        FUN_005519a0(1);
        FUN_00551920();
        break;
      case 4:
        FUN_005519a0(0x14);
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 0x14) {
code_r0x0054efbd:
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
          else {
            uVar3 = FUN_00641280(CONCAT22(extraout_var_01,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar2 = FUN_0054cf20(uVar3);
            if (1 < iVar2) goto code_r0x0054efbd;
          }
        }
        break;
      case 8:
        cVar1 = FUN_00551330(3,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
            if (iVar2 == 0x14) {
              FUN_005519a0(10);
              *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
              return;
            }
          }
          FUN_00551960();
        }
        FUN_005519a0(0x28);
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
          if (iVar2 == 0x14) {
code_r0x0054f0ac:
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
          else {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
            iVar2 = FUN_0054cf20(uVar3);
            if (1 < iVar2) goto code_r0x0054f0ac;
          }
        }
        break;
      default:
        cVar1 = FUN_00551330(3,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_06,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_005519a0(10);
              *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
              return;
            }
          }
          FUN_00551960();
        }
        for (local_c = 1; local_c < 5; local_c = local_c + 1) {
          cVar1 = FUN_005510d0(local_c,3);
          if ((cVar1 != '\0') &&
             ((cVar1 = FUN_00551040(local_c,0xd), cVar1 != '\0' ||
              (cVar1 = FUN_00551040(local_c,0xe), cVar1 != '\0')))) {
            FUN_005519a0(0x25);
            for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2; local_10 = local_10 + 1) {
              iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2));
              if ((iVar2 == local_c) ||
                 (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_10 * 2)), iVar2 == 0x14))
              {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                local_8 = local_8 + 1;
              }
            }
            return;
          }
        }
        cVar1 = FUN_00551330(2,10,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_07,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_005519a0(6);
              *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
              return;
            }
          }
        }
        cVar1 = FUN_00551330(2,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
            if (iVar2 == 0x14) {
              FUN_005519a0(0x11);
              *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
              return;
            }
          }
        }
        cVar1 = FUN_00550fd0(0xe);
        if (cVar1 == '\0') {
          cVar1 = FUN_00550fd0(0xd);
          if (cVar1 == '\0') {
            cVar1 = FUN_00551670(3,1,0xb);
            if (cVar1 != '\0') {
              for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_0054c590(CONCAT22(extraout_var_08,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 0x14) {
                  *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
                  FUN_005519a0(0x22);
                  return;
                }
              }
            }
            for (local_c = 1; local_c < 5; local_c = local_c + 1) {
              cVar1 = FUN_005510d0(local_c,3);
              if (cVar1 != '\0') {
                for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2; local_10 = local_10 + 1
                    ) {
                  iVar2 = FUN_00641290(CONCAT22(extraout_var_09,
                                                *(undefined2 *)(param_1 + 4 + local_10 * 2)));
                  if ((iVar2 == local_c) ||
                     (iVar2 = FUN_0054c590(CONCAT22(extraout_var_10,
                                                    *(undefined2 *)(param_1 + 4 + local_10 * 2))),
                     iVar2 == 0x14)) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                    local_8 = local_8 + 1;
                  }
                }
                FUN_005519a0(0x24);
                return;
              }
            }
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if (iVar2 == 0x14) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_005519a0(0x31);
          }
          else {
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
              if ((iVar2 == 0xd) ||
                 (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 0x14))
              {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_005519a0(0x2c);
          }
        }
        else {
          FUN_005519a0(0x2c);
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_00641280(CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if ((iVar2 == 0xe) ||
               (iVar2 = FUN_0054c590(CONCAT22(extraout_var_03,
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
      for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_0054c590(CONCAT22(extraout_var_05,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        if (iVar2 == 0x14) {
          *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
          break;
        }
      }
      FUN_005519a0(4);
    }
  }
  return;
}

