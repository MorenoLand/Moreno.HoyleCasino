// FUN_00655720  00655720

void __fastcall FUN_00655720(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if (0 < iVar3) {
    FUN_005fb350(3);
    uVar1 = FUN_00600230();
    FUN_006375b0();
    iVar3 = FUN_0063aac0();
    *(undefined1 *)(iVar3 + 0x5a) = uVar1;
  }
  FUN_005fb350(4);
  uVar1 = FUN_00600230();
  FUN_006375b0();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x58) = uVar1;
  iVar3 = (**(code **)(*DAT_0162ee84 + 0x17c))();
  if (iVar3 != 0) {
    cVar2 = FUN_00655a30();
    if (cVar2 == '\0') {
      FUN_005fb860(0xd);
      cVar2 = FUN_006051d0();
      FUN_006375b0();
      iVar3 = FUN_0063aac0();
      *(int *)(iVar3 + 0x260) = (int)cVar2;
    }
    else {
      uVar4 = FUN_00655ce0();
      FUN_006375b0();
      iVar3 = FUN_0063aac0();
      *(undefined4 *)(iVar3 + 0x264) = uVar4;
    }
    FUN_005fb350(0xc);
    uVar1 = FUN_00600230();
    FUN_006375b0();
    iVar3 = FUN_0063aac0();
    *(undefined1 *)(iVar3 + 0x25d) = uVar1;
  }
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xb8))();
  if (cVar2 != '\0') {
    FUN_005fb350(5);
    uVar1 = FUN_00600230();
    FUN_006375b0();
    iVar3 = FUN_0063aac0();
    *(undefined1 *)(iVar3 + 0x378) = uVar1;
  }
  FUN_005fb350(6);
  uVar1 = FUN_00600230();
  FUN_006375b0();
  iVar3 = FUN_0063aac0();
  *(undefined1 *)(iVar3 + 0x59) = uVar1;
  iVar3 = (**(code **)(*DAT_0162ee84 + 0x168))();
  if (0 < iVar3) {
    FUN_005fb860(9);
    uVar1 = FUN_006051d0();
    FUN_006375b0();
    iVar3 = FUN_0063aac0();
    *(undefined1 *)(iVar3 + 0x5c) = uVar1;
  }
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xbc))();
  if (cVar2 != '\0') {
    FUN_005fb860(10);
    cVar2 = FUN_006051d0();
    FUN_006375b0();
    iVar3 = FUN_0063aac0();
    *(char *)(iVar3 + 0x5b) = '\n' - cVar2;
  }
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xb4))();
  if (cVar2 != '\0') {
    FUN_005fb350(7);
    cVar2 = FUN_00600230();
    FUN_006079d0("SkipMovie",cVar2 == '\0');
    FUN_005fb350(7);
    DAT_007960c5 = FUN_00600230();
  }
  (**(code **)(*param_1 + 0x4c))();
  FUN_00637610();
  (**(code **)(*DAT_0162ee84 + 900))();
  (**(code **)(*DAT_0162ee80 + 0xa0))();
  return;
}

