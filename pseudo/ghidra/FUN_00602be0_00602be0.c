// FUN_00602be0  00602be0

void __fastcall FUN_00602be0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [16];
  
  if (param_1[0x13] == 0) {
    param_1[0x6e] = 0;
    iVar2 = FUN_005f5550();
    param_1[0x70] = iVar2;
    param_1[0x6f] = 0;
    iVar2 = FUN_005f5590();
    param_1[0x71] = iVar2;
  }
  else {
    piVar1 = (int *)FUN_005ebf80(local_14);
    param_1[0x6e] = *piVar1;
    param_1[0x6f] = piVar1[1];
    param_1[0x70] = piVar1[2];
    param_1[0x71] = piVar1[3];
  }
  FUN_005ecc60((param_1[0x70] - param_1[0x6e]) + 1);
  FUN_005eccb0((param_1[0x71] - param_1[0x6f]) + 1);
  iVar3 = (**(code **)(*param_1 + 0x54))();
  iVar2 = param_1[0x6f];
  iVar4 = FUN_005eb4b0();
  iVar3 = (**(code **)(*param_1 + 0x4c))(iVar3 + iVar2 + iVar4);
  iVar2 = param_1[0x6e];
  iVar4 = FUN_005eb470();
  (**(code **)(*(int *)param_1[100] + 0x44))(iVar3 + iVar2 + iVar4);
  return;
}

