// FUN_00426ed0  00426ed0

void __thiscall FUN_00426ed0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  FUN_005dcb00(param_2);
  iVar4 = FUN_005d52e0();
  cVar3 = *(char *)(iVar4 + 0x2a);
  uVar7 = FUN_0064c8a0(0,0);
  FUN_005dcb00(param_2,uVar7);
  FUN_005d6050(uVar7);
  cVar2 = FUN_00426e80();
  if (cVar2 == '\0') {
    FUN_00427af0(param_2,1);
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d52e0();
    if ((cVar3 == *(char *)(iVar4 + 0x2a)) || (*(char *)(iVar4 + 0x2a) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00427af0(param_2,2);
    }
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d52e0();
    if ((cVar3 == *(char *)(iVar4 + 0x2a)) || (*(char *)(iVar4 + 0x2a) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0xb0 + param_2 * 4) = 1;
    *(undefined4 *)(param_1 + 0xc0 + param_2 * 4) = 3;
  }
  else {
    uVar5 = FUN_00462da0(param_1 + 0x6c + param_2 * 10,param_1 + 0x94,5);
    FUN_00427af0(param_2,uVar5);
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d52e0();
    if ((cVar3 == *(char *)(iVar4 + 0x2a)) || (*(char *)(iVar4 + 0x2a) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_00427af0(param_2,uVar5);
    }
    FUN_005dcb00(param_2);
    iVar4 = FUN_005d52e0();
    if ((cVar3 == *(char *)(iVar4 + 0x2a)) || (*(char *)(iVar4 + 0x2a) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(undefined4 *)(param_1 + 0xb0 + param_2 * 4) = uVar5;
    *(undefined4 *)(param_1 + 0xc0 + param_2 * 4) = uVar5;
  }
  cVar3 = FUN_004272e0(param_2);
  if (cVar3 == '\0') {
    uVar8 = 0;
    uVar5 = FUN_00426370(param_2);
    iVar4 = FUN_00462ba0(param_1 + 0x6c + param_2 * 10,uVar5,uVar8);
    *(bool *)(param_1 + param_2 + 0xd8) = 5 < iVar4;
  }
  if (bVar1) {
    piVar6 = (int *)FUN_005dcb00(param_2);
    (**(code **)(*piVar6 + 4))(0xffffffff);
    uVar7 = FUN_0064c8a0(0,0);
    FUN_005dcb00(param_2,uVar7);
    FUN_005d6050(uVar7);
  }
  return;
}

