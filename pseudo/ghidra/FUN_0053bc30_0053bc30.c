// FUN_0053bc30  0053bc30

void __thiscall FUN_0053bc30(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4bb0;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 4) = param_2;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x178);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005eaaf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_24;
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x40))();
  }
  ExceptionList = local_10;
  return;
}

