// FUN_005cc230  005cc230

void __fastcall FUN_005cc230(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a8b1b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = BetAreaDisplay::vftable;
  local_8 = 0;
  FUN_005ccd90(uVar1);
  if ((undefined4 *)param_1[0x2b7] == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)param_1[0x2b7])(1);
  }
  local_8 = 0xffffffff;
  FUN_005eac00(uVar1,uVar2);
  ExceptionList = local_10;
  return;
}

