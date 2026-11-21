// FUN_00644760  00644760

void __thiscall FUN_00644760(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if ((cVar1 != '\0') && (*(char *)((int)param_1 + 10) != '\0')) {
    (**(code **)(*param_1 + 0x44))
              (*(int *)(param_2 + 8) - param_1[0xb],*(int *)(param_2 + 0xc) - param_1[0xc]);
  }
  return;
}

