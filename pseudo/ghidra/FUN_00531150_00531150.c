// FUN_00531150  00531150

undefined4 * __thiscall
FUN_00531150(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4789;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f5bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = SlotMachineTextScroller::vftable;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  *(undefined1 *)(param_1 + 0x61) = 0;
  pvVar1 = operator_new(0x1d0);
  local_8._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005ec5a0();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x62] = local_20;
  FUN_005ec8f0(&PTR_006b27f8,0x35,0x80,param_1[7] - param_1[5],param_1[6] + 0x1e,param_1[5],param_6,
               0x30,0xffffffff);
  param_1[0x66] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x67] = 0;
  param_1[0x5e] = 0x14;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[99] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  FUN_005f5cc0();
  FUN_005315f0();
  ExceptionList = local_10;
  return param_1;
}

