// FUN_0041afe0  0041afe0

undefined1 __thiscall FUN_0041afe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_c;
  
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_c = 0;
      }
      else {
        local_c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_c;
    }
  }
  iVar1 = FUN_00419530(param_2,param_3);
  if (iVar1 == 2) {
    uVar2 = FUN_004193d0(param_2,param_3,0);
    iVar1 = FUN_00641280(uVar2);
    uVar2 = FUN_004193d0(param_2,param_3,1);
    iVar3 = FUN_00641280(uVar2);
    if (iVar1 == iVar3) {
      return 1;
    }
  }
  return 0;
}

