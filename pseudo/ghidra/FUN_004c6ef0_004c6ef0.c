// FUN_004c6ef0  004c6ef0

int __thiscall FUN_004c6ef0(int param_1,char param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 6) {
    iVar1 = (-(uint)(param_2 != '\0') & 0xfffffff7) + 9 + *(int *)(param_1 + 0x410);
  }
  else {
    iVar1 = (-(uint)(param_2 != '\0') & 9) + *(int *)(param_1 + 0x410);
  }
  return iVar1;
}

