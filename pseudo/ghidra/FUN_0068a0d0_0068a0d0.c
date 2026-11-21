// FUN_0068a0d0  0068a0d0

void __fastcall FUN_0068a0d0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006adf6f;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = IniFile::vftable;
  local_8 = 0;
  if (param_1[0x82] != 0) {
    fclose((FILE *)param_1[0x82]);
  }
  FUN_0068c410(uVar1,param_1,param_1 + 0x84);
  local_8 = 0xffffffff;
  FUN_00607870();
  ExceptionList = local_10;
  return;
}

