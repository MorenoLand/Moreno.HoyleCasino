// FUN_006595e0  006595e0

void FUN_006595e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_var;
  undefined4 uVar9;
  undefined4 local_8;
  
  FUN_00664c90(param_1);
  uVar9 = extraout_var;
  FUN_006023d0(4,5,6,7);
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (param_1 != local_8) {
      FUN_006023d0(0,1,2,3);
    }
  }
  for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
    iVar1 = param_1 + 4;
    iVar3 = param_1 + 4;
    iVar5 = param_1 + 4;
    iVar2 = param_1 + 4;
    iVar4 = param_1 + 8;
    iVar6 = param_1;
    iVar7 = param_1;
    iVar8 = param_1;
    FUN_00606350(local_8);
    FUN_005fff90(iVar6,iVar7,iVar8,iVar4,iVar2,iVar5,iVar3,iVar1);
  }
  FUN_006587b0(uVar9);
  return;
}

