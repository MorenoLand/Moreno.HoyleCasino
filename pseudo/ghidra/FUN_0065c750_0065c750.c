// FUN_0065c750  0065c750

void __thiscall FUN_0065c750(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  FUN_005fb3a0(0);
  iVar2 = FUN_00606570();
  if ((iVar2 == 0x60) && (iVar2 = FUN_00663c50(), iVar2 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && (*(int *)(param_1 + 0x1bc) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1bc) + 0x70) != 0)) {
    FUN_0065d190(param_2 + -0x186bf);
  }
  return;
}

