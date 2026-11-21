// FUN_0065dcc0  0065dcc0

void __fastcall FUN_0065dcc0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ac8bb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = LoginDialog::vftable;
  local_8 = 0;
  if ((param_1[0x72] != 0) && ((undefined4 *)param_1[0x72] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)param_1[0x72])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x74] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x74])(1);
  }
  if ((undefined4 *)param_1[0x73] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x73])(1);
  }
  local_8 = 0xffffffff;
  FUN_0065bae0(uVar1,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

