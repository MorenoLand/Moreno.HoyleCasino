// FUN_0058af00  0058af00

void FUN_0058af00(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_var;
  
  piVar1 = (int *)FUN_005fb5e0(0);
  (**(code **)(*piVar1 + 0xf0))(0x30dfbd,1,piVar1,extraout_var);
  iVar2 = FUN_00588a80();
  if (iVar2 == 0) {
    FUN_005f2ba0(0x30dfc0);
  }
  else {
    FUN_005f2b20(0x30dfc0,1);
  }
  return;
}

