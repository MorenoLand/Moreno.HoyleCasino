// FUN_0062ff50  0062ff50

int FUN_0062ff50(undefined4 param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int local_c;
  
  if (DAT_0162ee80 == (int *)0x0) {
    if ((DAT_007960d8 == 0) || (*(int *)(DAT_007960d8 + 0x10) == 0)) {
      local_c = MessageBoxA((HWND)0x0,param_2,param_3,param_4);
    }
    else {
      iVar1 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                              &Window::RTTI_Type_Descriptor,0);
      local_c = MessageBoxA(*(HWND *)(iVar1 + 0x8c),param_2,param_3,param_4);
    }
  }
  else {
    piVar2 = (int *)(**(code **)(*DAT_0162ee80 + 0x58))();
    (**(code **)(*piVar2 + 0x40))(param_3,param_2,param_4,param_5);
    local_c = piVar2[0x70];
    (**(code **)(*DAT_0162ee80 + 0x5c))(piVar2);
  }
  return local_c;
}

