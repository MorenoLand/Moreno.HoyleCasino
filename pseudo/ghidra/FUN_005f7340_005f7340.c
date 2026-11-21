// FUN_005f7340  005f7340

void __thiscall FUN_005f7340(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_005f8550();
  iVar2 = FUN_005f8590();
  iVar3 = FUN_005f8570();
  iVar4 = FUN_005f85b0();
  FUN_005f8420((int)param_2 + (iVar1 - iVar2) / 2,(int)param_3 + (iVar3 - iVar4) / 2);
  if (*(int *)(param_1 + 0x1b4) != 0) {
    uVar5 = FUN_005f8550();
    FUN_005ecc60(uVar5);
  }
  return;
}

