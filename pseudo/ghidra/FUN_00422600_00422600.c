// FUN_00422600  00422600

void __fastcall FUN_00422600(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 local_88;
  undefined1 local_84;
  int local_68;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e26b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041f1b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(DAT_00790358 + 0xe0) == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar4 = DAT_00790358;
      *(undefined4 *)(DAT_00790358 + 0xe0) = 4;
      *(undefined4 *)(iVar4 + 0xe4) = 4;
      (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
    }
    else {
      local_14 = FUN_00426420();
      if ((*(char *)(DAT_0162ee84 + 0x25) != '\0') && (local_14 != -1)) {
        FUN_005dcb00(local_14);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = FUN_005dcb00(local_14);
          *(undefined1 *)(iVar4 + 0x4a1) = 1;
          local_14 = FUN_00426420();
        }
      }
      if (local_14 == -1) {
        if (*(char *)(param_1 + 0xb) == '\0') {
          FUN_00426810();
          *(undefined1 *)(param_1 + 0xb) = 1;
        }
        if (*(char *)(param_1 + 6) == '\0') {
          *(undefined1 *)(param_1 + 6) = 1;
          iVar4 = DAT_00790358;
          *(undefined4 *)(DAT_00790358 + 0xe0) = 5;
          *(undefined4 *)(iVar4 + 0xe4) = 4;
          (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
        }
        else {
          cVar2 = FUN_00426960();
          if (cVar2 == '\0') {
            iVar4 = FUN_00426a40();
            if (iVar4 == -1) {
              if (*(char *)(param_1 + 8) == '\0') {
                *(undefined1 *)(param_1 + 8) = 1;
                *(undefined1 *)(DAT_00790358 + 0xad) = 1;
                cVar2 = FUN_00426e80();
                iVar4 = DAT_00790358;
                if (cVar2 == '\0') {
                  *(undefined4 *)(DAT_00790358 + 0xe0) = 6;
                  *(undefined4 *)(iVar4 + 0xe4) = 4;
                }
                (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
              }
              else {
                local_68 = FUN_00426da0();
                if (local_68 == -1) {
                  iVar4 = FUN_004271f0();
                  if (iVar4 == -1) {
                    FUN_00426260(0xffffffff,0);
                    cVar2 = FUN_005da7b0();
                    if ((cVar2 == '\0') || (*(char *)(param_1 + 9) != '\0')) {
                      if (*(char *)(DAT_00790358 + 0xad) == '\0') {
                        *(undefined1 *)(DAT_00790358 + 0xad) = 1;
                        (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
                      }
                      else if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                        FUN_0041fca0();
                      }
                      else {
                        FUN_00422560(200);
                      }
                    }
                    else {
                      *(undefined1 *)(param_1 + 9) = 1;
                      iVar4 = DAT_00790358;
                      *(undefined4 *)(DAT_00790358 + 0xe0) = 3;
                      *(undefined4 *)(iVar4 + 0xe4) = 0xffffffff;
                      (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
                    }
                  }
                  else {
                    FUN_00426260(iVar4,0);
                    FUN_004230b0(iVar4);
                    (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
                  }
                }
                else {
                  FUN_00426260(local_68,0);
                  cVar2 = FUN_00427670(local_68);
                  if ((cVar2 == '\0') || (*(char *)(param_1 + 10) != '\0')) {
                    *(undefined1 *)(param_1 + 10) = 0;
                    FUN_00423030(local_68);
                    FUN_005dcb00(local_68);
                    piVar3 = (int *)FUN_0063aac0();
                    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                      bVar1 = true;
                    }
                    else {
                      bVar1 = false;
                    }
                    iVar4 = DAT_00790358;
                    if (bVar1) {
                      local_68 = -1;
                    }
                    *(undefined4 *)(DAT_00790358 + 0xe0) = 2;
                    *(int *)(iVar4 + 0xe4) = local_68;
                    (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
                  }
                  else {
                    *(undefined1 *)(param_1 + 10) = 1;
                    iVar4 = DAT_00790358;
                    *(undefined4 *)(DAT_00790358 + 0xe0) = 7;
                    *(undefined4 *)(iVar4 + 0xe4) = 4;
                    (**(code **)(**(int **)(DAT_00790354 + 4) + 8))(1,0);
                  }
                }
              }
            }
            else {
              FUN_00426260(iVar4,0);
              FUN_00422ea0(iVar4);
            }
          }
          else {
            FUN_00426260(0xffffffff,0);
            pvVar5 = operator_new(0x28);
            local_8 = 0;
            if (pvVar5 == (void *)0x0) {
              local_88 = 0;
            }
            else {
              local_88 = FUN_00421390();
            }
            local_8 = 0xffffffff;
            FUN_005da390(local_88);
          }
        }
      }
      else {
        FUN_005dcb00(local_14);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_84 = 1;
        }
        else {
          local_84 = 0;
        }
        FUN_00426260(local_14,local_84);
        FUN_00422c00(local_14);
      }
    }
  }
  else {
    FUN_004230d0();
  }
  ExceptionList = local_10;
  return;
}

