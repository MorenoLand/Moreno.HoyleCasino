// FUN_00524c20  00524c20

void FUN_00524c20(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  int local_8;
  
  FUN_005dcb00(param_1);
  iVar4 = FUN_005d52e0();
  cVar3 = *(char *)(iVar4 + 0x2a);
  bVar1 = false;
  uVar6 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_1,uVar6);
  FUN_005d6050(uVar6);
  for (local_8 = 0xa0; -1 < local_8; local_8 = local_8 + -1) {
    cVar2 = FUN_005cb7d0(param_1,0);
    if (cVar2 != '\0') {
      FUN_005dcb00(param_1);
      iVar4 = FUN_005d52e0();
      if ((cVar3 == *(char *)(iVar4 + 0x2a)) || (*(char *)(iVar4 + 0x2a) != '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      cVar2 = FUN_00528c20(local_8);
      if (cVar2 == '\0') {
        FUN_005291e0(param_1,local_8,0);
        FUN_00522f00(param_1,local_8);
      }
      else {
        FUN_005291e0(param_1,local_8,1);
        FUN_00523070(param_1,local_8);
      }
    }
  }
  if (bVar1) {
    piVar5 = (int *)FUN_005dcb00(param_1);
    (**(code **)(*piVar5 + 4))(0xffffffff);
    uVar6 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_1,uVar6);
    FUN_005d6050(uVar6);
  }
  FUN_005dcb00(param_1);
  cVar3 = FUN_005d5920();
  if (cVar3 != '\0') {
    iVar4 = FUN_005dcb00(param_1);
    if (*(int *)(iVar4 + 0x4a8) < 0) {
      iVar4 = FUN_005dcb00(param_1);
      *(undefined4 *)(iVar4 + 0x4a8) = 0;
    }
    FUN_005dcb00(param_1);
    FUN_005d7540();
  }
  FUN_005dcb00(param_1);
  cVar3 = FUN_005d58d0();
  if (cVar3 != '\0') {
    iVar4 = FUN_005dcb00(param_1);
    if (0 < *(int *)(iVar4 + 0x4a8)) {
      iVar4 = FUN_005dcb00(param_1);
      *(undefined4 *)(iVar4 + 0x4a8) = 0;
    }
    iVar4 = FUN_005dcb00(param_1);
    *(int *)(iVar4 + 0x4a8) = *(int *)(iVar4 + 0x4a8) + -1;
  }
  iVar4 = FUN_005dcb00(param_1);
  *(undefined1 *)(iVar4 + 0x4a2) = 1;
  return;
}

