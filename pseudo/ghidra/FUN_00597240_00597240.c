// FUN_00597240  00597240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00597240(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a73de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_007935ac & 1) == 0) {
    DAT_007935ac = DAT_007935ac | 1;
    local_8 = 0;
    _DAT_0074f7b4 =
         (**(code **)(*DAT_007947e0 + 0x23c))(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_0074f7b8 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
  }
  if (param_2 == 0x314d19) {
    puVar2 = &DAT_0074f7b0;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  ExceptionList = local_10;
  return puVar2;
}

