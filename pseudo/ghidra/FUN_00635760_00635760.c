// FUN_00635760  00635760

void __thiscall FUN_00635760(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_2) {
    iVar1 = FUN_006352f0(param_2);
    if ((iVar1 != 0) && (param_3 != 0)) {
      piVar2 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
      (**(code **)(*piVar2 + 0x3c))(param_3);
    }
  }
  return;
}

