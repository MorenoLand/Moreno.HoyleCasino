// FUN_005c2380  005c2380

void __fastcall FUN_005c2380(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a85e1;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MLVSlotDisplay_Scroller::vftable;
  local_8 = 1;
  if (param_1[0x14] != 0) {
    FUN_006110a0(param_1[0x14] + 0x88,0,uVar1);
  }
  FUN_005dd400(0);
  local_8 = local_8 & 0xffffff00;
  FUN_005c4920(uVar1,param_1,param_1 + 0x16);
  local_8 = 0xffffffff;
  FUN_005c0b40();
  ExceptionList = local_10;
  return;
}

