// FUN_0056e340  0056e340

void __fastcall FUN_0056e340(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5e66;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x74))(uVar1);
  ExceptionList = local_10;
  return;
}

