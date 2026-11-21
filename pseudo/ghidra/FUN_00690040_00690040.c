// FUN_00690040  00690040

undefined4 __thiscall FUN_00690040(int param_1,float *param_2,float *param_3)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  iVar3 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x58);
  iVar4 = GetDeviceCaps(*(HDC *)(param_1 + 0x18),0x5a);
  if (param_2 != (float *)0x0) {
    *param_2 = (float)iVar3 / (float)iVar1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)iVar4 / (float)iVar2;
  }
  return 1;
}

