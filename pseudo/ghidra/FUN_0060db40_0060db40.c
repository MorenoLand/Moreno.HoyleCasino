// FUN_0060db40  0060db40

void __fastcall FUN_0060db40(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 == '\0') {
    ShowWindow((HWND)param_1[0x23],6);
  }
  else {
    piVar2 = (int *)__RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,
                                    &VWindow::RTTI_Type_Descriptor,&Window::RTTI_Type_Descriptor,0);
    cVar1 = (**(code **)(*piVar2 + 0x30))();
    if (cVar1 == '\0') {
      cVar1 = FUN_0060dc00(piVar2[0x23]);
      if (cVar1 != '\0') {
        FUN_0060dc50(piVar2[0x23]);
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    else {
      (**(code **)(*piVar2 + 0x24))(1);
    }
  }
  return;
}

