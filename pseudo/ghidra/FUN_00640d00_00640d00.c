// FUN_00640d00  00640d00

undefined4 * __thiscall
FUN_00640d00(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            char *param_5)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006abcf9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0065ba70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = HumanSettingsDialog::vftable;
  FUN_005f83d0(0x30d4f2,0);
  param_1[0x72] = param_2;
  *(undefined1 *)(param_1 + 0x73) = param_3;
  *(undefined1 *)((int)param_1 + 0x1cd) = param_4;
  strcpy((char *)((int)param_1 + 0x1ce),param_5);
  ExceptionList = local_10;
  return param_1;
}

