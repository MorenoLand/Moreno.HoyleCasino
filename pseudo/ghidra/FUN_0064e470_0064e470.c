// FUN_0064e470  0064e470

undefined4 __thiscall FUN_0064e470(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  int local_8;
  
  if (param_3 < 0x138e) {
    if ((param_3 == 0x138d) || ((4999 < param_3 && ((param_3 < 0x138a || (param_3 == 0x138b)))))) {
      for (local_14 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0x168))(), local_14 < iVar3;
          local_14 = local_14 + 1) {
        uVar4 = (**(code **)(*DAT_0162ee84 + 0x164))(local_14);
        uVar4 = (**(code **)(*DAT_0162ee84 + 0x3ac))(uVar4);
        FUN_005fe240(uVar4,0xffffffff,0xfffffffe,1);
      }
    }
  }
  else if (param_3 == 0x138e) {
    for (local_8 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar3;
        local_8 = local_8 + 1) {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      if (((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x44))(), cVar1 != '\0')) &&
         (iVar3 = (**(code **)(*piVar2 + 0x6c))(), iVar3 != 0)) {
        FUN_005fe1c0(iVar3,0xffffffff,0xfffffffe,0);
      }
    }
  }
  else if ((0x186bd < param_3) && (param_3 < 0x186c0)) {
    for (local_8 = 0; iVar3 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar3;
        local_8 = local_8 + 1) {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x6c))(), iVar3 != 0)) {
        FUN_005fe1c0(iVar3,0xffffffff,0xfffffffe,1);
      }
    }
    (**(code **)(*param_1 + 0x60))();
  }
  return 1;
}

