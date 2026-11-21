// FUN_0060bff0  0060bff0

void __fastcall FUN_0060bff0(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aad32;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005ef3e0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x1e4) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e4) = local_20;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1e4) + 4) = *(undefined4 *)(param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x1e4) + 0x74))();
  ExceptionList = local_10;
  return;
}

