// FUN_0045afa0  0045afa0

void FUN_0045afa0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  
  iVar1 = *(int *)(DAT_00790738 + 0x104);
  if (param_1 == 0) {
    cVar2 = FUN_00461320(iVar1);
    if (cVar2 == '\0') {
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER_ILLEGALLOWHAND",0);
      uVar3 = FUN_00630f40("SID_PAIGOWPOKER_2CANTBEAT5",uVar3);
      FUN_0062ff10(uVar3);
      *(undefined2 *)(DAT_00790738 + 0xa2 + iVar1 * 2) = 0;
      *(undefined2 *)(DAT_00790738 + 0xac + iVar1 * 2) = 0;
      FUN_00459780();
      FUN_0045b300();
    }
    else {
      uVar3 = extraout_var;
      cVar2 = FUN_0045c0a0(iVar1);
      if (cVar2 != '\0') {
        FUN_005fb350(1);
        cVar2 = FUN_00600230(uVar3);
        FUN_0045f920(cVar2 == '\0');
        FUN_00459780();
        FUN_0045b300();
      }
    }
  }
  return;
}

