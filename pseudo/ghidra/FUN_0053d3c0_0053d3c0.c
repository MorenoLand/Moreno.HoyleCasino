// FUN_0053d3c0  0053d3c0

void __fastcall FUN_0053d3c0(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_70;
  int local_58;
  int local_8;
  
  FUN_0053b1a0();
  if (*(int *)(DAT_007933ec + 0x100) == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar4 = DAT_007933ec;
      *(undefined4 *)(DAT_007933ec + 0x100) = 4;
      *(undefined4 *)(iVar4 + 0x104) = 4;
      (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
    }
    else {
      local_8 = FUN_00540d00();
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
          local_8 = FUN_00540d00();
        }
      }
      if (local_8 == -1) {
        if (*(char *)(param_1 + 0xb) == '\0') {
          FUN_00540fe0();
          *(undefined1 *)(param_1 + 0xb) = 1;
        }
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          iVar4 = DAT_007933ec;
          *(undefined4 *)(DAT_007933ec + 0x100) = 5;
          *(undefined4 *)(iVar4 + 0x104) = 4;
          (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
        }
        else {
          cVar2 = FUN_005410d0();
          if (cVar2 == '\0') {
            iVar4 = FUN_00541280();
            if (iVar4 == -1) {
              if (*(char *)(param_1 + 6) == '\0') {
                *(undefined1 *)(param_1 + 6) = 1;
                *(undefined1 *)(DAT_007933ec + 0xf1) = 1;
                iVar4 = DAT_007933ec;
                *(undefined4 *)(DAT_007933ec + 0x100) = 6;
                *(undefined4 *)(iVar4 + 0x104) = 4;
                (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
              }
              else {
                local_58 = FUN_00541660();
                if (local_58 == -1) {
                  FUN_00540b20(0xffffffff,0);
                  cVar2 = FUN_005da7b0();
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 9) != '\0')) {
                    cVar2 = FUN_00540c90(4);
                    if (cVar2 == '\0') {
                      *(undefined1 *)(DAT_007933ec + 0xf1) = 1;
                      (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
                    }
                    else if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                      FUN_0053bab0();
                    }
                    else {
                      FUN_0053d320(200);
                    }
                  }
                  else {
                    *(undefined1 *)(param_1 + 9) = 1;
                    iVar4 = DAT_007933ec;
                    *(undefined4 *)(DAT_007933ec + 0x100) = 3;
                    *(undefined4 *)(iVar4 + 0x104) = 0xffffffff;
                    (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
                  }
                }
                else {
                  FUN_00540b20(local_58,0);
                  if ((*(char *)(param_1 + 10) == '\0') &&
                     (cVar2 = FUN_00541d80(local_58), cVar2 != '\0')) {
                    *(undefined1 *)(DAT_007933ec + local_58 + 0xed) = 1;
                    *(undefined1 *)(param_1 + 10) = 1;
                    iVar4 = DAT_007933ec;
                    *(undefined4 *)(DAT_007933ec + 0x100) = 7;
                    *(undefined4 *)(iVar4 + 0x104) = 4;
                    (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
                  }
                  else {
                    *(undefined1 *)(param_1 + 10) = 0;
                    FUN_0053de30(local_58);
                    FUN_005dcb00(local_58);
                    piVar3 = (int *)FUN_0063aac0();
                    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    iVar4 = DAT_007933ec;
                    if (bVar1) {
                      local_58 = -1;
                    }
                    *(undefined4 *)(DAT_007933ec + 0x100) = 2;
                    *(int *)(iVar4 + 0x104) = local_58;
                    (**(code **)(**(int **)(DAT_007933e8 + 4) + 8))(1,0);
                  }
                }
              }
            }
            else {
              *(undefined1 *)(DAT_007933ec + 0xfa) = 0;
              FUN_00540b20(iVar4,0);
              FUN_0053dca0(iVar4);
            }
          }
          else {
            FUN_005f2870();
            FUN_00540b20(0xffffffff,0);
            FUN_0053dc10();
          }
        }
      }
      else {
        FUN_005dcb00(local_8);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_70 = 1;
        }
        else {
          local_70 = 0;
        }
        FUN_00540b20(local_8,local_70);
        FUN_0053d900(local_8);
      }
    }
  }
  else {
    FUN_0053deb0();
  }
  return;
}

