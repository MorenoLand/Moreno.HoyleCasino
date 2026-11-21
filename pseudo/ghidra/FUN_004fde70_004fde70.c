// FUN_004fde70  004fde70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_004fde70(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a2904;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_00791ec4 & 1) == 0) {
    DAT_00791ec4 = DAT_00791ec4 | 1;
    local_8 = 0;
    _DAT_007205c4 =
         (**(code **)(*DAT_007947e0 + 0x23c))(DAT_00781870 ^ (uint)&stack0xfffffffc,param_1);
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_007205c8 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
    _DAT_007205cc = 0x30e7a1;
    _DAT_007205d0 = (**(code **)(*DAT_007947e0 + 0x23c))();
    uVar1 = (**(code **)(*DAT_007947e0 + 0x23c))();
    _DAT_007205d4 = (**(code **)(*DAT_007947e0 + 0x244))(uVar1);
  }
  if (param_2 == 0x30e79d) {
    puVar2 = &DAT_007205c0;
  }
  else if (param_2 == 0x30e7a1) {
    puVar2 = &DAT_007205cc;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  ExceptionList = local_10;
  return puVar2;
}

