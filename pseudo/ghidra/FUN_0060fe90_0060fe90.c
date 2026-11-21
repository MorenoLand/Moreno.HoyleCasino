// FUN_0060fe90  0060fe90

void __fastcall FUN_0060fe90(undefined4 *param_1)

{
  uint uVar1;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aaeba;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciOdometerScript::vftable;
  local_8 = 0;
  if (param_1[0xd] != 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      local_1c = param_1[0xd] + 0x1b0;
    }
    else {
      local_1c = param_1[0xd] + 400;
    }
    FUN_006110a0(local_1c,0,uVar1);
  }
  param_1[0xd] = 0;
  local_8 = 0xffffffff;
  FUN_005fc150();
  ExceptionList = local_10;
  return;
}

