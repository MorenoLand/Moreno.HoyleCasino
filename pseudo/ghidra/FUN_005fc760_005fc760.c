// FUN_005fc760  005fc760

void __fastcall FUN_005fc760(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  cVar1 = FUN_005f2920(param_1[0x7b]);
  if (cVar1 == '\0') {
    FUN_005f2870();
    uVar6 = 0;
    uVar5 = 0;
    iVar4 = param_1[0x7a];
    uVar2 = (**(code **)(*param_1 + 0x54))(iVar4,0,0);
    uVar3 = (**(code **)(*param_1 + 0x4c))(uVar2);
    FUN_005f2670(param_1[0x7b],uVar3,uVar2,iVar4,uVar5,uVar6);
  }
  else {
    FUN_005f2840(param_1[0x7b]);
  }
  return;
}

