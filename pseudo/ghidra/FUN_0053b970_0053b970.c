// FUN_0053b970  0053b970

void __fastcall FUN_0053b970(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4b67;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0053b1a0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x4c) == 0) {
    pvVar1 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0053ccb0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = local_20;
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))();
    FUN_005f7340(0,0xaa);
  }
  FUN_005f85d0();
  FUN_005f2b20(0x310e9b,1);
  FUN_005f2b20(0x310e9c,1);
  ExceptionList = local_10;
  return;
}

