// FUN_00570ee0  00570ee0

void __fastcall FUN_00570ee0(int param_1)

{
  void *pvVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a602b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5cc0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (*(int *)(param_1 + 0x184) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x184) = local_30;
  }
  FUN_005eaf00(0x16048);
  (**(code **)(**(int **)(param_1 + 0x184) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x184) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x184) + 0x44))(0x1a2,0x35);
  (**(code **)(**(int **)(param_1 + 0x184) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x184) + 0x74))();
  if (*(int *)(param_1 + 0x188) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x188) = local_34;
  }
  FUN_005eaf00(0x16048);
  (**(code **)(**(int **)(param_1 + 0x188) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x188) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x188) + 0x44))(0x1b2,0x35);
  (**(code **)(**(int **)(param_1 + 0x188) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x188) + 0x74))();
  if (*(int *)(param_1 + 0x18c) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 2;
    if (pvVar1 == (void *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18c) = local_38;
  }
  FUN_005eaf00(0x16048);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x44))(0x1bc,0x35);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x18c) + 0x74))();
  ExceptionList = local_10;
  return;
}

