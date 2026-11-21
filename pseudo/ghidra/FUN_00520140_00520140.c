// FUN_00520140  00520140

void __thiscall FUN_00520140(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3ea4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x90) == 0) {
    pvVar2 = operator_new(0x1d4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_0051cc80();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90) = local_28;
    *(undefined1 *)(*(int *)(param_1 + 0x90) + 0x1c0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x1bc) = param_2;
    (**(code **)(**(int **)(param_1 + 0x90) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

