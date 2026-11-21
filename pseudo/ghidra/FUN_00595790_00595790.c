// FUN_00595790  00595790

void __fastcall FUN_00595790(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int local_5c;
  undefined1 local_54;
  undefined1 local_50;
  int local_8;
  
  FUN_00591a70();
  iVar3 = FUN_00597fb0();
  if (iVar3 == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      FUN_005994c0(4,4);
      (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
    }
    else {
      local_8 = FUN_005981b0();
      if ((*(char *)(DAT_0162ee84 + 0x25) != '\0') && (local_8 != -1)) {
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar3 = FUN_005dcb00(local_8);
          *(undefined1 *)(iVar3 + 0x4a1) = 1;
          local_8 = FUN_005981b0();
        }
      }
      if (local_8 == -1) {
        if (*(char *)(param_1 + 0xb) == '\0') {
          FUN_00599360();
          *(undefined1 *)(param_1 + 0xb) = 1;
        }
        if (*(char *)(param_1 + 5) == '\0') {
          *(undefined1 *)(param_1 + 5) = 1;
          FUN_005994c0(5,4);
          (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
        }
        else {
          cVar2 = FUN_005986c0();
          if (cVar2 == '\0') {
            iVar3 = FUN_00598290();
            if (iVar3 == -1) {
              if (*(char *)(param_1 + 6) == '\0') {
                *(undefined1 *)(param_1 + 6) = 1;
                FUN_00599570(4,1);
                (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
              }
              else {
                local_5c = FUN_00597fe0();
                if (local_5c == -1) {
                  FUN_00599450(0xffffffff,0);
                  cVar2 = FUN_005da7b0();
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 9) != '\0')) {
                    cVar2 = FUN_005997a0(4);
                    if (cVar2 == '\0') {
                      FUN_00599570(4,1);
                      (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
                    }
                    else if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                      FUN_005921b0();
                    }
                    else {
                      FUN_005956f0(200);
                    }
                  }
                  else {
                    *(undefined1 *)(param_1 + 9) = 1;
                    FUN_005994c0(3,0xffffffff);
                    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
                  }
                }
                else {
                  FUN_00599450(local_5c,0);
                  if ((*(char *)(param_1 + 10) == '\0') &&
                     (cVar2 = FUN_00599a70(local_5c), cVar2 != '\0')) {
                    FUN_00599570(local_5c,1);
                    *(undefined1 *)(param_1 + 10) = 1;
                    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
                  }
                  else {
                    *(undefined1 *)(param_1 + 10) = 0;
                    FUN_00595500(local_5c);
                    FUN_005dcb00(local_5c);
                    piVar4 = (int *)FUN_0063aac0();
                    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    if (bVar1) {
                      local_5c = -1;
                    }
                    FUN_005994c0(2,local_5c);
                    (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(1,0);
                  }
                }
              }
            }
            else {
              *(undefined1 *)(DAT_007935a8 + 0x116) = 0;
              FUN_005dcb00(iVar3);
              piVar4 = (int *)FUN_0063aac0();
              if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                local_54 = 1;
              }
              else {
                local_54 = 0;
              }
              FUN_00599450(iVar3,local_54);
              FUN_00595570(iVar3);
            }
          }
          else {
            FUN_005f2870();
            FUN_00599450(0xffffffff,0);
            FUN_00594830();
          }
        }
      }
      else {
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          local_50 = 1;
        }
        else {
          local_50 = 0;
        }
        FUN_00599450(local_8,local_50);
        FUN_005951f0(local_8);
      }
    }
  }
  else {
    FUN_005948c0();
  }
  return;
}

