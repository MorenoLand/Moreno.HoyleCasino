// FUN_005fc150  005fc150

void __fastcall FUN_005fc150(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aa578;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciScript::vftable;
  local_8 = 0;
  FUN_00608980(param_1);
  FUN_005fc420(0);
  if (param_1[4] != 0) {
    (**(code **)(*(int *)param_1[4] + 0x1c))(0,uVar1);
    *(undefined4 *)(param_1[4] + 8) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0x10) = 0;
  }
  param_1[4] = 0;
  param_1[2] = 0;
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

