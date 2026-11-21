// FUN_0062f530  0062f530

void __fastcall FUN_0062f530(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    if ((*(char *)param_1[9] == '\0') || ((uint)(param_1[8] + param_1[10]) <= (uint)param_1[9])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    FUN_0062efe0();
    if ((*(char *)param_1[9] == '\0') || ((uint)(param_1[8] + param_1[10]) <= (uint)param_1[9])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return;
    }
    iVar2 = FUN_0062ee80();
    if (iVar2 == 0x23) {
      (**(code **)(*param_1 + 0x28))();
    }
    else if ((iVar2 == 0x2f) && (iVar3 = (**(code **)(*param_1 + 0x24))(0x2f,1,0), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x28))();
    }
    else {
      FUN_0062eef0(iVar2);
      (**(code **)(*param_1 + 0x40))();
    }
  }
  return;
}

