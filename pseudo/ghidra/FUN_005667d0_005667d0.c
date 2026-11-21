// FUN_005667d0  005667d0

void __fastcall FUN_005667d0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5b6e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pvVar2 = operator_new(0x178);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_005eaaf0(uVar1);
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_30;
  FUN_005eae80(0x31225b,0,0,0x70a,0xffffffff);
  (**(code **)(**(int **)(param_1 + 4) + 0xb0))(0);
  pvVar2 = operator_new(0x178);
  local_8 = 1;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_005eaaf0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = local_34;
  FUN_005eae80(0x31225c,0x9f,0x120,0x70b,0xffffffff);
  (**(code **)(**(int **)(param_1 + 8) + 0xb0))(0);
  pvVar2 = operator_new(0x40);
  local_8 = 2;
  if (pvVar2 == (void *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_005655d0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = local_38;
  FUN_005656f0();
  FUN_00565a50(5);
  FUN_005664c0(0);
  ExceptionList = local_10;
  return;
}

