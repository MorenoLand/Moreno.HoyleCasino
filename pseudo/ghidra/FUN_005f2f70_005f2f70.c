// FUN_005f2f70  005f2f70

void __fastcall FUN_005f2f70(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9ebc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_005f3e70(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  pvVar2 = operator_new(0x1b4);
  local_8 = 0;
  if (pvVar2 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005f7670(0,0,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = local_24;
  *(undefined4 *)(DAT_007960d8 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1a8);
  DAT_00795fa1 = FUN_00607900("RunFullSpeed",0);
  DAT_00795fa2 = FUN_00607900("ShowFrameRate",0);
  DAT_00795fa4 = FUN_00607900("ShowBuildVersion",0);
  DAT_00795fb0 = FUN_00607900("ShowMousePosition",0);
  DAT_00795fb1 = FUN_00607900("LogSoundNumbers",0);
  DAT_00795fa5 = FUN_00607900("FullScreenRedraw",0);
  DAT_00795fa0 = FUN_00607900("ShowMemoryStats",0);
  DAT_007950b8 = FUN_00607960("DirectDrawRefreshRate",0);
  ExceptionList = local_10;
  return;
}

