// FUN_0056f8e0  0056f8e0

void __fastcall FUN_0056f8e0(int param_1)

{
  void *pvVar1;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5efe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1,DAT_00781870 ^ (uint)&stack0xfffffffc);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pvVar1 = operator_new(0x84);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00571660();
    }
    *(undefined4 *)(param_1 + 4) = local_2c;
  }
  ExceptionList = local_10;
  return;
}

