// FUN_00582ba0  00582ba0

void __fastcall FUN_00582ba0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a6b0e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = KenoQuickPlayDialog::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x71] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x71])(1,uVar1);
  }
  param_1[0x71] = 0;
  if ((undefined4 *)param_1[0x72] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x72])(1);
  }
  param_1[0x72] = 0;
  if ((undefined4 *)param_1[0x73] == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)**(undefined4 **)param_1[0x73])(1);
  }
  param_1[0x73] = 0;
  if (DAT_00793584 != 0) {
    FUN_0058af00(uVar1,uVar4,uVar3,uVar2);
  }
  local_8 = 0xffffffff;
  FUN_005f7260();
  ExceptionList = local_10;
  return;
}

