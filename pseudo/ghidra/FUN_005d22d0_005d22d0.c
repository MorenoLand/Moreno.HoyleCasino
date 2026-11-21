// FUN_005d22d0  005d22d0

void FUN_005d22d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  
  iVar1 = FUN_005fb2b0(3);
  if (iVar1 != 0) {
    uVar3 = extraout_var;
    piVar2 = (int *)FUN_005fb2b0(3);
    (**(code **)(*piVar2 + 0x70))(piVar2,uVar3);
  }
  return;
}

