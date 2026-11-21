// FUN_00632d40  00632d40

undefined4 * __thiscall FUN_00632d40(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_3) && (iVar1 = (**(code **)(*param_1 + 0x1fc))(), param_3 < iVar1)) {
    iVar1 = (**(code **)(*param_1 + 500))();
    if (param_3 < iVar1) {
      param_3 = param_3 * 0xc;
      *param_2 = *(undefined4 *)(&DAT_00762298 + param_3);
      param_2[1] = *(undefined4 *)(&DAT_0076229c + param_3);
      param_2[2] = *(undefined4 *)(&DAT_007622a0 + param_3);
      return param_2;
    }
    iVar1 = (**(code **)(*param_1 + 500))();
    iVar2 = (**(code **)(*param_1 + 0x1f8))();
    if (param_3 - iVar1 < iVar2) {
      iVar1 = (param_3 - iVar1) * 0xc;
      *param_2 = *(undefined4 *)(&DAT_00762518 + iVar1);
      param_2[1] = *(undefined4 *)(&DAT_0076251c + iVar1);
      param_2[2] = *(undefined4 *)(&DAT_00762520 + iVar1);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

