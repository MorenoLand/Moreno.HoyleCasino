// FUN_00518980  00518980

void __fastcall FUN_00518980(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a3c68;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ViewGroup::vftable;
  local_8 = 0;
  if (param_1[0x6f] != 0) {
    if ((undefined4 *)param_1[0x6f] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x6f])(1,uVar1);
    }
    param_1[0x6f] = 0;
  }
  if (param_1[0x70] != 0) {
    if ((undefined4 *)param_1[0x70] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x70])(1);
    }
    param_1[0x70] = 0;
  }
  if (param_1[0x72] != 0) {
    if ((undefined4 *)param_1[0x72] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x72])(1);
    }
    param_1[0x72] = 0;
  }
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

