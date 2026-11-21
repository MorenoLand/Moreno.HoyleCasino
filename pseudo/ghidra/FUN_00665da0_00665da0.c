// FUN_00665da0  00665da0

undefined4 FUN_00665da0(void)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  undefined4 local_c;
  
  local_c = 0;
  pHVar1 = GetDesktopWindow();
  hdc = GetDC(pHVar1);
  iVar2 = GetDeviceCaps(hdc,0xc);
  DAT_007950b5 = (char)iVar2;
  iVar2 = GetDeviceCaps(hdc,8);
  if (0x27f < iVar2) {
    iVar2 = GetDeviceCaps(hdc,10);
    if (0x1df < iVar2) goto LAB_00665dfb;
  }
  local_c = 2;
LAB_00665dfb:
  pHVar1 = GetDesktopWindow();
  ReleaseDC(pHVar1,hdc);
  return local_c;
}

