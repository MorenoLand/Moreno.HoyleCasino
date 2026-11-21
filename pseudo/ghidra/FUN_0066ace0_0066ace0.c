// FUN_0066ace0  0066ace0

undefined4 * __fastcall FUN_0066ace0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006accf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064cbe0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = CreditsRoom::vftable;
  uVar1 = FUN_00630f40("SID_SHELL_CREDITS");
  FUN_005f38b0(uVar1);
  uVar1 = (**(code **)(*DAT_0162ee84 + 0x2d8))();
  FUN_005f1ad0(uVar1);
  ExceptionList = local_10;
  return param_1;
}

