// FUN_0065eab0  0065eab0

void __thiscall FUN_0065eab0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != '\0') {
    iVar2 = FUN_00663c50();
    if (iVar2 == 0) {
      uVar7 = 0;
      uVar4 = 2;
      ppuVar6 = &PTR_006b27f8;
      iVar2 = param_1 + 0x1d7;
      uVar3 = FUN_00660f70(iVar2,&PTR_006b27f8,2,0);
      FUN_0065e7f0(uVar3,iVar2,ppuVar6,uVar4,uVar7);
    }
    else {
      uVar8 = 0;
      uVar7 = 3;
      uVar3 = FUN_006639a0(0);
      iVar2 = param_1 + 0x1d7;
      uVar4 = FUN_00660f70(iVar2,uVar3,uVar7,uVar8);
      FUN_0065e7f0(uVar4,iVar2,uVar3,uVar7,uVar8);
    }
    FUN_005fb720(0);
    FUN_00628d80();
    piVar5 = (int *)FUN_005fb720(0);
    (**(code **)(*piVar5 + 0xc4))();
    uVar4 = 1;
    uVar3 = FUN_00660f70(1);
    FUN_005fb720(0);
    FUN_00628f40(uVar3,uVar4);
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_005f8990();
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  if ((((*(int *)(param_1 + 0x1e4) == -1) &&
       (cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff), cVar1 == '\0')) &&
      (*(int *)(param_1 + 0x1cc) != 0)) &&
     (iVar2 = (**(code **)(*DAT_0162ee84 + 0x308))(), 0 < iVar2)) {
    FUN_0064f660(*(undefined4 *)(param_1 + 0x1cc));
  }
  else {
    if (*(undefined4 **)(param_1 + 0x1cc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x1cc))(1);
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  return;
}

