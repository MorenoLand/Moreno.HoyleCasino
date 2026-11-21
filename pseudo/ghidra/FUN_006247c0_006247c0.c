// FUN_006247c0  006247c0

void FUN_006247c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_var;
  
  uVar1 = FUN_0062e360();
  uVar4 = extraout_var;
  uVar2 = FUN_00686cc0();
  uVar3 = FUN_0062e340(uVar2);
  uVar4 = FUN_00686cc0(uVar2,uVar3,uVar1,uVar4);
  uVar3 = 0;
  uVar1 = 0;
  iVar5 = FUN_00623910(0,0,uVar4);
  iVar5 = iVar5 + -1;
  iVar6 = FUN_006238f0(iVar5);
  FUN_00624840(param_1,0,0,iVar6 + -1,iVar5,uVar1,uVar3,uVar4,uVar2);
  return;
}

