// FUN_005238c0  005238c0

void __fastcall FUN_005238c0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a4065;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = RouletteBetArea::vftable;
  local_8 = 0;
  if ((undefined4 *)param_1[0x2b8] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x2b8])(1,uVar1);
  }
  param_1[0x2b8] = 0;
  local_8 = 0xffffffff;
  FUN_005cc230(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

