// FUN_005bf3d0  005bf3d0

void __fastcall FUN_005bf3d0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a82fc;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = OneOfNine::vftable;
  local_8 = 1;
  if (param_1[3] != 0) {
    for (local_14 = 100; local_14 < 0xcb; local_14 = local_14 + 1) {
      FUN_006104c0(local_14,param_1[3]);
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_005be450(uVar1,param_1,param_1 + 7);
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

