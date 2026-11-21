// FUN_00575f00  00575f00

void __thiscall FUN_00575f00(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a63b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
    FUN_005f5d50(0);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
    if (*(int *)(param_1 + 0x74) + 1 < param_2) {
      if (*(int *)(param_1 + 0x74) == 0) {
        (**(code **)(**(int **)(param_1 + 0x28) + 0xb0))(0x15);
      }
      pvVar1 = operator_new(0x20);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00600f30(param_2 + 0x14,0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_20);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x28) + 0xb0))(param_2 + 0x14);
    }
  }
  ExceptionList = local_10;
  return;
}

