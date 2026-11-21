// FUN_00403a30  00403a30

void FUN_00403a30(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  undefined1 extraout_var;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var_00;
  char local_1c [20];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_1c,"%d",param_2);
  uVar3 = extraout_var_00;
  piVar1 = (int *)FUN_005fb550(param_1);
  (**(code **)(*piVar1 + 0xb4))(local_1c,piVar1,uVar3);
  uVar4 = CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  uVar3 = 0xffffffff;
  iVar2 = (-(uint)(param_3 != '\0') & 0x26) + 0x1f;
  FUN_005fb550(param_1);
  FUN_005ecd00(iVar2,uVar3,uVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

