// FUN_005df010  005df010

undefined4 * __thiscall FUN_005df010(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x1fc))();
  if (param_3 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 500))();
    if (param_3 < iVar1) {
      param_3 = param_3 * 0xc;
      *param_2 = *(undefined4 *)(&DAT_0075d870 + param_3);
      param_2[1] = *(undefined4 *)(&DAT_0075d874 + param_3);
      param_2[2] = *(undefined4 *)(&DAT_0075d878 + param_3);
    }
    else {
      FUN_00632d40(param_2,param_3);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_2;
}

