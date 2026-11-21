// FUN_0054e3e0  0054e3e0

void __fastcall FUN_0054e3e0(int param_1)

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
  undefined8 uVar5;
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
            cVar1 = FUN_00551330(3,1,0xb);
            if (cVar1 != '\0') {
              cVar1 = FUN_005519e0();
              if (cVar1 != '\0') {
                FUN_005519a0(0xd);
                return;
              }
              FUN_00551960();
            }
            cVar1 = FUN_005515d0();
            if (cVar1 == '\0') {
              cVar1 = FUN_00551890();
              if (cVar1 == '\0') {
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
                cVar1 = FUN_00551670(4,1,0xb);
                if (cVar1 != '\0') {
                  cVar1 = FUN_005519e0();
                  if (cVar1 != '\0') {
                    FUN_005519a0(0x18);
                    return;
                  }
                  FUN_00551960();
                }
                cVar1 = FUN_00551330(3,1,0xb);
                if (cVar1 == '\0') {
                  cVar1 = FUN_00551330(2,10,0xb);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_00551670(4,1,0xb);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_00551330(2,1,0xb);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_005519e0();
                        if (cVar1 != '\0') {
                          FUN_005519a0(0x12);
                          return;
                        }
                        FUN_00551960();
                      }
                      for (local_c = 1; local_c < 5; local_c = local_c + 1) {
                        cVar1 = FUN_005510d0(local_c,3);
                        if (cVar1 != '\0') {
                          FUN_005519a0(0x26);
                          for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2;
                              local_10 = local_10 + 1) {
                            iVar2 = FUN_00641290(CONCAT22(extraout_var_01,
                                                          *(undefined2 *)
                                                           (param_1 + 4 + local_10 * 2)));
                            if (iVar2 == local_c) {
                              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
                              local_8 = local_8 + 1;
                            }
                          }
                          return;
                        }
                      }
                      FUN_00551960();
                    }
                    else {
                      FUN_005519a0(0x19);
                    }
                  }
                  else {
                    FUN_005519a0(7);
                  }
                }
                else {
                  FUN_005519a0(0xf);
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
      case 8:
        FUN_005519a0(0x28);
      case 10:
        FUN_005519a0(0x2c);
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
          iVar2 = FUN_0054cf20(uVar3);
          if ((1 < iVar2) ||
             (iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 0x14)) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
        break;
      default:
        cVar1 = FUN_00551330(3,1,0xb);
        if (cVar1 != '\0') {
          iVar2 = FUN_0054cec0();
          if (iVar2 == 1) {
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_0054c590(CONCAT22(extraout_var_02,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              if (iVar2 == 0x14) {
                FUN_005519a0(10);
                *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
                return;
              }
            }
          }
          FUN_00551960();
        }
        cVar1 = FUN_00551330(2,10,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_c * 2));
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
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_005519a0(0x11);
              *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
              return;
            }
          }
        }
        cVar1 = FUN_00551670(3,1,0xb);
        if (cVar1 != '\0') {
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            iVar2 = FUN_0054c590(CONCAT22(extraout_var_03,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            if (iVar2 == 0x14) {
              FUN_005519a0(0x22);
              *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
              return;
            }
          }
        }
        uVar5 = FUN_0054c540();
        iVar2 = (int)((ulonglong)uVar5 >> 0x20);
        local_c = (int)uVar5 + -1;
        while (-1 < local_c) {
          iVar2 = FUN_0054c590(CONCAT22((short)((uint)iVar2 >> 0x10),
                                        *(undefined2 *)(param_1 + 4 + local_c * 2)));
          if (iVar2 == 0x14) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
          iVar2 = local_c + -1;
          local_c = iVar2;
        }
        iVar2 = FUN_0054c540();
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) {
            FUN_005519a0(0x31);
            return;
          }
          iVar4 = FUN_0054c590(CONCAT22((short)((uint)iVar2 >> 0x10),
                                        *(undefined2 *)(param_1 + 4 + iVar2 * 2)));
        } while ((iVar4 == 0x14) ||
                (iVar4 = FUN_00641280(*(undefined2 *)(param_1 + 4 + iVar2 * 2)), iVar4 < 0xb));
        FUN_005519a0(0x2c);
        local_c._0_1_ = (undefined1)iVar2;
        *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
      }
    }
    else {
      FUN_005519a0(4);
      for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_0054c590(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        if (iVar2 == 0x14) {
          *(undefined1 *)(param_1 + 0x17) = (undefined1)local_c;
          return;
        }
      }
    }
  }
  return;
}

