// FUN_004f9cc0  004f9cc0

void __fastcall FUN_004f9cc0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a271b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PokerRoom::vftable;
  local_8 = 0;
  uVar2 = FUN_00520d60(uVar1);
  FUN_005209d0(uVar2);
  FUN_00520510(0);
  FUN_004fc790();
  FUN_005f38b0(0);
  FUN_004fd030();
  DAT_00791eb8 = 0;
  local_8 = 0xffffffff;
  FUN_005d7bd0();
  ExceptionList = local_10;
  return;
}

