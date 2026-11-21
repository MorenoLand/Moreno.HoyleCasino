// FUN_006163e0  006163e0

int __thiscall FUN_006163e0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x164) + param_2 * 8);
  }
  return iVar1;
}

