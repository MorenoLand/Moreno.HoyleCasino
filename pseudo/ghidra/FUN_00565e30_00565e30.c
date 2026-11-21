// FUN_00565e30  00565e30

int __thiscall FUN_00565e30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_00743b10 + (*(int *)(param_1 + 0x28) + -100) * 8);
  iVar2 = FUN_00566380();
  return param_2 * 6 + ((iVar1 + 0x14) - (iVar2 * 6) / 2);
}

