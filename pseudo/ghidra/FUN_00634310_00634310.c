// FUN_00634310  00634310

int __thiscall FUN_00634310(int *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  
  cVar1 = FUN_00634560(param_2);
  if (cVar1 == '\0') {
    iVar2 = *(int *)(param_1[0x23] + 0x164 + (param_2 + -10000) * 0x17c);
    if (param_3 != '\0') {
      iVar2 = -iVar2;
    }
  }
  else {
    for (local_c = 0; iVar2 = (**(code **)(*param_1 + 0xec))(), local_c < iVar2;
        local_c = local_c + 1) {
      iVar2 = (**(code **)(*param_1 + 0xe0))(local_c);
      if (iVar2 != 0) {
        piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(local_c);
        iVar2 = (**(code **)(*piVar3 + 0xf0))(param_2);
        if (0 < iVar2) {
          iVar2 = FUN_00634420(iVar2);
          return iVar2;
        }
      }
    }
    FUN_005e9f20("false","..\\casinoShell\\shell.cpp",0x529);
    iVar2 = 0;
  }
  return iVar2;
}

