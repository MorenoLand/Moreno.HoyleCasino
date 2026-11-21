// FUN_005d5970  005d5970

undefined4 * __thiscall FUN_005d5970(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_005d52e0(param_1);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  *param_2 = *(undefined4 *)(iVar2 + 8);
  param_2[1] = uVar1;
  return param_2;
}

