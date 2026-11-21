// FUN_00447c70  00447c70

void __fastcall FUN_00447c70(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ec44;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004474b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x50) == 0) {
    pvVar1 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_004490c0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50) = local_20;
    (**(code **)(**(int **)(param_1 + 0x50) + 0x3c))();
    FUN_005f7340(0,0xaa);
  }
  FUN_005f85d0();
  FUN_005f2b20(0x310ab3,1);
  FUN_005f2b20(0x310ab4,1);
  ExceptionList = local_10;
  return;
}

