// FUN_0060cd90  0060cd90

void __thiscall FUN_0060cd90(undefined4 param_1,char param_2)

{
  int iVar1;
  HMENU pHVar2;
  uint uCheck;
  UINT uIDCheckItem;
  
  iVar1 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                          &Window::RTTI_Type_Descriptor,0,param_1);
  if (iVar1 != 0) {
    pHVar2 = GetMenu(*(HWND *)(iVar1 + 0x8c));
    if (pHVar2 != (HMENU)0x0) {
      uCheck = -(uint)(param_2 != '\0') & 8;
      uIDCheckItem = DAT_007960d0;
      pHVar2 = GetMenu(*(HWND *)(iVar1 + 0x8c));
      CheckMenuItem(pHVar2,uIDCheckItem,uCheck);
    }
  }
  return;
}

