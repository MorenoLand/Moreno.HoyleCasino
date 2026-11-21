// FUN_0063da40  0063da40

void __thiscall FUN_0063da40(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abc82;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x1e8) == 0) {
    pvVar2 = operator_new(0x56c);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_0063fe70(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + param_2 * 4) + 8)
                             );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e8) = local_24;
    (**(code **)(**(int **)(param_1 + 0x1e8) + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0(uVar1);
  ExceptionList = local_10;
  return;
}

