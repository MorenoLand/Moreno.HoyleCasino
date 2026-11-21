// FUN_00585f20  00585f20

undefined4 * __fastcall FUN_00585f20(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6ce8;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f71f0(1,0);
  local_8 = 0;
  *param_1 = KenoTicketDialog::vftable;
  FUN_005f83d0(0x30dfb8,0);
  cVar1 = FUN_00635cb0(8);
  if (cVar1 != '\0') {
    FUN_00583940(uVar2);
  }
  param_1[0xedb] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xedd] = 0;
  param_1[0xee1] = 0;
  param_1[0xee2] = 0;
  param_1[0xee3] = 0;
  param_1[0xee4] = 0;
  param_1[0xeda] = 0;
  param_1[200] = 0;
  param_1[0xee5] = 0;
  param_1[0xedc] = 0;
  param_1[0xee6] = 0;
  param_1[0xee7] = 0;
  param_1[0xee8] = 0;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    param_1[local_14 + 0xc6] = 0;
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    param_1[local_14 + 0xbf] = 0;
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
  }
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    param_1[local_14 + 0xede] = 0;
  }
  for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
    param_1[local_14 + 0x6f] = 0;
  }
  param_1[0xc9] = 0;
  param_1[0xf03] = 0;
  ExceptionList = local_10;
  return param_1;
}

