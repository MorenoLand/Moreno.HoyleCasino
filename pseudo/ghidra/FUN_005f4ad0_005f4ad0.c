// FUN_005f4ad0  005f4ad0

void __fastcall FUN_005f4ad0(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9f0b;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciFeature::vftable;
  local_8 = 0;
  if (param_1[10] == 0) {
    FUN_0060c890(param_1);
  }
  else if (param_1[1] != 0) {
    FUN_005f8ce0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_005e9e40(uVar1);
  ExceptionList = local_10;
  return;
}

