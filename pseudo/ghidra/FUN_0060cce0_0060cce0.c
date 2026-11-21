// FUN_0060cce0  0060cce0

void FUN_0060cce0(void)

{
  char cVar1;
  char local_214 [520];
  uint local_c;
  int *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (int *)__RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,
                                   &VWindow::RTTI_Type_Descriptor,&Window::RTTI_Type_Descriptor,0);
  cVar1 = (**(code **)(*local_8 + 0x30))();
  if (cVar1 != '\0') {
    (**(code **)(*local_8 + 0x24))(0);
  }
  strcpy(local_214,&DAT_007952c4);
  FUN_005eaa40(local_214);
  ShellExecuteA((HWND)local_8[0x23],"open",local_214,(LPCSTR)0x0,(LPCSTR)0x0,1);
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

