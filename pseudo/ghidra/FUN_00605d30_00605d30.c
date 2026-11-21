// FUN_00605d30  00605d30

void __fastcall FUN_00605d30(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_14 [12];
  int local_8;
  
  FUN_005ebf80(local_14);
  if (param_1[1] != 0) {
    uVar2 = FUN_005f5400();
    (**(code **)(*(int *)param_1[1] + 0x18))(uVar2);
  }
  cVar1 = FUN_005f2920(param_1[0x7b]);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xd8))(0);
    iVar7 = param_1[0x7e];
    uVar2 = 0;
    iVar6 = param_1[0x7a];
    iVar3 = FUN_005f84f0(iVar6,0,iVar7);
    iVar4 = (**(code **)(*param_1 + 0x54))();
    iVar4 = iVar4 + iVar3 + local_8;
    iVar3 = FUN_005f84d0(iVar4);
    iVar5 = (**(code **)(*param_1 + 0x4c))();
    FUN_005f2670(param_1[0x7b],iVar3 + iVar5,iVar4,iVar6,uVar2,iVar7);
  }
  else {
    FUN_005f2840(param_1[0x7b]);
  }
  return;
}

