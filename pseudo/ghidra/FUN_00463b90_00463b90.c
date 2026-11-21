// FUN_00463b90  00463b90

void __fastcall FUN_00463b90(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069f3db;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 8) == 0) {
    pvVar2 = operator_new(400);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00463b50();
    }
    *(undefined4 *)(param_1 + 8) = local_20;
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 8) + 0x70))(uVar1);
  FUN_005eaf00(0x186a1);
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  ExceptionList = local_10;
  return;
}

