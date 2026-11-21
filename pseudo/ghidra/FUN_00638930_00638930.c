// FUN_00638930  00638930

undefined4 __thiscall FUN_00638930(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0x1d0))(), param_2 < iVar1)) {
    return *(undefined4 *)(&DAT_00762108 + param_2 * 4);
  }
  return 0xffffffff;
}

