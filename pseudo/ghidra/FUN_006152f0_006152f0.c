// FUN_006152f0  006152f0

void __thiscall FUN_006152f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  
  cVar1 = FUN_006152a0(param_2);
  if (cVar1 == '\0') {
    if (param_1[0x1b] < param_2) {
      iVar4 = param_1[0x1b];
      iVar2 = (**(code **)(*param_1 + 0xb8))();
      iVar3 = (**(code **)(*param_1 + 0xbc))();
      if (param_2 - iVar4 < iVar2 - (param_1[0x1b] + -1 + iVar3)) {
        local_c = param_2 - param_1[0x1b];
      }
      else {
        local_c = (**(code **)(*param_1 + 0xb8))();
        iVar4 = (**(code **)(*param_1 + 0xbc))();
        local_c = local_c - (param_1[0x1b] + -1 + iVar4);
      }
      (**(code **)(*param_1 + 0xdc))(0,local_c);
    }
    else {
      (**(code **)(*param_1 + 0xdc))(1,param_1[0x1b] - param_2);
    }
  }
  return;
}

