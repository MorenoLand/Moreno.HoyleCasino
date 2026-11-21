// FUN_006158d0  006158d0

void __thiscall FUN_006158d0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[0x1b];
  iVar2 = FUN_00615880();
  if ((iVar2 != 0) || (cVar1 = (**(code **)(*param_1 + 0xcc))(), cVar1 != '\0')) {
    if (param_2 == 0) {
      iVar2 = param_1[0x1b];
      iVar3 = (**(code **)(*param_1 + 0xbc))();
      iVar4 = (**(code **)(*param_1 + 0xb8))();
      if (iVar2 + param_3 + -1 + iVar3 < iVar4) {
        param_1[0x1b] = param_1[0x1b] + param_3;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0xb8))();
        iVar3 = (**(code **)(*param_1 + 0xbc))();
        param_1[0x1b] = iVar2 - iVar3;
      }
    }
    else if (param_1[0x1b] - param_3 < 0) {
      param_1[0x1b] = 0;
    }
    else {
      param_1[0x1b] = param_1[0x1b] - param_3;
    }
    if (param_1[0x1b] != iVar5) {
      if ((param_1[0x1b] < 0) ||
         (iVar5 = (**(code **)(*param_1 + 0xb8))(), iVar5 + -1 < param_1[0x1b])) {
        FUN_005e9f20("firstVisibleItem >= 0 && firstVisibleItem <= (GetNumItems() - 1)",
                     "..\\scilib\\sciscrollbox.cpp",0x15e);
      }
      FUN_00615540(param_1[0x1b]);
      (**(code **)(*param_1 + 0xd0))();
    }
  }
  return;
}

