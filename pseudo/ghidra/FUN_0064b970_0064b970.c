// FUN_0064b970  0064b970

void __fastcall FUN_0064b970(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abf78;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = PlaqueTag::vftable;
  local_8 = 0;
  if (param_1[0x5f] != 0) {
    if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x5f])(1,uVar1);
    }
    param_1[0x5f] = 0;
  }
  if (param_1[0x60] != 0) {
    if ((undefined4 *)param_1[0x60] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x60])(1);
    }
    param_1[0x60] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005eac00();
  ExceptionList = local_10;
  return;
}

