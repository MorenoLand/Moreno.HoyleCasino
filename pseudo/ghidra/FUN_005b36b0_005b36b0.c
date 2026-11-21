// FUN_005b36b0  005b36b0

bool __thiscall FUN_005b36b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
  FUN_005dcb00(param_2);
  iVar2 = FUN_005d5a50();
  return iVar1 <= iVar2;
}

