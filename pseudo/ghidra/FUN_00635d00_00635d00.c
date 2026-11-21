// FUN_00635d00  00635d00

void __thiscall FUN_00635d00(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x33c))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x34))(param_2);
  }
  else {
    piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
    cVar1 = (**(code **)(*piVar2 + 0x40))();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x334))(param_2,0xffffffff);
    }
  }
  return;
}

