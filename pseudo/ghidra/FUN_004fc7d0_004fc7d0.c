// FUN_004fc7d0  004fc7d0

void __fastcall FUN_004fc7d0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a27b3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x84) == 0) {
    pvVar2 = operator_new(0x1d4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_0051cc80();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x84) = local_2c;
    *(undefined1 *)(*(int *)(param_1 + 0x84) + 0x1c0) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x1bc) = *(undefined4 *)(DAT_00791364 + 0xf4);
    (**(code **)(**(int **)(param_1 + 0x84) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

