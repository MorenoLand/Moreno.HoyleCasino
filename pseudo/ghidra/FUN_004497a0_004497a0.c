// FUN_004497a0  004497a0

void __fastcall FUN_004497a0(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_60;
  int local_4c;
  int local_8;
  
  FUN_004474b0();
  if (*(int *)(DAT_00790710 + 0xf4) == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar4 = DAT_00790710;
      *(undefined4 *)(DAT_00790710 + 0xf4) = 5;
      *(undefined4 *)(iVar4 + 0xf8) = 4;
      (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
    }
    else {
      local_8 = FUN_0044cee0();
      if ((*(char *)(DAT_0162ee84 + 0x25) != '\0') && (local_8 != -1)) {
        FUN_005dcb00(local_8);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = FUN_005dcb00(local_8);
          *(undefined1 *)(iVar4 + 0x4a1) = 1;
          local_8 = FUN_0044cee0();
        }
      }
      if (local_8 == -1) {
        if (*(char *)(param_1 + 9) == '\0') {
          FUN_0044d120();
          *(undefined1 *)(param_1 + 9) = 1;
        }
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          cVar2 = FUN_0044d210();
          iVar4 = DAT_00790710;
          if (cVar2 == '\0') {
            FUN_00449710(0);
          }
          else {
            *(undefined4 *)(DAT_00790710 + 0xf4) = 6;
            *(undefined4 *)(iVar4 + 0xf8) = 4;
            (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
          }
        }
        else {
          cVar2 = FUN_0044d2c0();
          if (cVar2 == '\0') {
            iVar4 = FUN_0044d430();
            if (iVar4 == -1) {
              cVar2 = FUN_0044d700();
              if (cVar2 == '\0') {
                local_4c = FUN_0044dce0();
                if (local_4c == -1) {
                  FUN_0044ccf0(0xffffffff,0);
                  cVar2 = FUN_005da7b0();
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 8) != '\0')) {
                    if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                      FUN_00447db0();
                    }
                    else {
                      FUN_00449710(200);
                    }
                  }
                  else {
                    *(undefined1 *)(param_1 + 8) = 1;
                    iVar4 = DAT_00790710;
                    *(undefined4 *)(DAT_00790710 + 0xf4) = 4;
                    *(undefined4 *)(iVar4 + 0xf8) = 0xffffffff;
                    (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
                  }
                }
                else {
                  FUN_0044ccf0(local_4c,0);
                  FUN_0044a110(local_4c);
                  FUN_005dcb00(local_4c);
                  piVar3 = (int *)FUN_0063aac0();
                  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                    bVar1 = true;
                  }
                  else {
                    bVar1 = false;
                  }
                  iVar4 = DAT_00790710;
                  if (bVar1) {
                    local_4c = -1;
                  }
                  *(undefined4 *)(DAT_00790710 + 0xf4) = 2;
                  *(int *)(iVar4 + 0xf8) = local_4c;
                  (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
                }
              }
              else {
                FUN_0044d7e0();
                iVar4 = DAT_00790710;
                *(undefined4 *)(DAT_00790710 + 0xf4) = 3;
                *(undefined4 *)(iVar4 + 0xf8) = 0xffffffff;
                (**(code **)(**(int **)(DAT_0079070c + 4) + 8))(1,0);
              }
            }
            else {
              *(undefined1 *)(DAT_00790710 + 0xd1) = 0;
              FUN_0044ccf0(iVar4,0);
              FUN_00449f10(iVar4);
            }
          }
          else {
            FUN_005f2870();
            FUN_0044ccf0(0xffffffff,0);
            FUN_00449e80();
          }
        }
      }
      else {
        FUN_005dcb00(local_8);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_60 = 1;
        }
        else {
          local_60 = 0;
        }
        FUN_0044ccf0(local_8,local_60);
        FUN_00449c30(local_8);
      }
    }
  }
  else {
    FUN_0044a170();
  }
  return;
}

