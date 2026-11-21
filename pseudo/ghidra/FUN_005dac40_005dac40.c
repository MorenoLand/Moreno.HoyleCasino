// FUN_005dac40  005dac40

undefined4 FUN_005dac40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 extraout_var;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_005daa20(local_c);
  puVar2 = local_14;
  FUN_005dcb00(param_2,puVar2,extraout_var);
  puVar1 = (undefined4 *)FUN_005d5a90(puVar2);
  FUN_0064c630(param_1,*puVar1,puVar1[1]);
  return param_1;
}

