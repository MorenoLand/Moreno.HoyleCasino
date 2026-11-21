// FUN_0061e400  0061e400

void __fastcall FUN_0061e400(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab34e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Resource::vftable;
  local_8 = 0;
  operator_delete((void *)param_1[0x56]);
  if ((param_1[0x4f] != 0) && (*(char *)(param_1 + 0x55) != '\0')) {
    fclose((FILE *)param_1[0x4f]);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((param_1[local_14 * 2 + 3] == 0) || (*(char *)(param_1 + local_14 * 2 + 2) == '\0')) {
      FUN_0061f2d0(local_14);
    }
    else {
      FUN_0061f320(local_14);
    }
  }
  local_8 = 0xffffffff;
  FUN_0062aef0(uVar1);
  ExceptionList = local_10;
  return;
}

