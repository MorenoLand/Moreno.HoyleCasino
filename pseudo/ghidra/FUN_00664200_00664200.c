// FUN_00664200  00664200

void __thiscall FUN_00664200(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006acbd3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 0x1b; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x5c + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x188);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00663e60(param_3);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c + local_14 * 4) = local_24;
    }
    if (param_2 != 0) {
      *(int *)(*(int *)(param_1 + 0x5c + local_14 * 4) + 4) = param_2;
    }
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0x40))(uVar1);
  }
  FUN_00664480(*(undefined4 *)(param_1 + 0xc));
  ExceptionList = local_10;
  return;
}

