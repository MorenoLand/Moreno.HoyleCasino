// FUN_00403ad0  00403ad0

void FUN_00403ad0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var_00;
  
  piVar1 = (int *)FUN_005fb550(param_1);
  (**(code **)(*piVar1 + 0xb4))(param_2,piVar1,extraout_var_00);
  uVar4 = CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
  uVar3 = 0xffffffff;
  iVar2 = (-(uint)(param_3 != '\0') & 0x26) + 0x1f;
  FUN_005fb550(param_1);
  FUN_005ecd00(iVar2,uVar3,uVar4);
  return;
}

