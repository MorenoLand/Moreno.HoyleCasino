// FUN_00625c50  00625c50

void __fastcall FUN_00625c50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
  FUN_00606140();
  if (param_1[0x84] != 0) {
    if ((char)param_1[0x87] == '\0') {
      for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
        piVar2 = (int *)FUN_0060ca40(local_8);
        (**(code **)(*piVar2 + 0x74))();
      }
    }
    else {
      for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
        uVar3 = 0;
        FUN_0060ca40(local_8);
        FUN_005f5620(uVar3);
      }
    }
  }
  FUN_005ff960(param_1);
  (**(code **)(*param_1 + 0x6c))(100);
  return;
}

