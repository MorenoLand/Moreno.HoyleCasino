// FUN_00555510  00555510

undefined4 * __thiscall FUN_00555510(undefined4 *param_1,undefined1 param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a565e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00643ce0(0,0);
  local_8 = 0;
  *param_1 = VideoPokerCardDisplay::vftable;
  pvVar2 = operator_new(0x178);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (pvVar2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005eaaf0(uVar1);
  }
  param_1[0x69] = local_20;
  *(undefined1 *)(param_1 + 0x6a) = param_2;
  *(undefined1 *)((int)param_1 + 10) = 0;
  ExceptionList = local_10;
  return param_1;
}

