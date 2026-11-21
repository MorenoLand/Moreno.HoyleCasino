// FUN_00443480  00443480

void __thiscall FUN_00443480(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int local_8;
  
  bVar1 = false;
  FUN_0060b710(param_2);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    iVar3 = FUN_005fb810(local_8 + 0x14);
    if (iVar3 != 0) {
      FUN_005fb810(local_8 + 0x14);
      FUN_0060c330();
      iVar3 = FUN_005fb810(local_8 + 0x14);
      if (iVar3 == param_1) {
        FUN_005fb810(local_8 + 0x14);
        FUN_0060c300();
      }
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_005fb810(local_8 + 0x14);
    cVar2 = FUN_0060c370();
    if (cVar2 == '\0') {
      piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
      pcVar6 = "1";
      pcVar5 = (char *)(**(code **)(*piVar4 + 0xb8))();
      iVar3 = strcmp(pcVar5,pcVar6);
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
        (**(code **)(*piVar4 + 0xb4))(&DAT_006b83f8);
        bVar1 = true;
      }
    }
    FUN_005fb810(local_8 + 0x14);
    cVar2 = FUN_0060c370();
    if (cVar2 == '\0') {
      piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
      pcVar6 = "0";
      pcVar5 = (char *)(**(code **)(*piVar4 + 0xb8))();
      iVar3 = strcmp(pcVar5,pcVar6);
      if (iVar3 == 0) {
        piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
        (**(code **)(*piVar4 + 0xb4))(&PTR_006b27f8);
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    FUN_00440260();
    FUN_00440310();
    FUN_00440490();
  }
  return;
}

