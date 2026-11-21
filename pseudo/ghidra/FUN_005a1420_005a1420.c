// FUN_005a1420  005a1420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_005a1420(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a783e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_007935d4 & 1) == 0) {
    DAT_007935d4 = DAT_007935d4 | 1;
    local_8 = 0;
    _DAT_00752fc4 =
         (**(code **)(*DAT_007947e0 + 0x23c))(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_00752fc8 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
  }
  if (param_2 == 0x315101) {
    puVar2 = &DAT_00752fc0;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  ExceptionList = local_10;
  return puVar2;
}

