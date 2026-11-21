// FUN_005e85d0  005e85d0

void __fastcall FUN_005e85d0(int *param_1)

{
  uint uVar1;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9a31;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 100) = 1;
  FUN_005f5cc0(uVar1);
  FUN_005eae80(0x30f0ed,0,0,2000,0xffffffff);
  (**(code **)(*param_1 + 0xb0))(0);
  param_1[0x5e] = 3;
  local_20 = operator_new(0x20);
  local_8 = 0;
  if (local_20 == (undefined4 *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_20 = HofAnimationScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005f5df0(local_20);
  ExceptionList = local_10;
  return;
}

