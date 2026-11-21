// FUN_0059fa00  0059fa00

void __fastcall FUN_0059fa00(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int local_74;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_64;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7752;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0059c2d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  iVar3 = FUN_005a2260();
  if (iVar3 == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      FUN_005a3b40(4,4);
      (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
    }
    else {
      local_14 = FUN_005a2460();
      if ((*(char *)(DAT_0162ee84 + 0x25) != '\0') && (local_14 != -1)) {
        FUN_005dcb00(local_14);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar3 = FUN_005dcb00(local_14);
          *(undefined1 *)(iVar3 + 0x4a1) = 1;
          local_14 = FUN_005a2460();
        }
      }
      if (local_14 == -1) {
        if (*(char *)(param_1 + 0xb) == '\0') {
          FUN_005a39e0();
          *(undefined1 *)(param_1 + 0xb) = 1;
        }
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          FUN_005a3b40(5,4);
          (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
        }
        else {
          cVar2 = FUN_005a29b0();
          if (cVar2 == '\0') {
            iVar3 = FUN_005a2540();
            if (iVar3 == -1) {
              if (*(char *)(param_1 + 6) == '\0') {
                *(undefined1 *)(param_1 + 6) = 1;
                FUN_005a3c20(4,1);
                pvVar5 = operator_new(0x24);
                local_8 = 0;
                if (pvVar5 == (void *)0x0) {
                  local_6c = 0;
                }
                else {
                  local_6c = FUN_0059d4d0();
                }
                local_8 = 0xffffffff;
                FUN_005fc420(local_6c);
                FUN_005a3c20(5,1);
                (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
              }
              else {
                local_74 = FUN_005a2290();
                if (local_74 == -1) {
                  FUN_005a3ad0(0xffffffff,0);
                  cVar2 = FUN_005da7b0();
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 9) != '\0')) {
                    cVar2 = FUN_005a3e30(4);
                    if (cVar2 == '\0') {
                      FUN_005a3c20(4,1);
                      (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
                    }
                    else if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                      FUN_0059ca00();
                    }
                    else {
                      FUN_0059f960(200);
                    }
                  }
                  else {
                    *(undefined1 *)(param_1 + 9) = 1;
                    FUN_005a3b40(3,0xffffffff);
                    (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
                  }
                }
                else {
                  FUN_005a3ad0(local_74,0);
                  if ((*(char *)(param_1 + 10) == '\0') &&
                     (cVar2 = FUN_005a3e80(local_74), cVar2 != '\0')) {
                    FUN_005a3c20(local_74,1);
                    *(undefined1 *)(param_1 + 10) = 1;
                    (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
                  }
                  else {
                    *(undefined1 *)(param_1 + 10) = 0;
                    FUN_0059f640(local_74);
                    FUN_005dcb00(local_74);
                    piVar4 = (int *)FUN_0063aac0();
                    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    if (bVar1) {
                      local_74 = -1;
                    }
                    FUN_005a3b40(2,local_74);
                    (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
                  }
                }
              }
            }
            else {
              *(undefined1 *)(DAT_007935d0 + 0x103) = 0;
              FUN_005dcb00(iVar3);
              piVar4 = (int *)FUN_0063aac0();
              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                local_68 = 1;
              }
              else {
                local_68 = 0;
              }
              FUN_005a3ad0(iVar3,local_68);
              FUN_0059f6b0(iVar3);
            }
          }
          else {
            FUN_005f2870();
            FUN_005a3ad0(0xffffffff,0);
            FUN_0059e920();
          }
        }
      }
      else {
        FUN_005dcb00(local_14);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          local_64 = 1;
        }
        else {
          local_64 = 0;
        }
        FUN_005a3ad0(local_14,local_64);
        FUN_0059f2e0(local_14);
      }
    }
  }
  else {
    FUN_0059e9b0();
  }
  ExceptionList = local_10;
  return;
}

