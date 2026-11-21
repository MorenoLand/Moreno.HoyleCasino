// FUN_006352f0  006352f0

bool __thiscall FUN_006352f0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 600))();
  if (iVar2 == param_2) {
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xec))();
    bVar1 = param_2 < iVar2;
  }
  return bVar1;
}

