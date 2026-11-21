// FUN_005635f0  005635f0

void __fastcall FUN_005635f0(undefined4 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a5a38;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = VPMultiExtraRolloverDisplay::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 2])(1);
    }
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    FUN_00566720();
    operator_delete(pvVar2);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1,pvVar2);
  ExceptionList = local_10;
  return;
}

