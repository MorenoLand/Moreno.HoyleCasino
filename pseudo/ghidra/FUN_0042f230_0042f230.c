// FUN_0042f230  0042f230

void __fastcall FUN_0042f230(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_80;
  int local_c;
  int local_8;
  
  FUN_004299b0();
  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 4))(1);
  if (*(int *)(DAT_007906d4 + 0xae4) == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar4 = DAT_007906d4;
      *(undefined4 *)(DAT_007906d4 + 0xae4) = 4;
      *(undefined4 *)(iVar4 + 0xae8) = 4;
      (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
    }
    else {
      FUN_00434c40();
      local_8 = FUN_004351b0();
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
          local_8 = FUN_004351b0();
        }
      }
      if (local_8 == -1) {
        if (*(char *)(param_1 + 0x17) == '\0') {
          FUN_00436460();
          *(undefined1 *)(param_1 + 0x17) = 1;
        }
        cVar2 = FUN_00436a90();
        if (cVar2 == '\0') {
          if (*(char *)(param_1 + 9) == '\0') {
            *(undefined1 *)(param_1 + 9) = 1;
            iVar4 = DAT_007906d4;
            *(undefined4 *)(DAT_007906d4 + 0xae4) = 7;
            *(undefined4 *)(iVar4 + 0xae8) = 4;
            (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
          }
          else if (*(char *)(param_1 + 10) == '\0') {
            *(undefined1 *)(param_1 + 10) = 1;
            cVar2 = FUN_00434af0();
            if (cVar2 != '\0') {
              FUN_0042a4a0(*(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0));
            }
            cVar2 = FUN_00436d40();
            iVar4 = DAT_007906d4;
            if (cVar2 == '\0') {
              (**(code **)(**(int **)(DAT_007906d0 + 4) + 0x1c))(0);
            }
            else {
              *(undefined4 *)(DAT_007906d4 + 0xae4) = 8;
              *(undefined4 *)(iVar4 + 0xae8) = 4;
              (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
            }
          }
          else if (*(char *)(param_1 + 0xb) == '\0') {
            *(undefined1 *)(param_1 + 0xb) = 1;
            for (local_c = 0; local_c < 4; local_c = local_c + 1) {
              uVar5 = FUN_0064c8a0(0,0);
              FUN_005dcb00(local_c,uVar5);
              FUN_005d6050(uVar5);
            }
            cVar2 = FUN_004373c0(&DAT_00790370,8);
            if ((cVar2 == '\0') && (cVar2 = FUN_004373c0(&DAT_00790470,0x13), cVar2 == '\0')) {
              (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
            }
          }
          else {
            iVar4 = FUN_00436c80();
            if (iVar4 == -1) {
              if (*(char *)(param_1 + 0xc) == '\0') {
                FUN_00434bd0(0xffffffff,0);
                *(undefined1 *)(param_1 + 0xc) = 1;
                iVar4 = DAT_007906d4;
                *(undefined4 *)(DAT_007906d4 + 0xae4) = 1;
                *(undefined4 *)(iVar4 + 0xae8) = 0xffffffff;
                (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
              }
              else if (*(char *)(param_1 + 0xd) == '\0') {
                *(undefined1 *)(param_1 + 0xd) = 1;
                if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                  FUN_0042bde0();
                }
                else {
                  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0x14);
                }
              }
              else if (*(char *)(param_1 + 0xe) == '\0') {
                *(undefined1 *)(param_1 + 0xe) = 1;
                FUN_0042a990();
              }
              else if (*(char *)(param_1 + 0xf) == '\0') {
                cVar2 = FUN_0042acd0();
                if (cVar2 == '\0') {
                  *(undefined1 *)(param_1 + 0xf) = 1;
                  FUN_0042ac20();
                }
              }
              else if (*(char *)(param_1 + 0x10) == '\0') {
                *(undefined1 *)(param_1 + 0x10) = 1;
                FUN_0042ad90();
              }
              else if (*(char *)(param_1 + 0x11) == '\0') {
                cVar2 = FUN_0042acd0();
                if (cVar2 == '\0') {
                  *(undefined1 *)(param_1 + 0x11) = 1;
                  FUN_0043b290();
                  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 0x1c))(0);
                }
              }
              else if (*(char *)(param_1 + 0x12) == '\0') {
                cVar2 = FUN_0042acd0();
                if (cVar2 == '\0') {
                  *(undefined1 *)(param_1 + 0x12) = 1;
                  FUN_0042b030();
                }
              }
              else if (*(char *)(param_1 + 0x13) == '\0') {
                cVar2 = FUN_0042acd0();
                if (cVar2 == '\0') {
                  *(undefined1 *)(param_1 + 0x13) = 1;
                  FUN_0042ba50();
                }
              }
              else if (*(char *)(param_1 + 0x14) == '\0') {
                *(undefined1 *)(param_1 + 0x14) = 1;
                FUN_0042bcc0();
              }
              else {
                cVar2 = FUN_005da7b0();
                if ((cVar2 == '\0') || (*(char *)(param_1 + 0x15) != '\0')) {
                  if (*(char *)(param_1 + 0x16) == '\0') {
                    *(undefined1 *)(param_1 + 0x16) = 1;
                    FUN_00430000();
                    (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
                  }
                  else {
                    FUN_0042f140(0);
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0x15) = 1;
                  iVar4 = DAT_007906d4;
                  *(undefined4 *)(DAT_007906d4 + 0xae4) = 3;
                  *(undefined4 *)(iVar4 + 0xae8) = 0xffffffff;
                  (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
                }
              }
            }
            else {
              FUN_00434bd0(iVar4,0);
              FUN_0042fd50(iVar4);
            }
          }
        }
        else if (*(char *)(param_1 + 7) == '\0') {
          *(undefined1 *)(param_1 + 7) = 1;
          iVar4 = DAT_007906d4;
          *(undefined4 *)(DAT_007906d4 + 0xae4) = 0;
          *(undefined4 *)(iVar4 + 0xae8) = 0xffffffff;
          (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
        }
        else {
          FUN_005f2870();
          *(undefined1 *)(param_1 + 9) = 0;
          FUN_0057ae30();
          FUN_00434bd0(0xffffffff,0);
          cVar2 = FUN_004343d0();
          if ((cVar2 == '\0') && (*(int *)(DAT_007906d4 + 0xab4) != -1)) {
            FUN_005dcb00(*(undefined4 *)(DAT_007906d4 + 0xab4));
            piVar3 = (int *)FUN_0063aac0();
            if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              *(undefined1 *)(param_1 + 7) = 0;
              FUN_0042a090();
              return;
            }
          }
          if (*(char *)(param_1 + 8) == '\0') {
            *(undefined1 *)(param_1 + 8) = 1;
            iVar4 = DAT_007906d4;
            *(undefined4 *)(DAT_007906d4 + 0xae4) = 6;
            *(undefined4 *)(iVar4 + 0xae8) = 4;
            (**(code **)(**(int **)(DAT_0162ee80 + 4) + 8))(1,0);
          }
          else {
            *(undefined1 *)(param_1 + 7) = 0;
            FUN_00436b80();
          }
        }
      }
      else {
        FUN_005dcb00(local_8);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_80 = 1;
        }
        else {
          local_80 = 0;
        }
        FUN_00434bd0(local_8,local_80);
        FUN_0042fa90(local_8);
      }
    }
  }
  else {
    FUN_00430220();
  }
  return;
}

