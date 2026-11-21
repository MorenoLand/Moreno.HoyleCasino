// FUN_005ea400  005ea400

void FUN_005ea400(LONG *param_1)

{
  tagPOINT local_10;
  int local_8;
  
  local_8 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                            &Window::RTTI_Type_Descriptor,0);
  if (local_8 != 0) {
    local_10.x = *param_1;
    local_10.y = param_1[1];
    ScreenToClient(*(HWND *)(local_8 + 0x8c),&local_10);
    *param_1 = local_10.x;
    param_1[1] = local_10.y;
  }
  return;
}

