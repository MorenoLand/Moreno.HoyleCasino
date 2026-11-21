// FUN_005c6ed0  005c6ed0

void __fastcall FUN_005c6ed0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a888c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MLVSlotDisplay_Jewelry::vftable;
  local_8 = 1;
  if (param_1[0x14] != 0) {
    FUN_006110a0(param_1[0x14] + 0x5c,0,uVar1);
  }
  FUN_005dd400(0);
  if ((param_1[0x1b] != 0) && ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_005be450();
  local_8 = 0xffffffff;
  FUN_005c0b40();
  ExceptionList = local_10;
  return;
}

