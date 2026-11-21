// FUN_005fd330  005fd330

void __fastcall FUN_005fd330(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_005f28c0(*(undefined4 *)(param_1[0x7c] + 0x1c4));
  iVar1 = FUN_005f84f0();
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar1 = iVar1 + iVar2;
  iVar3 = FUN_005f84d0();
  iVar4 = (**(code **)(*param_1 + 0x4c))();
  uVar7 = 0;
  iVar2 = param_1[0x7c];
  uVar6 = 2;
  iVar5 = FUN_005f5550(iVar1,2,iVar2,0);
  FUN_005f2670(param_1[0x7b],iVar5 + iVar3 + iVar4,iVar1,uVar6,iVar2,uVar7);
  (**(code **)(*param_1 + 0xd8))(3);
  uVar6 = FUN_005f5400();
  *(undefined4 *)(param_1[0x7c] + 0x1b8) = uVar6;
  FUN_005f5df0(0);
  return;
}

