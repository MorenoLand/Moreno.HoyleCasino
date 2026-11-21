// FUN_005df700  005df700

uint __thiscall FUN_005df700(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0();
  }
  uVar1 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
  if (((uVar1 & 0xff) != 0) && (uVar1 = FUN_005da830(), (uVar1 & 0xff) == 0)) {
    iVar2 = (**(code **)(*param_1 + 0xe8))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*param_1 + 0xe8))();
      uVar1 = (**(code **)(*piVar3 + 0x94))();
      if ((uVar1 & 0xff) == 0) goto LAB_005df783;
    }
    FUN_005dcb00(0,param_2);
    uVar1 = FUN_005d54a0(param_2);
    return uVar1;
  }
LAB_005df783:
  return uVar1 & 0xffffff00;
}

