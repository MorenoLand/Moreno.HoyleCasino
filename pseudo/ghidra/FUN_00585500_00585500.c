// FUN_00585500  00585500

void __thiscall FUN_00585500(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if (param_1[0x1d] - param_3 < 0) {
      param_1[0x1d] = 0;
    }
    else {
      param_1[0x1d] = param_1[0x1d] - param_3;
    }
  }
  else {
    iVar2 = param_1[0x1d];
    iVar1 = (**(code **)(*param_1 + 0xb0))();
    if (iVar1 + -1 < iVar2 + param_3) {
      iVar2 = (**(code **)(*param_1 + 0xb0))();
      param_1[0x1d] = iVar2 + -1;
    }
    else {
      param_1[0x1d] = param_1[0x1d] + param_3;
    }
  }
  if ((param_1[0x1d] < 0) || (iVar2 = (**(code **)(*param_1 + 0xb0))(), iVar2 + -1 < param_1[0x1d]))
  {
    FUN_005e9f20("selectedID >= 0 && selectedID <= (GetNumItems() - 1)",
                 "..\\Casino\\kenoscrollbox.cpp",0x19e);
  }
  (**(code **)(*param_1 + 0xbc))(param_1[0x1d]);
  return;
}

