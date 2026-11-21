// FUN_00689750  00689750

undefined4 * __fastcall FUN_00689750(undefined4 *param_1)

{
  MMRESULT MVar1;
  UINT local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ade28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00624e80(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *param_1 = Application::vftable;
  CoInitialize((LPVOID)0x0);
  DAT_01631bb4 = joyGetNumDevs();
  DAT_01631bb8 = operator_new(-(uint)((int)((ulonglong)DAT_01631bb4 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)DAT_01631bb4 * 0x10));
  DAT_01631bbc = operator_new(-(uint)((int)((ulonglong)DAT_01631bb4 * 0x10 >> 0x20) != 0) |
                              (uint)((ulonglong)DAT_01631bb4 * 0x10));
  DAT_01631bc0 = operator_new(DAT_01631bb4);
  for (local_18 = 0; (int)local_18 < (int)DAT_01631bb4; local_18 = local_18 + 1) {
    joyGetPos(local_18,(LPJOYINFO)(local_18 * 0x10 + (int)DAT_01631bb8));
    MVar1 = joyGetPos(local_18,(LPJOYINFO)(local_18 * 0x10 + (int)DAT_01631bbc));
    if (MVar1 == 0) {
      *(undefined1 *)((int)DAT_01631bc0 + local_18) = 1;
    }
    else {
      *(undefined1 *)((int)DAT_01631bc0 + local_18) = 0;
    }
  }
  ExceptionList = local_10;
  return param_1;
}

