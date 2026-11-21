// FUN_00672690  00672690

void __thiscall FUN_00672690(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  switch(param_2) {
  case 0:
    FUN_005fb350(6);
    uVar2 = FUN_00600230();
    iVar3 = FUN_005f3bf0();
    FUN_006375b0();
    iVar4 = FUN_0063aac0();
    *(undefined1 *)(iVar4 + 0x268 + iVar3) = uVar2;
    FUN_00637610();
    (**(code **)(*DAT_0162ee80 + 0x180))();
    if (*(char *)(param_1 + 0x1bc) != '\0') {
      (**(code **)(*DAT_0162ee80 + 0xf8))();
    }
    break;
  case 1:
    FUN_005fb350(6);
    uVar2 = FUN_00600230();
    iVar3 = FUN_005f3bf0();
    FUN_006375b0();
    iVar4 = FUN_0063aac0();
    *(undefined1 *)(iVar4 + 0x268 + iVar3) = uVar2;
    FUN_00637610();
    (**(code **)(*DAT_0162ee80 + 0x180))();
    uVar5 = (**(code **)(*DAT_0162ee84 + 600))();
    (**(code **)(*DAT_0162ee84 + 0x34))(uVar5);
    break;
  case 2:
    cVar1 = (**(code **)(*DAT_0162ee80 + 0x20c))();
    if (cVar1 != '\0') {
      FUN_005fb350(6);
      uVar2 = FUN_00600230();
      iVar3 = FUN_005f3bf0();
      FUN_006375b0();
      iVar4 = FUN_0063aac0();
      *(undefined1 *)(iVar4 + 0x268 + iVar3) = uVar2;
      FUN_00637610();
      (**(code **)(*DAT_0162ee80 + 0x180))();
    }
    break;
  case 3:
    FUN_005f87d0();
    (**(code **)(*DAT_0162ee80 + 0x174))(4);
    break;
  case 4:
    FUN_005f87d0();
    (**(code **)(*DAT_0162ee80 + 0x174))(3);
    break;
  case 5:
    uVar5 = (**(code **)(*DAT_0162ee84 + 0xf4))(0xffffffff);
    FUN_0060cce0(uVar5);
  }
  return;
}

