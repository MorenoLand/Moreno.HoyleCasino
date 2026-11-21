// FUN_00644e50  00644e50

void __thiscall FUN_00644e50(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xc0))();
      if (cVar1 != '\0') {
        *(undefined1 *)(param_2 + 4) = 1;
        (**(code **)(*param_1 + 0xc4))();
      }
    }
  }
  FUN_005f4e90(param_2);
  return;
}

