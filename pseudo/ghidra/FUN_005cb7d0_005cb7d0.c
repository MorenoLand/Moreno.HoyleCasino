// FUN_005cb7d0  005cb7d0

undefined1 __thiscall FUN_005cb7d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_14;
  
  iVar1 = param_1 + 0x48 + param_2 * 0x20;
  if ((*(int *)(iVar1 + param_3 * 8) == 0) && (*(int *)(iVar1 + 4 + param_3 * 8) == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}

