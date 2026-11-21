// FUN_00520010  00520010

void __thiscall FUN_00520010(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3e7e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x8c) == 0) {
    pvVar2 = operator_new(0x1c4);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_0051afc0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = local_24;
    *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1bc) = param_2;
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

