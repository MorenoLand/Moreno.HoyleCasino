// FUN_0064ab90  0064ab90

void __fastcall FUN_0064ab90(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006abef3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Plaque::vftable;
  local_8 = 0;
  if (param_1[99] != 0) {
    if ((undefined4 *)param_1[99] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[99])(1,uVar1);
    }
    param_1[99] = 0;
  }
  if (param_1[100] != 0) {
    if ((undefined4 *)param_1[100] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[100])(1);
    }
    param_1[100] = 0;
  }
  if (param_1[0x65] != 0) {
    if ((undefined4 *)param_1[0x65] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x65])(1);
    }
    param_1[0x65] = 0;
  }
  FUN_0064b830();
  local_8 = 0xffffffff;
  FUN_005f5c40();
  ExceptionList = local_10;
  return;
}

