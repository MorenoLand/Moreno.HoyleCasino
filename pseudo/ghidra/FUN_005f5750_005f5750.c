// FUN_005f5750  005f5750

void __thiscall FUN_005f5750(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*param_2 + 0x4c))();
  iVar2 = FUN_005f5550();
  iVar3 = FUN_005f5550();
  iVar4 = (**(code **)(*param_2 + 0x54))();
  iVar5 = FUN_005f5590();
  iVar6 = FUN_005f5590();
  (**(code **)(*param_1 + 0x44))((iVar1 + iVar2 / 2) - iVar3 / 2,(iVar4 + iVar5 / 2) - iVar6 / 2);
  return;
}

