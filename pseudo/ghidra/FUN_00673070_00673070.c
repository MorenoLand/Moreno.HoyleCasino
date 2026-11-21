// FUN_00673070  00673070

void __fastcall FUN_00673070(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ad2eb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = SaveRestoreDialog::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x6f] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x6f])(1,uVar1);
  }
  if ((undefined4 *)param_1[0x70] == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)**(undefined4 **)param_1[0x70])(1);
  }
  local_8 = 0xffffffff;
  FUN_005f7260(uVar1,uVar3,uVar2);
  ExceptionList = local_10;
  return;
}

