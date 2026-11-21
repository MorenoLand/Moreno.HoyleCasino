// FUN_00605c60  00605c60

void __fastcall FUN_00605c60(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aab8b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciDropListButton::vftable;
  local_8 = 0;
  FUN_005f25d0(param_1[0x7b]);
  local_8 = 0xffffffff;
  FUN_005fc740(uVar1);
  ExceptionList = local_10;
  return;
}

