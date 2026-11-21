// FUN_00403ff0  00403ff0

undefined4 * __thiscall FUN_00403ff0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x178) + 0x48 + param_3 * 0x20;
  uVar2 = *(undefined4 *)(iVar1 + 4 + param_4 * 8);
  *param_2 = *(undefined4 *)(iVar1 + param_4 * 8);
  param_2[1] = uVar2;
  return param_2;
}

