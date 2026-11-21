// FUN_00631800  00631800

/* WARNING: Removing unreachable block (ram,0x0063188b) */

void __fastcall FUN_00631800(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006ab917;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Shell::vftable;
  local_8 = 2;
  FUN_00635b10(0xffffffff);
  if (param_1[0x16] != 0) {
    operator_delete((void *)param_1[0x16]);
  }
  for (local_14 = 0; local_14 < 0; local_14 = local_14 + 1) {
  }
  FUN_006048c0(uVar1);
  FUN_006049c0();
  FUN_00604af0();
  DAT_0162ee84 = 0;
  if (param_1[0x23] != 0) {
    operator_delete((void *)param_1[0x23]);
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    operator_delete((void *)param_1[0x24]);
    param_1[0x24] = 0;
  }
  local_8._0_1_ = 1;
  FUN_006665e0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00667bc0();
  local_8 = 0xffffffff;
  FUN_005f2eb0();
  ExceptionList = local_10;
  return;
}

