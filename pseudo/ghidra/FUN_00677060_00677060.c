// FUN_00677060  00677060

void FUN_00677060(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00677400();
  if (iVar1 == -1) {
    uVar3 = 0x231ab6;
    FUN_005fb2b0(0);
    FUN_005eaf00(uVar3);
  }
  else {
    uVar3 = FUN_00677400();
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x1e8))(uVar3);
    FUN_005fb2b0(0);
    FUN_005eaf00(uVar3);
  }
  piVar2 = (int *)FUN_005fb550(1);
  FUN_005fb720(0);
  FUN_005e4390();
  uVar3 = what();
  (**(code **)(*piVar2 + 0xb4))(uVar3);
  return;
}

