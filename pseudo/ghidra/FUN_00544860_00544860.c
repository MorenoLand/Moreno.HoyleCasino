// FUN_00544860  00544860

void __thiscall FUN_00544860(int param_1,int param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x8c + param_2 * 4) + 0xcc))(param_1,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x8c + param_2 * 4) + 0x6c))(2);
  iVar1 = FUN_005449e0(param_2);
  if (iVar1 != -1) {
    FUN_005f2b20(iVar1,1);
  }
  return;
}

