// FUN_0064ff40  0064ff40

void __thiscall FUN_0064ff40(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x1b8))();
  cVar2 = (**(code **)(*DAT_0162ee84 + 0xd8))();
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*DAT_0162ee84 + 200))(), cVar2 == '\0')) {
    iVar3 = (**(code **)(*param_2 + 0x54))();
    iVar3 = (**(code **)(*param_2 + 0x4c))(iVar3 + 0x16);
    (**(code **)(*(int *)param_2[100] + 0x44))(iVar3 + 8);
  }
  else {
    FUN_005ecc60(0x6c);
    FUN_005eccb0(0xc);
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*param_2 + 0x54))();
      iVar3 = (**(code **)(*param_2 + 0x4c))(iVar3 + 0x20);
      (**(code **)(*(int *)param_2[100] + 0x44))(iVar3 + 5);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x54))();
      iVar3 = (**(code **)(*param_2 + 0x4c))(iVar3 + 0x14);
      (**(code **)(*(int *)param_2[100] + 0x44))(iVar3 + 5);
    }
  }
  return;
}

