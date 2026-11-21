// FUN_00644e00  00644e00

void __thiscall FUN_00644e00(int *param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 4) == '\0') {
    cVar1 = FUN_005f54a0();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xc0))();
      if (cVar1 != '\0') {
        FUN_005f4ed0(param_2);
      }
    }
  }
  return;
}

