// FUN_005cb6d0  005cb6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005cb6d0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = FUN_0064c760(param_2,param_3);
  if ((cVar1 != '\0') && (param_2 != 0)) {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a1,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  param_1[param_4 * 8 + param_5 * 2 + 0x12] = param_2;
  param_1[param_4 * 8 + param_5 * 2 + 0x13] = param_3;
  (**(code **)(*param_1 + 0xc0))(param_4,param_5);
  return;
}

