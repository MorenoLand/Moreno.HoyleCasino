// FUN_0045b300  0045b300

void __fastcall FUN_0045b300(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_70;
  int local_6c;
  undefined1 local_68;
  int local_8;
  
  FUN_004587e0();
  if (*(int *)(DAT_00790738 + 0x124) == -1) {
    if (*(int *)(DAT_00790738 + 0x10c) == -1) {
      FUN_0045b7a0();
    }
    if (*(char *)(param_1 + 6) == '\0') {
      FUN_0045b960();
    }
    else {
      local_8 = FUN_00460840();
      if ((*(char *)(DAT_0162ee84 + 0x25) != '\0') && (local_8 != -1)) {
        FUN_005dcb00(local_8);
        piVar4 = (int *)FUN_0063aac0();
        if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          iVar5 = FUN_005dcb00(local_8);
          *(undefined1 *)(iVar5 + 0x4a1) = 1;
          local_8 = FUN_00460840();
        }
      }
      if (local_8 == -1) {
        if (*(char *)(param_1 + 10) == '\0') {
          FUN_00460d50();
          *(undefined1 *)(param_1 + 10) = 1;
        }
        cVar3 = FUN_00460ea0();
        if (cVar3 == '\0') {
          iVar5 = FUN_00461050();
          if (iVar5 == -1) {
            iVar5 = FUN_00461450();
            if (iVar5 == -1) {
              iVar5 = FUN_0045e8e0();
              if ((iVar5 == 1) && (iVar5 = FUN_004618e0(), iVar5 != -1)) {
                FUN_00460420(iVar5,0);
                FUN_0045c610(iVar5,1);
                (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
              }
              else if ((*(char *)(param_1 + 7) == '\0') && (cVar3 = FUN_005da7b0(), cVar3 != '\0'))
              {
                *(undefined1 *)(param_1 + 7) = 1;
                iVar5 = DAT_00790738;
                *(undefined4 *)(DAT_00790738 + 0x124) = 1;
                *(undefined4 *)(iVar5 + 0x128) = 0xffffffff;
                (**(code **)(**(int **)(DAT_00790734 + 4) + 8))(1,0);
              }
              else {
                FUN_00460420(0xffffffff,0);
                *(undefined4 *)(DAT_00790738 + 0x10c) = 0xffffffff;
                if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
                  FUN_004597e0();
                }
                else {
                  FUN_0045b260(200);
                }
              }
            }
            else {
              if ((*(int *)(DAT_00790738 + 0x10c) != 4) && (*(char *)(param_1 + 8) == '\0')) {
                *(undefined1 *)(param_1 + 8) = 1;
                uVar7 = FUN_0064c8a0(0,0);
                FUN_005dcb00(*(undefined4 *)(DAT_00790738 + 0x10c),uVar7);
                FUN_005d6050(uVar7);
              }
              local_70 = iVar5;
              if (iVar5 == 4) {
                local_70 = -1;
              }
              FUN_00460420(local_70,0);
              FUN_0045c210(iVar5);
              iVar6 = FUN_0045e8e0();
              if ((iVar6 == 1) && (cVar3 = FUN_004619f0(iVar5), cVar3 != '\0')) {
                FUN_0045c610(iVar5,0);
              }
            }
          }
          else {
            *(undefined1 *)(DAT_00790738 + 0x116) = 0;
            local_6c = iVar5;
            if (iVar5 == 4) {
              local_6c = -1;
            }
            FUN_00460420(local_6c,0);
            FUN_0045be80(iVar5);
          }
        }
        else {
          FUN_005f2870();
          FUN_00460420(0xffffffff,0);
          FUN_0045bdf0();
        }
      }
      else {
        if (local_8 == 4) {
          FUN_00460420(0xffffffff,0);
        }
        else {
          FUN_005dcb00(local_8);
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            local_68 = 1;
          }
          else {
            local_68 = 0;
          }
          FUN_00460420(local_8,local_68);
        }
        FUN_0045b9c0(local_8);
      }
    }
  }
  else {
    iVar5 = *(int *)(DAT_00790738 + 0x124);
    FUN_0045c680();
    iVar6 = DAT_00790738;
    if (iVar5 == 5) {
      puVar1 = (undefined4 *)(DAT_00790738 + 0x104);
      *(undefined4 *)(DAT_00790738 + 0x124) = 2;
      *(undefined4 *)(iVar6 + 0x128) = *puVar1;
    }
  }
  return;
}

