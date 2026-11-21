// FUN_0064da20  0064da20

void __thiscall FUN_0064da20(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x140))(param_2,param_3,0);
  if (cVar1 != '\0') {
    FUN_0063b2d0();
    if (param_3 == 0) {
      FUN_0063a3e0(param_2,0);
      FUN_0063a8d0(0xffffffff,0,1,1,1);
    }
    else {
      (**(code **)(*param_1 + 0x158))(param_2,param_3);
      *(int *)(*(int *)(*(int *)(DAT_0162ee84 + 0x58) + param_2 * 4) + 4) = param_2;
      FUN_0063a8d0(*(undefined4 *)(*(int *)(*(int *)(DAT_0162ee84 + 0x58) + param_2 * 4) + 8),0,1,1,
                   1);
    }
  }
  return;
}

