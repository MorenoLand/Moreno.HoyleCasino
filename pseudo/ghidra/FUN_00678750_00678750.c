// FUN_00678750  00678750

void __fastcall FUN_00678750(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad78b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = HighScoresAttractModeScript::vftable;
  local_8 = 0;
  FUN_0064fa40(uVar1);
  local_8 = 0xffffffff;
  FUN_005fc150();
  ExceptionList = local_10;
  return;
}

