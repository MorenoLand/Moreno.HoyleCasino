// FUN_005507f0  005507f0

void __fastcall FUN_005507f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_00551960();
  cVar1 = FUN_00551330(4,10,0xb);
  if (cVar1 == '\0') {
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      FUN_005519a0(1);
      FUN_00551920();
      break;
    case 6:
      FUN_005519a0(0x27);
    case 7:
      FUN_005519a0(0x2a);
    case 8:
      FUN_005519a0(0x2b);
      for (local_c = 0; iVar3 = FUN_0054c540(), local_c < iVar3; local_c = local_c + 1) {
        uVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)));
        iVar3 = FUN_0054cf20(uVar2);
        if (1 < iVar3) {
          *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
          local_8 = local_8 + 1;
        }
      }
      break;
    default:
      cVar1 = FUN_00551330(4,1,0xb);
      if (cVar1 == '\0') {
        cVar1 = FUN_00551330(3,10,0xb);
        if (cVar1 == '\0') {
          cVar1 = FUN_005515d0();
          if (cVar1 == '\0') {
            cVar1 = FUN_00551670(4,1,0xb);
            if (cVar1 != '\0') {
              cVar1 = FUN_005519e0();
              if ((cVar1 != '\0') &&
                 ((iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2)
                                       ), 10 < iVar3 ||
                  (iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x16) * 2)
                                       ), 10 < iVar3)))) {
                FUN_005519a0(0x1c);
                return;
              }
              FUN_00551960();
            }
            cVar1 = FUN_00551890();
            if (cVar1 == '\0') {
              cVar1 = FUN_00551670(4,1,0xb);
              if (cVar1 != '\0') {
                cVar1 = FUN_005519e0();
                if ((cVar1 != '\0') &&
                   (iVar3 = FUN_00641280(*(undefined2 *)
                                          (param_1 + 4 + *(char *)(param_1 + 0x16) * 2)),
                   iVar3 < 0xb)) {
                  FUN_005519a0(0x1d);
                  return;
                }
                FUN_00551960();
              }
              cVar1 = FUN_00551330(3,1,0xb);
              if (cVar1 != '\0') {
                cVar1 = FUN_00551b50((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16));
                if (cVar1 == '\0') {
                  FUN_005519a0(0xc);
                  return;
                }
                FUN_00551960();
              }
              cVar1 = FUN_00551670(4,1,0xb);
              if (cVar1 != '\0') {
                iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x17) * 2));
                if (iVar3 == 0xe) {
                  FUN_005519a0(0x1e);
                  return;
                }
                FUN_00551960();
              }
              cVar1 = FUN_00551330(2,10,0xb);
              if (cVar1 == '\0') {
                cVar1 = FUN_00551670(4,1,0xb);
                if (cVar1 != '\0') {
                  iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2))
                  ;
                  if (10 < iVar3) {
                    FUN_005519a0(0x21);
                    return;
                  }
                  FUN_00551960();
                }
                for (local_c = 0; iVar3 = FUN_0054c540(), local_c < iVar3; local_c = local_c + 1) {
                  iVar3 = FUN_0054c590(CONCAT22(extraout_var,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
                  if (10 < iVar3) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
                if ((local_8 != 0) && (local_8 < 4)) {
                  FUN_005519a0(0x34);
                }
              }
              else {
                FUN_005519a0(7);
              }
            }
            else {
              FUN_005519a0(0x2d);
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
    }
  }
  else {
    FUN_005519a0(2);
  }
  return;
}

