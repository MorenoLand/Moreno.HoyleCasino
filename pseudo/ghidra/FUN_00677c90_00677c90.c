// FUN_00677c90  00677c90

void __fastcall FUN_00677c90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*DAT_0162ee80 + 0x1f0))(param_1);
  if (iVar2 == 0) {
    FUN_00677f70();
    FUN_006780c0();
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x1c8))();
  if (cVar1 != '\0') {
    FUN_006375b0();
    uVar3 = FUN_00639ff0();
    FUN_005fb3a0(0);
    FUN_006065d0(uVar3);
  }
  return;
}

