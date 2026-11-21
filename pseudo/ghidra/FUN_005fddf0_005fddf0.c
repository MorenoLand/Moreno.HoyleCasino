// FUN_005fddf0  005fddf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005fddf0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x1bc) != 0) {
    param_2 = param_2 + -5;
    param_3 = param_3 + -5;
  }
  if (param_4 == 1) {
    iVar1 = FUN_005fed00();
    param_3 = param_3 - iVar1;
  }
  iVar1 = FUN_005fed00();
  iVar2 = FUN_005f8570();
  if (iVar2 < iVar1 + param_3) {
    iVar1 = FUN_005fed00();
    param_3 = FUN_005f8570();
    param_3 = param_3 - iVar1;
  }
  FUN_005f8420(param_2 - (int)PTR_006d6eb4,param_3 - _DAT_006d6eb8);
  iVar1 = _DAT_006d6eb8;
  piVar3 = (int *)FUN_005fb2b0(0);
  (**(code **)(*piVar3 + 0x44))(PTR_006d6eb4,iVar1);
  FUN_005fb2b0(0);
  local_c = FUN_005f5590();
  FUN_005fb2b0(0);
  iVar2 = FUN_005eb4b0();
  local_c = iVar2 + iVar1 + local_c;
  for (local_8 = 0; iVar1 = FUN_005feda0(), local_8 < iVar1; local_8 = local_8 + 1) {
    piVar3 = (int *)FUN_005ff080(local_8);
    (**(code **)(*piVar3 + 0x44))(PTR_006d6eb4,local_c);
    FUN_005ff080(local_8);
    iVar1 = FUN_005f5590();
    local_c = iVar1 + local_c;
  }
  piVar3 = (int *)FUN_005fb2b0(1);
  (**(code **)(*piVar3 + 0x44))(PTR_006d6eb4,local_c);
  iVar1 = FUN_005fb630(2);
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005fb630(2);
    (**(code **)(*piVar3 + 0x44))(0,0);
    uVar4 = FUN_005f8550();
    FUN_005fb630(2);
    FUN_005f5530(uVar4);
    uVar4 = FUN_005f8570();
    FUN_005fb630(2);
    FUN_005f5570(uVar4);
  }
  return;
}

