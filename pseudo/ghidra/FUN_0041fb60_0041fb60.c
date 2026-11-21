// FUN_0041fb60  0041fb60

void __fastcall FUN_0041fb60(int param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069dfe3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0041f1b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x40) == 0) {
    pvVar1 = operator_new(0x1bc);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_00421ed0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x40) = local_20;
    (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))();
    FUN_005f7340(5,0xb4);
  }
  FUN_005f85d0();
  FUN_005f2b20(0x3106cb,1);
  FUN_005f2b20(0x3106cc,1);
  ExceptionList = local_10;
  return;
}

