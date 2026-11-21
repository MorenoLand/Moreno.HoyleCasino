// FUN_005624e0  005624e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005624e0(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 local_28;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a596a;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    (**(code **)(**(int **)(param_1 + 0x4c + local_14 * 4) + 0x70))(uVar2);
  }
  iVar3 = FUN_00637810(0);
  if (iVar3 < 4) {
    local_18 = 0;
  }
  else if (iVar3 < 7) {
    local_18 = 1;
  }
  else if (iVar3 < 9) {
    local_18 = 2;
  }
  else {
    local_18 = 3;
  }
  local_14 = 0;
  while( true ) {
    if (4 < local_14) {
      (**(code **)(*param_2 + 8))(3,0);
      ExceptionList = local_10;
      return;
    }
    cVar1 = FUN_005f54c0();
    if (cVar1 != '\0') break;
    local_14 = local_14 + 1;
  }
  if (DAT_00793434 == 0) {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0xe0);
  }
  else {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,10,1,0x3f800000,_DAT_006b3654,param_1 + 0xe4);
  }
  DAT_00793434 = 1 - DAT_00793434;
  *(int *)(param_1 + 0xf8) = local_14;
  (**(code **)(**(int **)(param_1 + 0x1c + local_14 * 4) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x1c + local_14 * 4) + 0x74))();
  pvVar4 = operator_new(0x20);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = FID_conflict_evaluation_error(param_2);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_28);
  *(undefined4 *)(*(int *)(param_1 + 0x1c + local_14 * 4) + 0x178) = local_18;
  ExceptionList = local_10;
  return;
}

