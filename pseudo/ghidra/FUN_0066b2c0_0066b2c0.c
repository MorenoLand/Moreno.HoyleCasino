// FUN_0066b2c0  0066b2c0

void __fastcall FUN_0066b2c0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006acd8b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = IntroScreenRoom::vftable;
  local_8 = 0;
  if (param_1[0x18] != 0) {
    FUN_005fb9e0(param_1[0x18],0xffffffff);
  }
  param_1[0x18] = 0;
  local_8 = 0xffffffff;
  FUN_0064cc80(uVar1);
  ExceptionList = local_10;
  return;
}

