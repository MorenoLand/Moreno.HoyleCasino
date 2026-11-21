// FUN_004055f0  004055f0

void __thiscall FUN_004055f0(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069d803;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == -1) {
    param_2 = FUN_00408460(DAT_00781870 ^ (uint)&stack0xfffffffc);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    pvVar1 = operator_new(0x1c4);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_00402fc0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x80) = local_24;
    *(int *)(*(int *)(param_1 + 0x80) + 0x1c0) = param_2;
    (**(code **)(**(int **)(param_1 + 0x80) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0();
  ExceptionList = local_10;
  return;
}

