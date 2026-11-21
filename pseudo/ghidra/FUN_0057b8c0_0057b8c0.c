// FUN_0057b8c0  0057b8c0

void __fastcall FUN_0057b8c0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  undefined4 local_24;
  int local_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6747;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f8340(DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar2 = FUN_005f88f0();
  if (cVar2 == '\0') {
    local_19 = *(undefined1 *)(param_1 + 0x1bc);
    local_24 = *(undefined4 *)(*(int *)(param_1 + 0x19e0) + 0x1b4);
    local_14 = FUN_005f8930();
    local_20 = FUN_005f8950();
    if ((((local_14 < 1) || (iVar3 = FUN_005f8550(), iVar3 + -3 < local_14)) || (local_20 < 1)) ||
       (iVar3 = FUN_005f8570(), iVar3 + -3 < local_20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((*(char *)(param_1 + 0x1bd) != '\0') &&
       ((bVar1 || ((*(int *)(*(int *)(param_1 + 0x19e0) + 0x1b4) != -1 &&
                   (cVar2 = FUN_0057d4b0(), cVar2 != '\0')))))) {
      *(undefined1 *)(param_1 + 0x1bd) = 0;
      FUN_0057b1b0();
    }
    if (*(char *)(param_1 + 0x124) == '\0') {
      FUN_006101f0();
      local_8 = 0;
      local_40 = local_14;
      local_3c = local_20;
      piVar4 = (int *)FUN_005fb300(0);
      cVar2 = (**(code **)(*piVar4 + 0x84))(local_48);
      if ((cVar2 == '\0') || (*(char *)(param_1 + 0x1bc) == '\0')) {
        piVar4 = (int *)FUN_005fb350(1);
        cVar2 = (**(code **)(*piVar4 + 0x84))(local_48);
        if ((cVar2 == '\0') || (*(char *)(param_1 + 0x1bc) == '\0')) {
          for (local_18 = 0; local_18 < *(int *)(param_1 + 0x19d4); local_18 = local_18 + 1) {
            cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_18 * 4) + 0x84))
                              (local_48);
            if ((cVar2 != '\0') && (*(char *)(param_1 + 0x1bc) != '\0')) {
              if (*(int *)(*(int *)(param_1 + 0x19e0) + 0x1b4) != local_18) {
                FUN_0057d3a0();
                iVar5 = FUN_005f84f0();
                iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_18 * 4) + 0x54))
                                  ();
                iVar3 = iVar5 + -4 + iVar3;
                iVar5 = FUN_005f84d0(iVar3);
                iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19d8) + local_18 * 4) + 0x4c))
                                  ();
                iVar7 = FUN_005f5550();
                FUN_005f8420(iVar5 + iVar6 + iVar7,iVar3);
                FUN_0057cb70(local_18);
                FUN_0057b1b0();
              }
              local_8 = 0xffffffff;
              FUN_00610250();
              ExceptionList = local_10;
              return;
            }
          }
          if (*(char *)(param_1 + 0x1bd) == '\0') {
            if (bVar1) {
              if (*(char *)(param_1 + 0x1bc) == '\0') {
                *(undefined1 *)(param_1 + 0x1bc) = 1;
                FUN_0057d3a0();
                FUN_0057b1b0();
              }
              local_8 = 0xffffffff;
              FUN_00610250();
            }
            else {
              if ((*(int *)(*(int *)(param_1 + 0x19e0) + 0x1b4) != -1) &&
                 (cVar2 = FUN_0057d4b0(), cVar2 == '\0')) {
                FUN_0057d3a0();
                FUN_0057b1b0();
              }
              if ((*(char *)(param_1 + 0x1bc) != '\0') && (cVar2 = FUN_0057d4b0(), cVar2 == '\0')) {
                *(undefined1 *)(param_1 + 0x1bc) = 0;
                FUN_0057b1b0();
              }
              local_8 = 0xffffffff;
              FUN_00610250();
            }
          }
          else {
            local_8 = 0xffffffff;
            FUN_00610250();
          }
        }
        else {
          if (*(int *)(*(int *)(param_1 + 0x19e0) + 0x1b4) != *(int *)(param_1 + 0x19d4) + -2) {
            FUN_0057d3a0();
            piVar4 = (int *)FUN_005fb350(1);
            iVar3 = (**(code **)(*piVar4 + 0x54))();
            iVar5 = FUN_005f84f0();
            iVar3 = iVar5 + -4 + iVar3;
            iVar5 = FUN_005f5550(iVar3);
            iVar6 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x19d8) + 0x4c))();
            iVar7 = FUN_005f84d0();
            FUN_005f8420(iVar7 + iVar6 + iVar5,iVar3);
            FUN_0057cb70(*(int *)(param_1 + 0x19d4) + -2);
            FUN_0057b1b0();
          }
          local_8 = 0xffffffff;
          FUN_00610250();
        }
      }
      else {
        if (*(int *)(*(int *)(param_1 + 0x19e0) + 0x1b4) != *(int *)(param_1 + 0x19d4) + -1) {
          FUN_0057d3a0();
          piVar4 = (int *)FUN_005fb300(0);
          iVar3 = (**(code **)(*piVar4 + 0x54))();
          iVar5 = FUN_005f84f0();
          iVar3 = iVar5 + -4 + iVar3;
          iVar5 = FUN_005f5550(iVar3);
          iVar6 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x19d8) + 0x4c))();
          iVar7 = FUN_005f84d0();
          FUN_005f8420(iVar7 + iVar6 + iVar5,iVar3);
          FUN_0057cb70(*(int *)(param_1 + 0x19d4) + -1);
          FUN_0057b1b0();
        }
        local_8 = 0xffffffff;
        FUN_00610250();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

