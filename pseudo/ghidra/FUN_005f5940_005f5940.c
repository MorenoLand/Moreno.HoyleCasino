// FUN_005f5940  005f5940

void __thiscall FUN_005f5940(int param_1,int *param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_14 = *param_2;
    local_10 = param_2[1];
    local_c = param_2[2];
    local_8 = param_2[3];
    iVar1 = *(int *)(param_1 + 0x40);
    if (1 < iVar1) {
      local_c = (local_c - local_14) * iVar1 + local_14;
      local_8 = (local_8 - local_10) * iVar1 + local_10;
    }
    FUN_005f9500(&local_14);
  }
  return;
}

