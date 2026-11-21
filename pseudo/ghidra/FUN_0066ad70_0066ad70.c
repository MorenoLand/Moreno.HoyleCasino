// FUN_0066ad70  0066ad70

void __fastcall FUN_0066ad70(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006acd1b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CreditsRoom::vftable;
  local_8 = 0;
  FUN_005f38b0(0);
  local_8 = 0xffffffff;
  FUN_0064cc80(uVar1);
  ExceptionList = local_10;
  return;
}

