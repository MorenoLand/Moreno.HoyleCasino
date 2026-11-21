// FUN_00648640  00648640

void __thiscall FUN_00648640(int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_14;
  
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  cVar2 = FUN_00637730(0);
  if (cVar2 == '\0') {
    uVar4 = FUN_00630f40("SID_SHELL_FACEMAKER",0);
    uVar4 = FUN_00630f40("SID_SHELL_SPEECHOFF",uVar4);
    FUN_0062ff10(uVar4);
  }
  else {
    cVar2 = FUN_00648ae0();
    if (cVar2 == '\0') {
      uVar4 = FUN_00630f40("SID_SHELL_FACEMAKER",0);
      uVar4 = FUN_00630f40("SID_SHELL_FACEMAKER_CANNOT_SPEAK",uVar4);
      FUN_0062ff10(uVar4);
    }
    else {
      FUN_00636e70();
      if (bVar1) {
        uVar6 = 0xffffffff;
        iVar5 = (-(uint)(param_2 != '\0') & 2) + 0x402;
        uVar4 = FUN_0057a470(iVar5,0xffffffff);
        uVar4 = FUN_00665800(uVar4);
        uVar4 = FUN_00637000(uVar4,iVar5,uVar6);
        *(uint *)(param_1 + 0x34) = 2 - (uint)(param_2 != '\0');
        FUN_00646fa0(uVar4,0xffffffff,0,0,1);
        if ((*(int *)(*(int *)(param_1 + 4) + 4) != -1) && (iVar5 = FUN_00636730(), 0 < iVar5)) {
          FUN_00648bd0(param_2);
          iVar5 = FUN_00648bb0();
          if ((iVar5 == *(int *)(param_1 + 0x3c)) &&
             (iVar5 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))(),
             (uint)(iVar5 - *(int *)(param_1 + 0x40)) < 18000)) {
            do {
              uVar4 = FUN_00636610();
              iVar5 = FUN_0062fbf0(uVar4);
              piVar3 = (int *)FUN_0063aac0();
              if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
            } while (bVar1);
            uVar4 = FUN_00637000(*(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + iVar5 * 4) + 8),
                                 0x49c - (uint)(param_2 != '\0'),0xffffffff);
            FUN_00646fa0(uVar4,0xffffffff,0,0,1);
            uVar4 = FUN_00639070(0);
            uVar6 = FUN_00639070(iVar5);
            FUN_0062fde0(">>>>> %s responds to %s\n",uVar6,uVar4);
            FUN_00648c20();
          }
          else {
            iVar5 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 4))();
            if (18000 < (uint)(iVar5 - *(int *)(param_1 + 0x40))) {
              FUN_00648c20();
            }
          }
        }
      }
      else if (((param_2 == '\0') && (iVar5 = FUN_0062fbf0(4), iVar5 < 2)) &&
              (cVar2 = (**(code **)(*DAT_0162ee84 + 0xc4))(), cVar2 != '\0')) {
        FUN_00648550(0,1);
      }
      else {
        uVar4 = FUN_00637260(0x4a2 - (uint)(param_2 != '\0'),
                             *(undefined4 *)(*(int *)(param_1 + 4) + 8));
        iVar5 = FUN_006340d0();
        uVar7 = 0xffffffff;
        uVar6 = FUN_0057a470(uVar4,0xffffffff);
        uVar6 = FUN_00665800(uVar6);
        uVar4 = FUN_00637000(uVar6,uVar4,uVar7);
        if ((param_2 != '\0') || (cVar2 = (**(code **)(*DAT_0162ee84 + 0xcc))(), cVar2 != '\0')) {
          *(uint *)(*(int *)(*(int *)(DAT_0162ee84[0x16] + iVar5 * 4) + 0x20) + 0x34) =
               2 - (uint)(param_2 != '\0');
        }
        FUN_00646fa0(uVar4,0xffffffff,0,0,1);
        cVar2 = (**(code **)(*DAT_0162ee84 + 0xd0))();
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*DAT_0162ee84 + 0xd4))();
          if (cVar2 == '\0') {
            local_14 = 0x49e - (uint)(param_2 != '\0');
          }
          else {
            local_14 = 0x4a0 - (uint)(param_2 != '\0');
          }
          uVar4 = FUN_00637000(*(undefined4 *)(*(int *)(param_1 + 4) + 8),local_14,0xffffffff);
          FUN_00646fa0(uVar4,0xffffffff,0,0,1);
        }
      }
    }
  }
  return;
}

