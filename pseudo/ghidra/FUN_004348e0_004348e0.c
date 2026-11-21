// FUN_004348e0  004348e0

bool __thiscall FUN_004348e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_8;
  
  iVar4 = (**(code **)(*DAT_007906d0 + 0x2b0))();
  local_10 = FUN_0064c8a0(0,0);
  for (local_8 = 0; local_8 < 0x4c; local_8 = local_8 + 1) {
    piVar1 = (int *)(*(int *)(param_1 + 4 + local_8 * 4) + 0x48 + param_2 * 0x20);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    if ((iVar2 != 0) || (iVar3 != 0)) {
      local_10 = local_10 + iVar2;
      FUN_0064c510((double)iVar3);
    }
  }
  return local_10 < iVar4;
}

