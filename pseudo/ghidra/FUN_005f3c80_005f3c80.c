// FUN_005f3c80  005f3c80

void __thiscall FUN_005f3c80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_8;
  
  if (DAT_015e55e4 != (undefined4 *)0x0) {
    if (*(int *)(DAT_007960d8 + 8) != 0) {
      FUN_006098d0();
      cVar1 = (**(code **)(*param_1 + 0x8c))();
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x88))();
      }
    }
    if (DAT_015e55e4 != (undefined4 *)0x0) {
      (**(code **)*DAT_015e55e4)(1);
    }
    DAT_015e55e4 = (undefined4 *)0x0;
    if ((param_2 != -1) && (param_2 != 0x44c)) {
      FUN_005f7d50();
    }
    while (iVar2 = FUN_0060c9a0(), iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_0060ca40(0);
      FUN_0060c890(puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  FUN_00625240(0);
  for (local_8 = 0; iVar2 = FUN_0060c9a0(), local_8 < iVar2; local_8 = local_8 + 1) {
    FUN_0060ca40(local_8);
    FUN_00613da0();
  }
  return;
}

