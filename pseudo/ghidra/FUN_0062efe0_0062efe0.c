// FUN_0062efe0  0062efe0

undefined4 __fastcall FUN_0062efe0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    if ((*(char *)param_1[9] == '\0') || ((uint)(param_1[8] + param_1[10]) <= (uint)param_1[9])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    iVar3 = FUN_0062ee80();
    iVar4 = (**(code **)(*param_1 + 0x14))();
    if (iVar4 == iVar3) {
      param_1[0xc] = param_1[0xc] + 1;
      param_1[0xd] = 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x18))(iVar3);
    if (cVar2 == '\0') {
      FUN_0062eef0(iVar3);
      return 0;
    }
  }
  return 0;
}

