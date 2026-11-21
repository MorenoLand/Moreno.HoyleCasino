// FUN_00616490  00616490

int __thiscall FUN_00616490(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x164) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(*(int *)(param_1 + 0x164) + 4 + param_2 * 8) + 8 +
                           param_3 * 0x10);
  }
  return iVar1;
}

