// FUN_00404200  00404200

void __fastcall FUN_00404200(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 local_78;
  undefined1 local_74;
  int local_60;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d73b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00401cb0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(DAT_007902f0 + 0x10e0) == -1) {
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined1 *)(param_1 + 4) = 1;
      iVar4 = DAT_007902f0;
      *(undefined4 *)(DAT_007902f0 + 0x10e0) = 0;
      *(undefined4 *)(iVar4 + 0x10e4) = 4;
      (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
    }
    else {
      local_14 = FUN_00407d00();
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
          local_14 = FUN_00407d00();
        }
      }
      if (local_14 == -1) {
        if (*(char *)(param_1 + 10) == '\0') {
          FUN_004080d0();
          *(undefined1 *)(param_1 + 10) = 1;
        }
        if (*(char *)(param_1 + 6) == '\0') {
          *(undefined1 *)(param_1 + 6) = 1;
          iVar4 = DAT_007902f0;
          *(undefined4 *)(DAT_007902f0 + 0x10e0) = 1;
          *(undefined4 *)(iVar4 + 0x10e4) = 4;
          (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
        }
        else {
          cVar2 = FUN_00407cc0();
          if (cVar2 == '\0') {
            FUN_00402370();
            local_60 = FUN_004082e0();
            if (local_60 == -1) {
              if (*(char *)(param_1 + 7) == '\0') {
                *(undefined1 *)(param_1 + 7) = 1;
                FUN_004084f0();
                FUN_00409630();
                (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
              }
              else {
                FUN_00407be0(0xffffffff,0);
                cVar2 = FUN_005da7b0();
                if ((cVar2 == '\0') || (*(char *)(param_1 + 9) != '\0')) {
                  if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                    FUN_00401f30();
                  }
                  else {
                    FUN_00404160(200);
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 9) = 1;
                  iVar4 = DAT_007902f0;
                  *(undefined4 *)(DAT_007902f0 + 0x10e0) = 3;
                  *(undefined4 *)(iVar4 + 0x10e4) = 0xffffffff;
                  (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
                }
              }
            }
            else {
              FUN_00407be0(local_60,0);
              uVar6 = FUN_00404ad0(local_60);
              FUN_005dcb00(local_60);
              piVar3 = (int *)FUN_0063aac0();
              if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              iVar4 = DAT_007902f0;
              if (bVar1) {
                local_60 = -1;
              }
              *(undefined4 *)(DAT_007902f0 + 0x10e0) = uVar6;
              *(int *)(iVar4 + 0x10e4) = local_60;
              (**(code **)(**(int **)(DAT_007902ec + 4) + 8))(1,0);
            }
          }
          else {
            FUN_00407be0(0xffffffff,0);
            pvVar5 = operator_new(0x2c);
            local_8 = 0;
            if (pvVar5 == (void *)0x0) {
              local_78 = 0;
            }
            else {
              local_78 = FUN_00403ba0();
            }
            local_8 = 0xffffffff;
            FUN_005da390(local_78);
          }
        }
      }
      else {
        FUN_005dcb00(local_14);
        piVar3 = (int *)FUN_0063aac0();
        if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
          local_74 = 1;
        }
        else {
          local_74 = 0;
        }
        FUN_00407be0(local_14,local_74);
        FUN_00404680(local_14);
      }
    }
  }
  else {
    FUN_00404ba0();
  }
  ExceptionList = local_10;
  return;
}

