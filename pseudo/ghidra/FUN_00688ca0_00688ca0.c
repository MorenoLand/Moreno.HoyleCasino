// FUN_00688ca0  00688ca0

void __fastcall FUN_00688ca0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006addf6;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ResourceIniFile::vftable;
  local_8 = 0;
  if ((param_1[0x82] != 0) && ((undefined4 *)param_1[0x82] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x82])(1,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_00607870();
  ExceptionList = local_10;
  return;
}

