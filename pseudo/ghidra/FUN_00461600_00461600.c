// FUN_00461600  00461600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00461600(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_005dcb00();
  iVar2 = FUN_005d52e0();
  cVar1 = *(char *)(iVar2 + 0x2a);
  if (param_2 == 4) {
    iVar2 = FUN_00461580();
    if (iVar2 == 1) {
      iVar2 = (**(code **)(*DAT_00790734 + 0x2b0))();
      uVar5 = FUN_0064c8a0(iVar2 << 1);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(uVar5,4,0);
      iVar2 = (**(code **)(*DAT_00790734 + 0x2b0))(0);
      uVar6 = FUN_0064c8a0(-iVar2);
      uVar5 = uVar6;
      FUN_005dcb00(*(undefined4 *)(param_1 + 0x10c),uVar6);
      FUN_005d5fb0(uVar5);
      FUN_005dcb00(*(undefined4 *)(param_1 + 0x10c),uVar6);
      FUN_005d5cf0(uVar6);
    }
    iVar2 = FUN_00461580();
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*DAT_00790734 + 0x2b0))();
      uVar6 = FUN_0064c8a0(uVar3);
      FUN_0064c560(_DAT_006b3730);
      uVar5 = FUN_0064c8a0(0,0);
      (**(code **)(**(int **)(param_1 + 4) + 0xb8))(uVar5,4,0);
      uVar5 = uVar6;
      FUN_005dcb00(*(undefined4 *)(param_1 + 0x10c),uVar6);
      FUN_005d5fb0(uVar5);
      FUN_005dcb00(*(undefined4 *)(param_1 + 0x10c),uVar6);
      FUN_005d5cf0(uVar6);
    }
  }
  else {
    uVar5 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar5);
    FUN_005d6050(uVar5);
    uVar3 = FUN_00461580();
    FUN_00462370(param_2,uVar3);
    FUN_005dcb00();
    iVar2 = FUN_005d52e0();
    if ((cVar1 != *(char *)(iVar2 + 0x2a)) && (*(char *)(iVar2 + 0x2a) == '\0')) {
      piVar4 = (int *)FUN_005dcb00();
      (**(code **)(*piVar4 + 4))();
      uVar5 = FUN_0064c8a0(0,0);
      uVar3 = (undefined4)uVar5;
      FUN_005dcb00(param_2,uVar5);
      FUN_005d6050(uVar3);
    }
  }
  return;
}

