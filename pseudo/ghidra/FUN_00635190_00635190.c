// FUN_00635190  00635190

undefined4 __thiscall FUN_00635190(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_3 == 0x186d7) {
    uVar2 = FUN_005f3bf0();
    iVar3 = (**(code **)(*param_1 + 0xe0))(uVar2);
    if (iVar3 != 0) {
      uVar2 = FUN_005f3bf0();
      piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(uVar2);
      iVar3 = (**(code **)(*piVar4 + 0x68))();
      if (iVar3 != 0) {
        FUN_005fe240(0x186dc,0xffffffff,0x186da,1);
      }
    }
    cVar1 = (**(code **)(*DAT_0162ee80 + 0x208))();
    if (cVar1 == '\0') {
      FUN_005fe640(0x186db,0);
    }
  }
  return 1;
}

