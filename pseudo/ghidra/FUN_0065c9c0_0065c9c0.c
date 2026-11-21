// FUN_0065c9c0  0065c9c0

void __thiscall FUN_0065c9c0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0065d190(param_2);
  cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x7c))();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_005fb5e0(0x5c);
      (**(code **)(*piVar3 + 0xf0))(param_2 + 0x186bf,1);
    }
  }
  return;
}

