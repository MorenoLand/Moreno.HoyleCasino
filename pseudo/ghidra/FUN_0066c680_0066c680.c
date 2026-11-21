// FUN_0066c680  0066c680

void __fastcall FUN_0066c680(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aceb7;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x74) == 0) {
    pvVar2 = operator_new(0x180);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0066cec0();
    }
    *(undefined4 *)(param_1 + 0x74) = local_20;
  }
  local_8 = 0xffffffff;
  FUN_005eae80(0x10cccd,0,0,400,0xffffffff);
  uVar3 = FUN_005eb240(uVar1);
  (**(code **)(**(int **)(param_1 + 0x74) + 0xb0))(uVar3);
  (**(code **)(**(int **)(param_1 + 0x74) + 0x74))();
  ExceptionList = local_10;
  return;
}

