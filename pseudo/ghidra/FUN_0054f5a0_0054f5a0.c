// FUN_0054f5a0  0054f5a0

void __fastcall FUN_0054f5a0(int param_1)

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
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00551960();
  iVar2 = FUN_0054cec0();
  if (iVar2 == 0) {
    cVar1 = FUN_00551330(4,10,0xb);
    if (cVar1 != '\0') {
      FUN_005519a0(2);
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 8:
      FUN_005519a0(1);
      FUN_00551920();
      return;
    case 5:
      FUN_005519a0(0x13);
    case 9:
      FUN_005519a0(0x27);
      for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
        uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
        iVar2 = FUN_0054cf20(uVar3);
        if (1 < iVar2) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
      return;
    }
    cVar1 = FUN_00551330(4,1,0xb);
    if (cVar1 != '\0') {
      FUN_005519a0(9);
      return;
    }
    cVar1 = FUN_00551330(3,10,0xb);
    if (cVar1 != '\0') {
      FUN_005519a0(5);
      return;
    }
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
    if (cVar1 != '\0') {
      FUN_005519a0(0x23);
      return;
    }
    cVar1 = FUN_00551890();
    if (cVar1 != '\0') {
      FUN_005519a0(0x2e);
      return;
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
    cVar1 = FUN_00551330(2,10,0xb);
    if (cVar1 != '\0') {
      iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2));
      if (iVar2 != 0xe) {
        FUN_005519a0(8);
        return;
      }
      FUN_00551960();
    }
    cVar1 = FUN_00551330(3,1,0xb);
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = FUN_00551b50((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16));
    if (cVar1 != '\0') {
      FUN_00551960();
      return;
    }
    FUN_005519a0(0xe);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
    FUN_005519a0(1);
    FUN_00551920();
    return;
  case 5:
    iVar2 = FUN_0054cec0();
    if (iVar2 == 3) {
      FUN_005519a0(0x29);
    }
    else {
      FUN_005519a0(0x15);
    }
code_r0x0054f8a3:
    iVar2 = FUN_0054cec0();
    if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) ||
       ((iVar2 = FUN_0054cec0(), iVar2 == 1 && (cVar1 = FUN_00551330(3,10,0xb), cVar1 != '\0')))) {
      FUN_005519a0(3);
      for (local_c = 0; local_c < 5; local_c = local_c + 1) {
        if (*(char *)(param_1 + local_c + 0x14) == -1) {
          local_8 = local_c;
          break;
        }
      }
      for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
        iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_c * 2)));
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
      iVar2 = FUN_0054cec0();
      if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,1,0xb), cVar1 != '\0')) ||
         ((iVar2 = FUN_0054cec0(), iVar2 == 1 && (cVar1 = FUN_00551330(3,1,0xb), cVar1 != '\0')))) {
        if (*(char *)(param_1 + 0x19) != '\x15') {
          FUN_005519a0(0xb);
          local_c = 0;
          do {
            if (4 < local_c) {
code_r0x0054fa3a:
              for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
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
              goto code_r0x0054fa3a;
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
          if ((*(int *)(param_1 + 0x10) != 9) || (iVar2 = FUN_0054cec0(), iVar2 < 2)) {
            FUN_005519a0(0x28);
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              uVar3 = FUN_00641280(CONCAT22(extraout_var_03,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              iVar2 = FUN_0054cf20(uVar3);
              if ((1 < iVar2) ||
                 (iVar2 = FUN_00641280(CONCAT22(extraout_var_04,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2))),
                 iVar2 == 2)) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            return;
          }
          FUN_005519a0(0x2f);
        }
      }
LAB_0054fb74:
      cVar1 = FUN_0054cae0();
      if ((cVar1 == '\0') || (iVar2 = FUN_0054cec0(), iVar2 != 3)) {
        cVar1 = FUN_0054cae0();
        if ((cVar1 == '\0') || (iVar2 = FUN_0054cec0(), iVar2 < 1)) {
          iVar2 = FUN_0054cec0();
          if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) ||
             ((iVar2 = FUN_0054cec0(), iVar2 == 1 && (cVar1 = FUN_00551330(3,10,0xb), cVar1 != '\0')
              ))) {
            for (local_c = 0; local_c < 5; local_c = local_c + 1) {
              if (*(char *)(param_1 + local_c + 0x14) == -1) {
                local_8 = local_c;
                break;
              }
            }
            for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
              iVar2 = FUN_00641280(CONCAT22(extraout_var_01,
                                            *(undefined2 *)(param_1 + 4 + local_c * 2)));
              if (iVar2 == 2) {
                *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                local_8 = local_8 + 1;
              }
            }
            FUN_005519a0(3);
          }
          else {
            FUN_00551960();
            iVar2 = FUN_0054cec0();
            if (((iVar2 == 2) && (cVar1 = FUN_00551330(2,1,0xb), cVar1 != '\0')) ||
               ((iVar2 = FUN_0054cec0(), iVar2 == 1 &&
                (cVar1 = FUN_00551330(3,1,0xb), cVar1 != '\0')))) {
              FUN_005519a0(0xb);
              for (local_c = 0; local_c < 5; local_c = local_c + 1) {
                if (*(char *)(param_1 + local_c + 0x14) == -1) {
                  local_8 = local_c;
                  break;
                }
              }
              for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                iVar2 = FUN_00641280(CONCAT22(extraout_var_05,
                                              *(undefined2 *)(param_1 + 4 + local_c * 2)));
                if (iVar2 == 2) {
                  *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                  local_8 = local_8 + 1;
                }
              }
            }
            else {
              FUN_00551960();
              cVar1 = FUN_0054cdc0();
              if ((cVar1 == '\0') || (iVar2 = FUN_0054cec0(), iVar2 != 2)) {
                iVar2 = FUN_0054cec0();
                if ((iVar2 == 1) && (cVar1 = FUN_00551330(2,10,0xb), cVar1 != '\0')) {
                  for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1)
                  {
                    iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
                    if (iVar2 == 2) {
                      *(undefined1 *)(param_1 + 0x16) = (undefined1)local_c;
                      break;
                    }
                  }
                  FUN_005519a0(6);
                }
                else {
                  for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1)
                  {
                    iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
                    if (iVar2 == 2) {
                      *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                      local_8 = local_8 + 1;
                    }
                  }
                  if (local_8 < 1) {
                    FUN_00551960();
                  }
                  else {
                    FUN_005519a0(0x31);
                  }
                }
              }
              else {
                FUN_005519a0(0x2f);
                for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
                  iVar2 = FUN_00641280(CONCAT22(extraout_var_02,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
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
          for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2));
            iVar2 = FUN_0054cf20(uVar3);
            if ((1 < iVar2) ||
               (iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_c * 2)), iVar2 == 2)) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
        }
      }
      else {
        for (local_c = 0; iVar2 = FUN_0054c540(), local_c < iVar2; local_c = local_c + 1) {
          iVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)))
          ;
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
            local_8 = local_8 + 1;
          }
        }
      }
    }
    return;
  case 9:
    goto code_r0x0054f8a3;
  default:
    goto LAB_0054fb74;
  }
}

