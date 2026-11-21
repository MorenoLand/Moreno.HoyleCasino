// FUN_0065ea70  0065ea70

undefined4 FUN_0065ea70(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  
  iVar1 = FUN_005fb720(0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_005fb720(0);
    uVar3 = (**(code **)(*piVar2 + 0xb8))(piVar2,uVar3);
  }
  return uVar3;
}

