// FUN_00576030  00576030

void __thiscall FUN_00576030(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a63db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xb0))
            (*(undefined4 *)(param_1 + 0x80),DAT_00781870 ^ (uint)&stack0xfffffffc);
  (**(code **)(**(int **)(param_1 + 0x30) + 0xb0))(param_2 + 6);
  (**(code **)(**(int **)(param_1 + 0x28) + 0xb0))((param_2 + -1) * 7 + *(int *)(param_1 + 0x80));
  pvVar1 = operator_new(0x28);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_00601110(0,0,1,0,0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_20);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x30) + 0x74))();
  ExceptionList = local_10;
  return;
}

