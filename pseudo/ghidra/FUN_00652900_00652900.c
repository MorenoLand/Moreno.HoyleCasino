// FUN_00652900  00652900

void __thiscall FUN_00652900(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac3cf;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x48 + local_14 * 4) + 0x70))();
  }
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + -0x148 + param_2 * 4) + 0x74))(uVar1);
    pvVar2 = operator_new(0x28);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00601110(0,0,1,0,0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_24);
  }
  ExceptionList = local_10;
  return;
}

