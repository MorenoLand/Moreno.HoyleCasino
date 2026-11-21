// FUN_005a8610  005a8610

void __fastcall FUN_005a8610(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a79e1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar2 = operator_new(0x1c4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_005abd70();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30) = local_20;
    (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

