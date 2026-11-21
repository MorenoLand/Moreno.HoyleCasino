// FUN_0060c140  0060c140

void __fastcall FUN_0060c140(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aad58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f6270(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x1dc) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1dc) + 0x74))();
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1e0) + 0x74))();
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      FUN_005f9590(0);
      FUN_005f0bb0();
      FUN_005f5df0(0);
    }
    else {
      FUN_005f9590(param_1);
      if (*(int *)(*(int *)(param_1 + 0x1e4) + 0x17c) == 0) {
        pvVar1 = operator_new(0x24);
        local_8 = 0;
        if (pvVar1 == (void *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = CPrintDialog(param_1);
        }
        local_8 = 0xffffffff;
        FUN_005f5df0(local_20);
      }
      FUN_005f0b90();
    }
  }
  ExceptionList = local_10;
  return;
}

