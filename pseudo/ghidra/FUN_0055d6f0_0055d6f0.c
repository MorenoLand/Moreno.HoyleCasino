// FUN_0055d6f0  0055d6f0

void __fastcall FUN_0055d6f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_0055ec70();
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x10) == 1)) {
    FUN_0055ecb0(1);
    FUN_0055ec30();
  }
  else {
    cVar1 = FUN_0055e640(4,10,0xb);
    if (cVar1 == '\0') {
      cVar1 = FUN_0055e640(4,1,0xb);
      if (cVar1 == '\0') {
        switch(*(undefined4 *)(param_1 + 0x10)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
          FUN_0055ecb0(1);
          FUN_0055ec30();
          break;
        case 6:
          FUN_0055ecb0(0x27);
        case 7:
          FUN_0055ecb0(0x2a);
        case 8:
          FUN_0055ecb0(0x2b);
          for (local_c = 0; iVar3 = FUN_00559380(), local_c < iVar3; local_c = local_c + 1) {
            uVar2 = FUN_00641280(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_c * 2)
                                         ));
            iVar3 = FUN_00559d60(uVar2);
            if (1 < iVar3) {
              *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
              local_8 = local_8 + 1;
            }
          }
          break;
        default:
          cVar1 = FUN_0055e640(3,10,0xb);
          if (cVar1 != '\0') {
            cVar1 = FUN_0055ee60((int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x16));
            if (cVar1 == '\0') {
              FUN_0055ecb0(5);
              return;
            }
            FUN_0055ec70();
          }
          cVar1 = FUN_0055e8e0();
          if (cVar1 == '\0') {
            cVar1 = FUN_0055e980(4,1,0xb);
            if (cVar1 != '\0') {
              cVar1 = FUN_0055ecf0();
              if ((cVar1 != '\0') &&
                 (iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2))
                 , 10 < iVar3)) {
                FUN_0055ecb0(0x20);
                return;
              }
              FUN_0055ec70();
            }
            cVar1 = FUN_0055eba0();
            if (cVar1 == '\0') {
              cVar1 = FUN_0055e980(4,1,0xb);
              if (cVar1 != '\0') {
                cVar1 = FUN_0055ecf0();
                if ((cVar1 != '\0') &&
                   (iVar3 = FUN_00641280(*(undefined2 *)
                                          (param_1 + 4 + *(char *)(param_1 + 0x15) * 2)),
                   iVar3 < 0xb)) {
                  FUN_0055ecb0(0x1f);
                  return;
                }
                FUN_0055ec70();
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
              cVar1 = FUN_0055e640(2,10,0xb);
              if (cVar1 == '\0') {
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
                cVar1 = FUN_0055e980(4,1,0xb);
                if (cVar1 != '\0') {
                  iVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x15) * 2))
                  ;
                  if (10 < iVar3) {
                    FUN_0055ecb0(0x21);
                    return;
                  }
                  FUN_0055ec70();
                }
                for (local_c = 0; iVar3 = FUN_00559380(), local_c < iVar3; local_c = local_c + 1) {
                  iVar3 = FUN_005593d0(CONCAT22(extraout_var,
                                                *(undefined2 *)(param_1 + 4 + local_c * 2)));
                  if (10 < iVar3) {
                    *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_c;
                    local_8 = local_8 + 1;
                  }
                }
                if ((local_8 == 0) || (3 < local_8)) {
                  FUN_0055ec70();
                }
                else {
                  FUN_0055ecb0(0x34);
                }
              }
              else {
                FUN_0055ecb0(7);
              }
            }
            else {
              FUN_0055ecb0(0x2d);
            }
          }
          else {
            FUN_0055ecb0(0x23);
          }
        }
      }
      else {
        FUN_0055ecb0(9);
      }
    }
    else {
      FUN_0055ecb0(2);
    }
  }
  return;
}

