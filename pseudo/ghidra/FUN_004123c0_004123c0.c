// FUN_004123c0  004123c0

void __fastcall FUN_004123c0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 local_68;
  undefined1 local_64;
  int local_54;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dcfb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
    FUN_00419100(DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  FUN_0040cc00();
  FUN_0040d6b0(0);
  if (*(int *)(DAT_00790324 + 0x4ec) == -1) {
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined1 *)(param_1 + 7) = 1;
      iVar3 = DAT_00790324;
      *(undefined4 *)(DAT_00790324 + 0x4ec) = 7;
      *(undefined4 *)(iVar3 + 0x4f0) = 4;
      (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
    }
    else {
      iVar3 = FUN_00419dd0();
      if (iVar3 == -1) {
        if (*(char *)(param_1 + 0x18) == '\0') {
          FUN_0041a190();
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
        cVar2 = FUN_0041a260();
        if (cVar2 == '\0') {
          FUN_004190b0(0xffffffff,0);
          FUN_004122e0(200);
        }
        else {
          cVar2 = FUN_0041a350();
          if (cVar2 == '\0') {
            iVar3 = FUN_0041a430();
            if (iVar3 == -1) {
              cVar2 = FUN_0041a810();
              if (cVar2 == '\0') {
                iVar3 = FUN_0041a700();
                if (iVar3 == -1) {
                  iVar3 = FUN_0041a890();
                  if (iVar3 == -1) {
                    FUN_004190b0(0xffffffff,0);
                    cVar2 = FUN_0041b830();
                    if (cVar2 == '\0') {
                      if (*(char *)(param_1 + 0xf) == '\0') {
                        *(undefined1 *)(param_1 + 0xf) = 1;
                        iVar3 = DAT_00790324;
                        *(undefined4 *)(DAT_00790324 + 0x4ec) = 0xb;
                        *(undefined4 *)(iVar3 + 0x4f0) = 4;
                        (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                      }
                      else {
                        *(undefined1 *)(param_1 + 0xf) = 0;
                        (**(code **)(**(int **)(DAT_00790320 + 4) + 4))(1);
                        pvVar5 = operator_new(0x28);
                        local_8 = 0;
                        if (pvVar5 == (void *)0x0) {
                          local_68 = 0;
                        }
                        else {
                          local_68 = FUN_00410d40(*(undefined4 *)(DAT_00790320 + 4));
                        }
                        local_8 = 0xffffffff;
                        FUN_005fc420(local_68);
                      }
                    }
                    else if ((*(char *)(param_1 + 0xf) == '\0') &&
                            (cVar2 = FUN_0041b990(4,0xffffffff), cVar2 == '\0')) {
                      *(undefined1 *)(param_1 + 0xf) = 1;
                      iVar3 = DAT_00790324;
                      *(undefined4 *)(DAT_00790324 + 0x4ec) = 0xb;
                      *(undefined4 *)(iVar3 + 0x4f0) = 4;
                      (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                    }
                    else {
                      local_54 = FUN_0041b8f0();
                      if (local_54 == -1) {
                        cVar2 = FUN_005da7b0();
                        if ((cVar2 == '\0') || (*(char *)(param_1 + 0x13) != '\0')) {
                          FUN_004190b0(0xffffffff,0);
                          if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                            FUN_0040daf0();
                          }
                          else {
                            FUN_004122e0(200);
                          }
                        }
                        else {
                          *(undefined1 *)(param_1 + 0x13) = 1;
                          iVar3 = DAT_00790324;
                          *(undefined4 *)(DAT_00790324 + 0x4ec) = 6;
                          *(undefined4 *)(iVar3 + 0x4f0) = 0xffffffff;
                          (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                        }
                      }
                      else {
                        FUN_004190b0(local_54,0);
                        FUN_0041ba00(local_54);
                        if (*(char *)(param_1 + 0x11) == '\0') {
                          *(undefined1 *)(param_1 + 0x11) = 1;
                          iVar3 = DAT_00790324;
                          *(undefined4 *)(DAT_00790324 + 0x4ec) = 0xc;
                          *(undefined4 *)(iVar3 + 0x4f0) = 4;
                          (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                        }
                        else if (*(char *)(param_1 + 0x12) == '\0') {
                          *(undefined1 *)(param_1 + 0x12) = 1;
                          FUN_005dcb00(local_54);
                          piVar4 = (int *)FUN_0063aac0();
                          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
                            bVar1 = true;
                          }
                          else {
                            bVar1 = false;
                          }
                          iVar3 = DAT_00790324;
                          if (bVar1) {
                            local_54 = -1;
                          }
                          *(undefined4 *)(DAT_00790324 + 0x4ec) = 5;
                          *(int *)(iVar3 + 0x4f0) = local_54;
                          (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                        }
                        else {
                          *(undefined1 *)(param_1 + 0x11) = 0;
                          *(undefined1 *)(param_1 + 0x12) = 0;
                          (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                        }
                      }
                    }
                  }
                  else {
                    FUN_004190b0(iVar3,0);
                    cVar2 = FUN_0041a830(iVar3);
                    if (cVar2 == '\0') {
                      if (*(char *)(param_1 + 0xd) == '\0') {
                        FUN_00413190(iVar3);
                      }
                      else {
                        FUN_00413690(iVar3);
                      }
                    }
                    else {
                      FUN_00413090(iVar3);
                    }
                  }
                }
                else {
                  FUN_004190b0(iVar3,0);
                  FUN_0041b700(iVar3);
                  (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
                }
              }
              else {
                FUN_004190b0(0xffffffff,0);
                FUN_00412f40();
              }
            }
            else {
              FUN_004190b0(iVar3,0);
              FUN_00412e10(iVar3);
            }
          }
          else {
            FUN_004190b0(0xffffffff,0);
            FUN_00412cc0();
          }
        }
      }
      else {
        FUN_005dcb00(iVar3);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          local_64 = 1;
        }
        else {
          local_64 = 0;
        }
        FUN_004190b0(iVar3,local_64);
        FUN_00412a50(iVar3);
      }
    }
  }
  else {
    FUN_00413790(0);
  }
  ExceptionList = local_10;
  return;
}

