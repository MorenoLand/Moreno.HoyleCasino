// FUN_0040db70  0040db70

void __fastcall FUN_0040db70(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069da55;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x38) == 0) {
    pvVar2 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00411d70();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = local_20;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
    FUN_005f7320(0x17c,5);
  }
  FUN_00411e70(uVar1);
  if (*(char *)(DAT_00790328 + 7) != '\0') {
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

