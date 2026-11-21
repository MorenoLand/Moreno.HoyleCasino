// FUN_006397a0  006397a0

void FUN_006397a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (DAT_00795fbf == '\0') {
    if ((DAT_015e55e4 != 0) && (iVar1 = FUN_005f2300(100000), iVar1 != 0)) {
      uVar3 = 0x186ab;
      uVar2 = 0x186a2;
      FUN_005f2300(100000);
      FUN_005fdff0(uVar2,uVar3);
    }
  }
  else if ((DAT_015e55e4 != 0) && (iVar1 = FUN_005f2300(100000), iVar1 != 0)) {
    uVar3 = 0x186a2;
    uVar2 = 0x186ab;
    FUN_005f2300(100000);
    FUN_005fdff0(uVar2,uVar3);
  }
  return;
}

