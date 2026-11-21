// FUN_005d5a90  005d5a90

undefined4 * __thiscall FUN_005d5a90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_005d52e0(param_1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}

