// FUN_005ea2e0  005ea2e0

bool __fastcall FUN_005ea2e0(undefined4 param_1)

{
  int iVar1;
  HWND pHVar2;
  bool bVar3;
  
  iVar1 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                          &Window::RTTI_Type_Descriptor,0,param_1);
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    pHVar2 = GetForegroundWindow();
    bVar3 = pHVar2 == *(HWND *)(iVar1 + 0x8c);
  }
  return bVar3;
}

