// FUN_0057c350  0057c350

void __fastcall FUN_0057c350(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005ef3e0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x1d4) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d4) = local_20;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1d4) + 4) = DAT_00793578;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0x40))();
  ExceptionList = local_10;
  return;
}

