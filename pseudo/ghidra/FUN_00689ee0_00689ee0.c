// FUN_00689ee0  00689ee0

undefined4 * FUN_00689ee0(void)

{
  uint uVar1;
  undefined4 *extraout_var;
  undefined4 *puVar2;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 *local_2c;
  undefined1 *local_24;
  undefined1 *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006adf08;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006077f0(uVar1);
  local_8 = 0;
  *extraout_var = IniFile::vftable;
  local_1c = &local_2f;
  local_24 = &local_2e;
  local_2c = &local_2d;
  puVar2 = extraout_var;
  FUN_0068d000(uVar1,extraout_var,extraout_var + 0x84);
  puVar2[0x82] = 0;
  *(undefined1 *)(puVar2 + 0x83) = 0;
  ExceptionList = local_10;
  return puVar2;
}

