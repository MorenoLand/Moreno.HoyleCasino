// FUN_00635c40  00635c40

undefined1 __thiscall FUN_00635c40(int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_c;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0();
  }
  iVar1 = (**(code **)(*param_1 + 600))();
  if (param_2 != iVar1) {
    if ((param_2 < 0) || (iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), iVar1 <= param_2)) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
    return local_c;
  }
  return 0;
}

