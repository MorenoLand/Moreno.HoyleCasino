// FUN_005448f0  005448f0

void __thiscall FUN_005448f0(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x8c + param_2 * 4) + 0xd0))(param_1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x8c + param_2 * 4) + 0x6c))(1);
  iVar1 = FUN_005449e0(param_2);
  if (iVar1 != -1) {
    FUN_005f2ba0(iVar1);
  }
  return;
}

