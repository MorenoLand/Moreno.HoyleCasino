// FUN_00444d30  00444d30

void __thiscall FUN_00444d30(int param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong *puVar3;
  char *_Str1;
  int iVar4;
  int iVar5;
  char *_Str2;
  
  switch(param_2) {
  case 0:
    cVar1 = FUN_00445ae0();
    if (cVar1 == '\0') {
      cVar1 = FUN_00444cb0();
      if (cVar1 != '\0') {
        uVar2 = FUN_005dcb00(0);
        FUN_005dbb70(uVar2);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x25e) = 0;
      (**(code **)(**(int **)(DAT_007906ec + 4) + 8))(2,0x14);
    }
    break;
  case 1:
    FUN_00445f50();
    break;
  case 2:
    (**(code **)(**(int **)(DAT_007906ec + 4) + 0x1c))(0);
    break;
  case 3:
    uVar2 = (**(code **)(*DAT_0162ee84 + 600))();
    (**(code **)(*DAT_0162ee84 + 0x34))(uVar2);
    break;
  case 4:
    (**(code **)(**(int **)(DAT_007906ec + 4) + 0x1c))(0);
    FUN_0043d2c0();
  }
  if ((4 < (int)param_2) && ((int)param_2 < 0x14)) {
    puVar3 = (ulong *)((int)(param_2 - 5) / 3);
    iVar5 = (int)(param_2 - 5) % 3;
    CPropertySection::Get((CPropertySection *)DAT_0162ee84[5],param_2,puVar3);
    cVar1 = FUN_00600230();
    if ((cVar1 != '\0') && (*(int *)(param_1 + 0x44 + (int)puVar3 * 0x78) != iVar5)) {
      _Str2 = "1";
      _Str1 = (char *)FUN_005fb8b0(puVar3 + 5);
      iVar4 = strcmp(_Str1,_Str2);
      if (iVar4 == 0) {
        FUN_005fb8f0(puVar3 + 5,&DAT_006b83f8);
        FUN_00440260();
        FUN_00440310();
        FUN_00440490();
      }
      FUN_00444d00(puVar3,iVar5);
      FUN_00440310();
    }
  }
  return;
}

