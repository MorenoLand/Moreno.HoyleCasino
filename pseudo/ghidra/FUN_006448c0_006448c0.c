// FUN_006448c0  006448c0

void __fastcall FUN_006448c0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abd4b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = StockDisplay::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 0x400; local_14 = local_14 + 1) {
    if ((param_1[local_14 + 0x65] != 0) &&
       ((undefined4 *)param_1[local_14 + 0x65] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x65])(1);
    }
    if ((param_1[local_14 + 0x465] != 0) &&
       ((undefined4 *)param_1[local_14 + 0x465] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[local_14 + 0x465])(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_005f5fa0(uVar1);
  ExceptionList = local_10;
  return;
}

