// FUN_005361a0  005361a0

undefined4 FUN_005361a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  FUN_00536d40();
  uVar2 = extraout_var;
  iVar1 = (**(code **)(*DAT_00793394 + 0x40))();
  if (iVar1 == 1) {
    uVar2 = FUN_00536bc0(1,uVar2);
  }
  else if (iVar1 == 3) {
    uVar2 = FUN_00536da0(1,0,2);
  }
  else if (iVar1 == 5) {
    uVar2 = FUN_00537050();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

