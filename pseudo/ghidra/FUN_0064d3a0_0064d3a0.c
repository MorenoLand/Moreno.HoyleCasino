// FUN_0064d3a0  0064d3a0

void __thiscall FUN_0064d3a0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  if ((((param_3 != 0) && (DAT_0163068c == 0)) && (DAT_016306b0 == 0)) &&
     (((cVar1 = FUN_00646db0(param_2), cVar1 != '\0' &&
       (cVar1 = (**(code **)(*param_1 + 0x130))(param_3), cVar1 != '\0')) &&
      ((iVar2 = FUN_006375b0(), *(int *)(param_3 + 4) != iVar2 &&
       (cVar1 = (**(code **)(*param_1 + 0x200))(), cVar1 == '\0')))))) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))();
    if (iVar2 == 0) {
      param_1[0xd] = *(int *)(param_3 + 4);
      (**(code **)(*param_1 + 0x16c))(0,0,0xffffffff,0xffffffff,1);
    }
    else {
      FUN_0064d480(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_3 + 4));
    }
  }
  return;
}

