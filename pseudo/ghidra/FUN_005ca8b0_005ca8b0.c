// FUN_005ca8b0  005ca8b0

void __fastcall FUN_005ca8b0(int param_1)

{
  bool bVar1;
  int *piVar2;
  size_t sVar3;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  char local_74 [104];
  uint local_c;
  CPane *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (CPane *)(**(code **)(*DAT_007947e4 + 0x25c))();
  piVar2 = (int *)FUN_0063aac0();
  if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (CPane::GetMinSize(local_8,(CSize *)&local_80), *(int *)(param_1 + 0x24) != 0)) {
    FUN_0064c8d0(local_80,local_7c,local_74,1,1,1);
    sVar3 = strlen(local_74);
    local_78 = sVar3 - 2;
    (**(code **)(**(int **)(param_1 + 0x24) + 0xb4))(local_74);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(local_78 * -8 + 0x267,0x1cd);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

