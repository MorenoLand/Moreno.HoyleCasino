// FUN_005f6c70  005f6c70

void __fastcall FUN_005f6c70(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006a9f98;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = FourSidedRect::vftable;
  local_8 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (param_1[local_14 + 0x12] != 0) {
      if ((undefined4 *)param_1[local_14 + 0x12] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[local_14 + 0x12])(1);
      }
      param_1[local_14 + 0x12] = 0;
    }
  }
  local_8 = 0xffffffff;
  FUN_005f4ad0(uVar1);
  ExceptionList = local_10;
  return;
}

