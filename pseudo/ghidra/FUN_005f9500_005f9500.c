// FUN_005f9500  005f9500

void __thiscall FUN_005f9500(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = param_2[3];
  iVar1 = FUN_005f84f0();
  iVar2 = FUN_005f84d0();
  local_14 = local_14 + iVar2;
  local_10 = local_10 + iVar1;
  local_c = local_c + iVar2;
  local_8 = local_8 + iVar1;
  (**(code **)(**(int **)(param_1 + 0x1a8) + 0x14))(&local_14);
  return;
}

