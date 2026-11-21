// FUN_005f2eb0  005f2eb0

void __fastcall FUN_005f2eb0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006a9e96;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciShell::vftable;
  local_8 = 1;
  FUN_005f3c80(0xffffffff);
  if ((undefined4 *)param_1[5] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[5])(1,uVar1);
  }
  FUN_005f3de0(0);
  DAT_015e55e8 = 0;
  local_8 = local_8 & 0xffffff00;
  FUN_0060c6a0(uVar1,uVar2);
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

