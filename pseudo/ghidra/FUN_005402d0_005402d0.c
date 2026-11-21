// FUN_005402d0  005402d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_005402d0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4df4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_007933fc & 1) == 0) {
    DAT_007933fc = DAT_007933fc | 1;
    local_8 = 0;
    _DAT_0073a940 =
         (**(code **)(*DAT_007947e0 + 0x23c))(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_0073a944 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
  }
  if (param_2 == 0x310e99) {
    puVar2 = &DAT_0073a93c;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  ExceptionList = local_10;
  return puVar2;
}

