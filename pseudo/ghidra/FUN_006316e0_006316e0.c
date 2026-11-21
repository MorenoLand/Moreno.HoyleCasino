// FUN_006316e0  006316e0

/* WARNING: Removing unreachable block (ram,0x0063175a) */
/* WARNING: Removing unreachable block (ram,0x0063177a) */

undefined4 * __thiscall FUN_006316e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab8de;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f2da0(param_2,param_3);
  local_8 = 0;
  *param_1 = Shell::vftable;
  FUN_00667b90(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006665b0();
  param_1[0x16] = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    param_1[local_14 + 0x19] = 0xffffffff;
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  ExceptionList = local_10;
  return param_1;
}

