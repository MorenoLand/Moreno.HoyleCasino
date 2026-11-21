// FUN_00689b30  00689b30

void __fastcall FUN_00689b30(undefined4 param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (DAT_007960cc == '\0') {
    FUN_006251a0(param_1);
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
    if (DAT_015e55d3 == '\0') {
      FUN_005e9f00(0xf);
    }
  }
  return;
}

