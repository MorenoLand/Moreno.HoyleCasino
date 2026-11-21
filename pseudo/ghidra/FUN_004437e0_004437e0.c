// FUN_004437e0  004437e0

void __thiscall FUN_004437e0(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *_Str2;
  undefined **_Str2_00;
  int local_8;
  
  iVar3 = FUN_005f5400();
  bVar1 = false;
  if (*(char *)(param_2 + 0x14) == '\t') {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      FUN_005fb810(local_8 + 0x14);
      cVar2 = FUN_0060c370();
      if (cVar2 != '\0') {
        piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
        _Str2 = "1";
        pcVar5 = (char *)(**(code **)(*piVar4 + 0xb8))();
        iVar3 = strcmp(pcVar5,_Str2);
        if (iVar3 == 0) {
          piVar4 = (int *)FUN_005fb810(local_8 + 0x14);
          (**(code **)(*piVar4 + 0xb4))(&DAT_006b83f8);
          bVar1 = true;
        }
      }
      FUN_005fb810(local_8 + 0x14);
      cVar2 = FUN_0060c370();
      if (cVar2 != '\0') {
        FUN_005fb810(local_8 + 0x14);
        FUN_0060c330();
        if ((*(uint *)(param_2 + 0x1c) & 1) == 0) {
          if (local_8 == 0) {
            FUN_005fb810(0x18);
            FUN_0060c300();
          }
          else {
            FUN_005fb810(local_8 + 0x13);
            FUN_0060c300();
          }
        }
        else if (local_8 == 4) {
          FUN_005fb810(0x14);
          FUN_0060c300();
        }
        else {
          FUN_005fb810(local_8 + 0x15);
          FUN_0060c300();
        }
        *(undefined1 *)(param_2 + 4) = 1;
        break;
      }
    }
    if (bVar1) {
      FUN_00440260();
      FUN_00440310();
      FUN_00440490();
    }
  }
  else {
    _Str2_00 = &PTR_006b27f8;
    pcVar5 = (char *)(**(code **)(*param_1 + 0xb8))();
    iVar6 = strcmp(pcVar5,(char *)_Str2_00);
    if (iVar6 != 0) {
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        CPropertySection::Get
                  (*(CPropertySection **)(DAT_0162ee84 + 0x14),(iVar3 + -0x14) * 3 + 5 + local_8,
                   (ulong *)(iVar3 + -0x14));
        cVar2 = FUN_00600230();
        if (cVar2 != '\0') {
          FUN_0060b7d0(param_2);
          FUN_00440260();
          FUN_00440310();
          FUN_00440490();
          return;
        }
      }
    }
    FUN_0060b7d0(param_2);
    FUN_00440260();
    FUN_00440310();
    FUN_00440490();
  }
  return;
}

