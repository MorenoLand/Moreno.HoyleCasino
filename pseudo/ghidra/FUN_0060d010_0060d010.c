// FUN_0060d010  0060d010

void __fastcall FUN_0060d010(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006aadfb;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = Window::vftable;
  local_8 = 0;
  if (*(char *)(param_1 + 0x25) != '\0') {
    joyReleaseCapture(0);
    joyReleaseCapture(1);
    operator_delete__(DAT_015e55d8);
    operator_delete__(DAT_015e55dc);
  }
  SetWindowLongA((HWND)param_1[0x23],0,0);
  WinHelpA((HWND)param_1[0x23],&DAT_007952c4,2,0);
  DAT_015e55d2 = 1;
  FUN_0060e300(uVar1);
  DAT_015e55d2 = 0;
  if (param_1[0x30] != 0) {
    DestroyMenu((HMENU)param_1[0x30]);
  }
  operator_delete__((void *)param_1[0x2f]);
  local_8 = 0xffffffff;
  FUN_006132a0();
  ExceptionList = local_10;
  return;
}

