// FUN_005b3ee0  005b3ee0

void __thiscall FUN_005b3ee0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 == -1) {
    param_3 = FUN_005b4e50(param_2);
  }
  FUN_005b7140(param_2,param_3,1);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
  local_c = *puVar1;
  local_8 = puVar1[1];
  (**(code **)(**(int **)(param_1 + 0x580 + param_2 * 4) + 0xc4))(&local_c,param_3,0);
  return;
}

