// FUN_005ea220  005ea220

bool FUN_005ea220(LPCSTR param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  HINSTANCE pHVar4;
  HWND local_c;
  
  local_c = (HWND)0x0;
  piVar2 = (int *)__RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,
                                  &VWindow::RTTI_Type_Descriptor,&Window::RTTI_Type_Descriptor,0);
  cVar1 = (**(code **)(*piVar2 + 0x30))();
  if (cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x24))(0);
  }
  iVar3 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                          &Window::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    local_c = *(HWND *)(iVar3 + 0x8c);
  }
  pHVar4 = ShellExecuteA(local_c,"open",param_1,(LPCSTR)0x0,".",1);
  return 0x20 < (int)pHVar4;
}

