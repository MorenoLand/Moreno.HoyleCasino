// FUN_00524500  00524500

void __fastcall FUN_00524500(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_54;
  int local_8;
  
  cVar2 = FUN_00523440();
  if (cVar2 == '\0') {
    FUN_00522560();
    if (*(int *)(DAT_00793374 + 0xdb0) == -1) {
      if (*(char *)(param_1 + 4) == '\0') {
        *(undefined1 *)(param_1 + 4) = 1;
        iVar4 = DAT_00793374;
        *(undefined4 *)(DAT_00793374 + 0xdb0) = 3;
        *(undefined4 *)(iVar4 + 0xdb4) = 4;
        (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
      }
      else {
        local_8 = FUN_00528880();
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
            local_8 = FUN_00528880();
          }
        }
        if (local_8 == -1) {
          cVar2 = FUN_00528a40();
          if (cVar2 == '\0') {
            if (*(char *)(param_1 + 7) == '\0') {
              *(undefined1 *)(param_1 + 7) = 1;
              iVar4 = DAT_00793374;
              *(undefined4 *)(DAT_00793374 + 0xdb0) = 5;
              *(undefined4 *)(iVar4 + 0xdb4) = 4;
              (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
            }
            else {
              iVar4 = FUN_00528a60();
              if (iVar4 == -1) {
                if (*(int *)(DAT_00793374 + 0xd38) == -1) {
                  if (*(char *)(param_1 + 9) == '\0') {
                    *(undefined1 *)(param_1 + 9) = 1;
                    (**(code **)(**(int **)(DAT_0079337c + 8) + 0x70))();
                    if ((*(char *)(DAT_0162ee84 + 0x25) == '\0') &&
                       (cVar2 = FUN_00527d20(), cVar2 != '\0')) {
                      FUN_005db8c0(0xffffff4c,0xaa);
                    }
                    else {
                      FUN_005230a0();
                      FUN_00524500();
                    }
                  }
                  else {
                    cVar2 = FUN_005da7b0();
                    if ((cVar2 == '\0') || (*(char *)(param_1 + 10) != '\0')) {
                      cVar2 = FUN_005da7b0();
                      if ((cVar2 != '\0') && (*(char *)(param_1 + 0xb) == '\0')) {
                        *(undefined1 *)(param_1 + 0xb) = 1;
                        cVar2 = (**(code **)(*DAT_00793370 + 0x2d4))();
                        if (cVar2 == '\0') {
                          return;
                        }
                      }
                      FUN_005243f0();
                    }
                    else {
                      *(undefined1 *)(param_1 + 10) = 1;
                      iVar4 = DAT_00793374;
                      *(undefined4 *)(DAT_00793374 + 0xdb0) = 2;
                      *(undefined4 *)(iVar4 + 0xdb4) = 0xffffffff;
                      (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
                    }
                  }
                }
                else if (*(char *)(param_1 + 8) == '\0') {
                  *(undefined1 *)(param_1 + 8) = 1;
                  iVar4 = DAT_00793374;
                  *(undefined4 *)(DAT_00793374 + 0xdb0) = 1;
                  *(undefined4 *)(iVar4 + 0xdb4) = 0xffffffff;
                  (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
                }
                else {
                  FUN_00528030(0xffffffff,0);
                  FUN_005236c0();
                }
              }
              else {
                FUN_00528030(iVar4,0);
                FUN_00524c20(iVar4);
                FUN_005232a0(iVar4);
              }
            }
          }
          else {
            *(undefined1 *)(DAT_00793374 + 0xdbc) = 1;
            FUN_005f2870();
            FUN_00528030(0xffffffff,0);
            if (*(char *)(param_1 + 6) == '\0') {
              *(undefined1 *)(param_1 + 6) = 1;
              iVar4 = DAT_00793374;
              *(undefined4 *)(DAT_00793374 + 0xdb0) = 4;
              *(undefined4 *)(iVar4 + 0xdb4) = 4;
              (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
            }
            else {
              *(undefined1 *)(param_1 + 6) = 0;
              (**(code **)(**(int **)(DAT_0079337c + 8) + 0x70))();
              FUN_00522910();
            }
          }
        }
        else {
          FUN_005dcb00(local_8);
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            local_54 = 1;
          }
          else {
            local_54 = 0;
          }
          FUN_00528030(local_8,local_54);
          FUN_005249f0(local_8);
        }
      }
    }
    else {
      FUN_00524ec0();
    }
  }
  else {
    (**(code **)(*(int *)DAT_00793370[1] + 8))(1,0);
  }
  return;
}

