// FUN_0065c4d0  0065c4d0

void FUN_0065c4d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_var;
  
  FUN_005f85d0();
  iVar2 = extraout_var;
  uVar1 = FUN_005fb300(99);
  if (*(int *)(iVar2 + 0x1bc) != 0) {
    (**(code **)(**(int **)(iVar2 + 0x1bc) + 0x74))(iVar2,uVar1);
    iVar2 = FUN_00663c50();
    if (iVar2 == 0) {
      FUN_005fb3a0(0);
      iVar2 = FUN_00606570();
      if (iVar2 == 0x60) {
        uVar1 = 0x5f;
        FUN_005fb3a0(0);
        FUN_006065d0(uVar1);
      }
    }
    FUN_0065c300();
  }
  return;
}

