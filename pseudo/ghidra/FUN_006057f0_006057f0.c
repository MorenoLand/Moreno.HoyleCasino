// FUN_006057f0  006057f0

void __thiscall FUN_006057f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x184) + 0x5c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x184) + 0x60);
  iVar1 = *(int *)(*(int *)(param_1 + 0x184) + 100);
  iVar3 = *(int *)(*(int *)(param_1 + 0x184) + 0x68);
  iVar4 = param_3;
  iVar7 = param_2;
  cVar2 = FUN_006050f0(param_1,iVar3,param_3,iVar5,iVar6,param_2);
  if (cVar2 == '\0') {
    if (param_3 < iVar1) {
      iVar4 = iVar1;
    }
    if (iVar3 < param_3) {
      iVar4 = iVar3;
    }
  }
  else {
    if (param_2 < iVar6) {
      iVar7 = iVar6;
    }
    if (iVar5 < param_2) {
      iVar7 = iVar5;
    }
  }
  FUN_005eb260(iVar7,iVar4);
  return;
}

