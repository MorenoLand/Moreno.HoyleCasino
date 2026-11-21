// FUN_005792b0  005792b0

void FUN_005792b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00574cc0(&local_c,*(undefined4 *)(DAT_0079345c + 0x70));
  uVar1 = local_c;
  uVar2 = local_8;
  FUN_005dcb00(0,local_c,local_8,extraout_var);
  FUN_005d5fb0(uVar1,uVar2);
  FUN_005dcb00(param_1,local_c,local_8);
  FUN_005d5cf0(local_c,local_8);
  *(undefined4 *)(DAT_0079345c + 0x70) = 0;
  *(undefined4 *)(DAT_0079345c + 0x74) = 0;
  return;
}

