// FUN_005f5fa0  005f5fa0

void __fastcall FUN_005f5fa0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9f68;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciActor::vftable;
  local_8 = 0;
  FUN_005f6050(0);
  local_8 = 0xffffffff;
  FUN_005f5c40(uVar1);
  ExceptionList = local_10;
  return;
}

