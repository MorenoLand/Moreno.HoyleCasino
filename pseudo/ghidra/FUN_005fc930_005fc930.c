// FUN_005fc930  005fc930

void __fastcall FUN_005fc930(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aa5ee;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciMenuItem::vftable;
  local_8 = 0;
  param_1[0x7c] = 0;
  if (param_1[0x7d] != 0) {
    (**(code **)(*(int *)param_1[0x7d] + 0x70))(uVar1);
    if ((undefined4 *)param_1[0x7d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7d])(1);
    }
    param_1[0x7d] = 0;
  }
  if (param_1[0x7e] != 0) {
    (**(code **)(*(int *)param_1[0x7e] + 0x70))();
    if ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x7e])(1);
    }
    param_1[0x7e] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*(int *)param_1[0x80] + 0x70))();
    if ((undefined4 *)param_1[0x80] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x80])(1);
    }
    param_1[0x80] = 0;
  }
  local_8 = 0xffffffff;
  FUN_00603170();
  ExceptionList = local_10;
  return;
}

