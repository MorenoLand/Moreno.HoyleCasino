// FUN_0066f440  0066f440

void __fastcall FUN_0066f440(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad03e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = HighScoresTag::vftable;
  local_8 = 0;
  if (param_1[0x8e] != 0) {
    if ((undefined4 *)param_1[0x8e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x8e])(1,uVar1);
    }
    param_1[0x8e] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005ec760();
  ExceptionList = local_10;
  return;
}

