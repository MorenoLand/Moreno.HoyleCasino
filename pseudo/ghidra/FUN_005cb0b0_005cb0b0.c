// FUN_005cb0b0  005cb0b0

void __fastcall FUN_005cb0b0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8a8c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = ClearCurrentBetButton::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x77] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x77])(1,uVar1);
  }
  local_8 = 0xffffffff;
  FUN_00601ba0(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

