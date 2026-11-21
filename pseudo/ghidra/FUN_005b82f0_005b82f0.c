// FUN_005b82f0  005b82f0

undefined1 FUN_005b82f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == -1) {
    param_2 = FUN_005b4e50(param_1);
  }
  iVar1 = FUN_005b5830(param_1,param_2);
  if (iVar1 == 2) {
    iVar1 = FUN_005b5f60(param_1,param_2,0);
    iVar2 = FUN_005b5f60(param_1,param_2,1);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}

