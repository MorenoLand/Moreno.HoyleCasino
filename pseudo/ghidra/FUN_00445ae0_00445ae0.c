// FUN_00445ae0  00445ae0

undefined4 __fastcall FUN_00445ae0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined **ppuVar9;
  undefined8 uVar8;
  int local_10;
  
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    ppuVar9 = &PTR_006b27f8;
    pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
    iVar2 = strcmp(pcVar1,(char *)ppuVar9);
    if (iVar2 != 0) {
      pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
      iVar2 = atoi(pcVar1);
      if (iVar2 == 0) {
        FUN_005fb8f0(local_10 + 0x14,&PTR_006b27f8);
      }
      pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
      iVar2 = atoi(pcVar1);
      if (iVar2 == 1) {
        FUN_005fb8f0(local_10 + 0x14,&DAT_006b83f8);
        FUN_00440260();
        FUN_00440310();
        FUN_00440490();
      }
    }
  }
  iVar2 = FUN_00445a90();
  if (iVar2 == 0) {
    uVar3 = FUN_00630f40("SID_HORSERACING_NOBETSMADE",0);
    uVar3 = FUN_00630f40("SID_HORSERACING_MUSTPLACEBET",uVar3);
    FUN_0062ff10(uVar3);
    uVar3 = 0;
  }
  else {
    FUN_006375b0();
    iVar4 = FUN_005d5a50();
    if (iVar4 < iVar2) {
      uVar3 = FUN_00630f40("SID_CASINO_BANKEXCEEDED",0);
      uVar3 = FUN_00630f40("SID_CASINO_NOTENOUGHMONEYTOPLACEBET",uVar3);
      FUN_0062ff10(uVar3);
      uVar3 = 0;
    }
    else {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        ppuVar9 = &PTR_006b27f8;
        pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
        iVar4 = strcmp(pcVar1,(char *)ppuVar9);
        if ((iVar4 != 0) && (*(int *)(param_1 + 0x44 + local_10 * 0x78) == -1)) {
          uVar3 = FUN_00630f40("SID_HORSERACING_INCOMPLETETICKET",0);
          uVar3 = FUN_00630f40("SID_HORSERACING_CHOOSEWINPLACEORSHOW",uVar3);
          FUN_0062ff10(uVar3);
          return 0;
        }
      }
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        ppuVar9 = &PTR_006b27f8;
        pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
        iVar4 = strcmp(pcVar1,(char *)ppuVar9);
        if (iVar4 != 0) {
          pcVar1 = (char *)FUN_005fb8b0(local_10 + 0x14);
          iVar4 = atoi(pcVar1);
          *(int *)(param_1 + 0x3c + local_10 * 0x78) = iVar4;
          iVar4 = FUN_005eb220();
          (**(code **)(**(int **)(DAT_007906f4 + 0xb4 + local_10 * 4) + 0xb0))(iVar4 + 1);
          iVar4 = *(int *)(param_1 + 0x3c + local_10 * 0x78);
          iVar5 = FUN_00445e80(local_10);
          iVar6 = FUN_00445e40(local_10);
          *(int *)(param_1 + 0x40 + local_10 * 0x78) = (iVar6 * iVar4) / iVar5;
        }
      }
      uVar7 = FUN_0064c8a0(-iVar2,0);
      uVar8 = uVar7;
      FUN_005dcb00(0,uVar7);
      FUN_005d5fb0(uVar8);
      FUN_005dcb00(0,uVar7);
      FUN_005d5cf0(uVar7);
      uVar3 = 1;
    }
  }
  return uVar3;
}

