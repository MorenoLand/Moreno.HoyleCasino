// FUN_00547f00  00547f00

void FUN_00547f00(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)FUN_005d0c30(local_1c,*(undefined4 *)(DAT_00793404 + 8));
  uVar3 = puVar1[1];
  uVar2 = *puVar1;
  puVar1 = &local_c;
  uVar4 = extraout_var;
  FUN_005d0cd0(local_14);
  FUN_0064c630(puVar1,uVar2,uVar3);
  uVar3 = local_c;
  uVar2 = local_8;
  FUN_005dcb00(param_1,local_c,local_8,uVar4);
  FUN_005d5fb0(uVar3,uVar2);
  FUN_005dcb00(param_1,local_c,local_8);
  FUN_005d5cf0(local_c,local_8);
  FUN_005d0a20(0);
  *(undefined4 *)(DAT_00793404 + 8) = 0;
  return;
}

