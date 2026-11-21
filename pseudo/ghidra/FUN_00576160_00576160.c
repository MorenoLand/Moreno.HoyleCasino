// FUN_00576160  00576160

void __fastcall FUN_00576160(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6401;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
  pvVar1 = operator_new(0x1c);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  ExceptionList = local_10;
  return;
}

