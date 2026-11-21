// FUN_00543f00  00543f00

void __fastcall FUN_00543f00(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_24;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a4f82;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    pvVar2 = operator_new(0x184);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = FUN_005f5bf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10 + local_14 * 4) = local_24;
    FUN_005eae80(0x3116cf,0,0,400,0xffffffff);
  }
  ExceptionList = local_10;
  return;
}

