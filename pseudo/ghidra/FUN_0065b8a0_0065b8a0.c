// FUN_0065b8a0  0065b8a0

void __fastcall FUN_0065b8a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[0x6e] = 3;
  param_1[0x70] = param_1[0x6e] + 0x14;
  param_1[0x6f] = 2;
  param_1[0x71] = param_1[0x6f] + 0xc;
  FUN_005ef310(0x30);
  FUN_005ecc60((param_1[0x70] - param_1[0x6e]) + 1);
  FUN_005eccb0((param_1[0x71] - param_1[0x6f]) + 1);
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar1 = param_1[0x6f];
  iVar3 = FUN_005eb470();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + iVar1 + iVar3);
  iVar1 = param_1[0x6e];
  iVar3 = FUN_005eb470();
  (**(code **)(*(int *)param_1[100] + 0x44))(iVar2 + iVar1 + iVar3);
  return;
}

