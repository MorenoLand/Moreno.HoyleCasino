// FUN_005c8a00  005c8a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_005c8a00(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8997;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_00793610 & 1) == 0) {
    DAT_00793610 = DAT_00793610 | 1;
    local_8 = 0;
    _DAT_0075c984 =
         (**(code **)(*DAT_007947e0 + 0x23c))(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_0075c988 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
  }
  if (param_2 == 0x3158d6) {
    puVar2 = &DAT_0075c980;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  ExceptionList = local_10;
  return puVar2;
}

