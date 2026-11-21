// FUN_005491f0  005491f0

void __fastcall FUN_005491f0(int param_1)

{
  void *pvVar1;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a52e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00548b20(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_00545010();
  if (0x1d < *(int *)(param_1 + 0x14)) {
    FUN_00548960();
  }
  FUN_00548ab0();
  pvVar1 = operator_new(0x24);
  local_8 = 0;
  if (pvVar1 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_00546a40();
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_24);
  ExceptionList = local_10;
  return;
}

