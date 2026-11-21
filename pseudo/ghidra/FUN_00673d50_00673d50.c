// FUN_00673d50  00673d50

void __fastcall FUN_00673d50(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad391;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = BitmapFeature::vftable;
  local_8 = 0;
  if ((param_1[0x12] != 0) && ((undefined4 *)param_1[0x12] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x12])(1,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_005f4ad0();
  ExceptionList = local_10;
  return;
}

