// FUN_005c0980  005c0980

void * FUN_005c0980(void *param_1,int param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  if (0 < iVar1) {
    memmove_s(param_3,iVar1 << 2,param_1,iVar1 << 2);
  }
  return (void *)((int)param_3 + iVar1 * 4);
}

