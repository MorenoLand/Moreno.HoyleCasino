// FUN_00677ec0  00677ec0

void __fastcall FUN_00677ec0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*DAT_0162ee80 + 0x1f0))(param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_00678170();
    (**(code **)(*DAT_0162ee84 + 0x394))(uVar3);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x1c8))();
  if (cVar1 != '\0') {
    FUN_005fb3a0(0);
    uVar3 = FUN_00606570();
    (**(code **)(*DAT_0162ee84 + 0x39c))(uVar3);
  }
  FUN_00637610();
  (**(code **)(*DAT_0162ee80 + 0x114))();
  return;
}

