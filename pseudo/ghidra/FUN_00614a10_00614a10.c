// FUN_00614a10  00614a10

void __fastcall FUN_00614a10(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ab1b2;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciScrollBox::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x13] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  if ((undefined4 *)param_1[0x14] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  if ((undefined4 *)param_1[0x15] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x15])(1);
  }
  if ((undefined4 *)param_1[0x16] == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)**(undefined4 **)param_1[0x16])(1);
  }
  local_8 = 0xffffffff;
  FUN_005f4ad0(uVar1,uVar5,uVar4,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

