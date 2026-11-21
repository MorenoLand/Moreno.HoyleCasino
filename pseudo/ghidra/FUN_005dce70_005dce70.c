// FUN_005dce70  005dce70

void __fastcall FUN_005dce70(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a952c;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = CasinoShell::vftable;
  pvVar1 = DAT_0079506c;
  local_8 = 0;
  if (DAT_0079506c != (void *)0x0) {
    if (DAT_0079506c != (void *)0x0) {
      FUN_005e7470(uVar2);
      operator_delete(pvVar1);
    }
    DAT_0079506c = (void *)0x0;
  }
  local_8 = 0xffffffff;
  FUN_00631800();
  ExceptionList = local_10;
  return;
}

