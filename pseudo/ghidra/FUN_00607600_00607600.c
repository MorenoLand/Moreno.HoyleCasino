// FUN_00607600  00607600

void __fastcall FUN_00607600(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (((char)param_1[3] != '\0') &&
     (iVar3 = FUN_005f3e50(), *(int *)(param_1[1] + 0x184) <= iVar3 - param_1[10])) {
    iVar3 = FUN_005f3e50();
    param_1[10] = iVar3;
    bVar1 = false;
    bVar2 = false;
    param_1[6] = (int)((float)param_1[6] + (float)param_1[8]);
    param_1[7] = (int)((float)param_1[7] + (float)param_1[9]);
    iVar3 = FUN_00686cc0();
    iVar4 = FUN_00686cc0();
    (**(code **)(*(int *)param_1[1] + 0x44))(iVar3,iVar4);
    iVar3 = abs(iVar3 - param_1[4]);
    if ((iVar3 < *(int *)(param_1[1] + 0x188)) &&
       (iVar3 = abs(iVar4 - param_1[5]), iVar3 < *(int *)(param_1[1] + 0x188))) {
      bVar1 = true;
    }
    uVar5 = FUN_005eb610();
    iVar3 = (uVar5 & 0xff) + param_1[0xb];
    if ((param_1[0xb] < 0) && (iVar3 < 1)) {
      FUN_005eb5d0(0);
      bVar2 = true;
    }
    else if ((param_1[0xb] < 1) || (iVar3 < 0xff)) {
      FUN_005eb5d0(iVar3);
    }
    else {
      FUN_005eb5d0(0xff);
      bVar2 = true;
    }
    if ((bVar1) && (bVar2)) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}

