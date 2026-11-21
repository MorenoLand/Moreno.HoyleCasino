// FUN_0046a350  0046a350

void __fastcall FUN_0046a350(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0069f6cf;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = DiscardDialog::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x78] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x78])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x79] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x79])(1);
  }
  if ((undefined4 *)param_1[0x7a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7a])(1);
  }
  if ((undefined4 *)param_1[0x7b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7b])(1);
  }
  if ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7c])(1);
  }
  if ((undefined4 *)param_1[0x7d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7d])(1);
  }
  if ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7e])(1);
  }
  if ((undefined4 *)param_1[0x7f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7f])(1);
  }
  if ((undefined4 *)param_1[0x80] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x80])(1);
  }
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x81])(1);
  }
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x82])(1);
  }
  if ((undefined4 *)param_1[0x83] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x83])(1);
  }
  if ((undefined4 *)param_1[0x84] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x84])(1);
  }
  if ((undefined4 *)param_1[0x85] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x85])(1);
  }
  if ((undefined4 *)param_1[0x86] == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)**(undefined4 **)param_1[0x86])(1);
  }
  local_8 = 0xffffffff;
  FUN_00518980(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

