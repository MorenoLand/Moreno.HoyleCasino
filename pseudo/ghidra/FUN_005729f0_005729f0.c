// FUN_005729f0  005729f0

void FUN_005729f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0056da30(&local_c,*(undefined4 *)(DAT_00793450 + 0xa0));
  uVar1 = local_c;
  uVar2 = local_8;
  FUN_005dcb00(0,local_c,local_8,extraout_var);
  FUN_005d5fb0(uVar1,uVar2);
  FUN_005dcb00(param_1,local_c,local_8);
  FUN_005d5cf0(local_c,local_8);
  *(undefined4 *)(DAT_00793450 + 0xa0) = 0;
  *(undefined4 *)(DAT_00793450 + 0xa4) = 0;
  return;
}

