// FUN_0064d720  0064d720

void __fastcall FUN_0064d720(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[0xd] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x134))();
    if (cVar1 != '\0') {
      uVar3 = FUN_00630f40("SID_GENERIC_WARNING",4);
      uVar3 = FUN_00630f40("SID_SHELL_CLEARPLAYERWARNING",uVar3);
      iVar4 = FUN_0062ff10(uVar3);
      if (iVar4 == 7) {
        param_1[0xd] = 0;
        return;
      }
    }
    (**(code **)(*param_1 + 0x150))(*(undefined4 *)(param_1[0xd] + 4),0);
    cVar1 = (**(code **)(*param_1 + 0x13c))();
    if (cVar1 != '\0') {
      FUN_0064d5e0(*(undefined4 *)(DAT_0162ee84 + 0x58));
    }
    uVar2 = FUN_00636610();
    iVar4 = FUN_005f3bf0();
    FUN_006375b0();
    iVar5 = FUN_0063aac0();
    *(undefined1 *)(iVar5 + 0x5d + iVar4) = uVar2;
    FUN_00637610();
    (**(code **)(*param_1 + 0x144))(1,0xffffffff);
    param_1[0xd] = 0;
  }
  return;
}

