// FUN_0052fad0  0052fad0

void __fastcall FUN_0052fad0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4707;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SpinReelsScript::vftable;
  local_8 = 0;
  param_1[0xb] = 0;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if ((param_1[local_14 + 8] != 0) && ((undefined4 *)param_1[local_14 + 8] != (undefined4 *)0x0))
    {
      (*(code *)**(undefined4 **)param_1[local_14 + 8])(1);
    }
    param_1[local_14 + 8] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005fc150(uVar1);
  ExceptionList = local_10;
  return;
}

