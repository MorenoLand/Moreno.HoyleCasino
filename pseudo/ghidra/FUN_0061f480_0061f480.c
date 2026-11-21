// FUN_0061f480  0061f480

void __fastcall FUN_0061f480(undefined4 *param_1)

{
  uint uVar1;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab39b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = TEX::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < (int)param_1[0xc3]; local_14 = local_14 + 1) {
    for (local_1c = 0; local_1c < *(int *)(param_1[0xc4] + local_14 * 8); local_1c = local_1c + 1) {
      operator_delete(*(void **)(*(int *)(param_1[0xc4] + 4 + local_14 * 8) + 0x10 + local_1c * 0x18
                                ));
      for (local_18 = 0;
          local_18 < *(int *)(*(int *)(param_1[0xc4] + 4 + local_14 * 8) + 4 + local_1c * 0x18);
          local_18 = local_18 + 1) {
        operator_delete(*(void **)(*(int *)(*(int *)(param_1[0xc4] + 4 + local_14 * 8) + 0x14 +
                                           local_1c * 0x18) + local_18 * 4));
      }
      operator_delete(*(void **)(*(int *)(param_1[0xc4] + 4 + local_14 * 8) + 0x14 + local_1c * 0x18
                                ));
    }
    operator_delete(*(void **)(param_1[0xc4] + 4 + local_14 * 8));
  }
  operator_delete((void *)param_1[0xc4]);
  if (param_1[199] != 0) {
    operator_delete((void *)param_1[199]);
  }
  param_1[199] = 0;
  local_8 = 0xffffffff;
  FUN_0062aef0(uVar1);
  ExceptionList = local_10;
  return;
}

