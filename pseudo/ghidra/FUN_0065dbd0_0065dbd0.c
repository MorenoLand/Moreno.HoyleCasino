// FUN_0065dbd0  0065dbd0

undefined4 * __thiscall
FUN_0065dbd0(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac898;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0065ba70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = LoginDialog::vftable;
  FUN_005f83d0(0x30d4d7,0);
  *(undefined1 *)(param_1 + 0x75) = param_2;
  *(undefined1 *)((int)param_1 + 0x1d5) = param_3;
  if (*(char *)(param_1 + 0x75) != '\0') {
    *(undefined1 *)((int)param_1 + 0x1d5) = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1d6) = param_6;
  param_1[0x72] = 0;
  param_1[0x79] = param_4;
  param_1[0x7a] = param_5;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  ExceptionList = local_10;
  return param_1;
}

