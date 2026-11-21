// FUN_00577150  00577150

undefined4 * __thiscall FUN_00577150(undefined4 *param_1,short param_2)

{
  void *pvVar1;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SultanCounter::vftable;
  if (param_2 < 1) {
    *(undefined2 *)(param_1 + 0x61) = 1;
  }
  else {
    *(short *)(param_1 + 0x61) = param_2;
  }
  pvVar1 = operator_new(-(uint)((int)((ulonglong)(uint)(int)*(short *)(param_1 + 0x61) * 4 >> 0x20)
                               != 0) | (uint)((ulonglong)(uint)(int)*(short *)(param_1 + 0x61) * 4))
  ;
  param_1[99] = pvVar1;
  for (local_14 = 0; local_14 < *(short *)(param_1 + 0x61); local_14 = local_14 + 1) {
    *(undefined4 *)(param_1[99] + local_14 * 4) = 0;
  }
  ExceptionList = local_10;
  return param_1;
}

