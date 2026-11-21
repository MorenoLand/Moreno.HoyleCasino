// FUN_00467130  00467130

void __fastcall FUN_00467130(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069f58a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = MakePlayDialog::vftable;
  local_8 = 0;
  if ((param_1[0x78] != 0) && ((undefined4 *)param_1[0x78] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x78])(1,uVar1);
  }
  if ((param_1[0x79] != 0) && ((undefined4 *)param_1[0x79] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x79])(1);
  }
  if ((param_1[0x7a] != 0) && ((undefined4 *)param_1[0x7a] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x7a])(1);
  }
  if ((param_1[0x7f] != 0) && ((undefined4 *)param_1[0x7f] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x7f])(1);
  }
  if ((param_1[0x80] != 0) && ((undefined4 *)param_1[0x80] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x80])(1);
  }
  if ((param_1[0x81] != 0) && ((undefined4 *)param_1[0x81] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x81])(1);
  }
  if ((param_1[0x7e] != 0) && ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x7e])(1);
  }
  if ((param_1[0x7b] != 0) && ((undefined4 *)param_1[0x7b] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x7b])(1);
  }
  if ((param_1[0x7c] != 0) && ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x7c])(1);
  }
  local_8 = 0xffffffff;
  FUN_00518980();
  ExceptionList = local_10;
  return;
}

