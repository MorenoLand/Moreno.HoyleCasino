// FUN_005eb260  005eb260

void __thiscall FUN_005eb260(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = false;
  if ((param_1[0x55] != param_2) || (param_1[0x56] != param_3)) {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0xac))();
  }
  param_1[0x55] = param_2;
  param_1[0x56] = param_3;
  if (param_1[0x5d] == 0) {
    FUN_005f5110(param_1[0x55],param_1[0x56]);
  }
  else {
    uVar2 = FUN_00616450(param_1[0x59],param_1[0x57]);
    uVar3 = FUN_00616410(param_1[0x59],param_1[0x57]);
    (**(code **)(*param_1 + 0x78))(uVar3,uVar2);
    iVar4 = FUN_006164d0(param_1[0x59],param_1[0x57]);
    iVar4 = iVar4 * param_1[0x10] + param_1[0x56];
    iVar5 = FUN_00616490(param_1[0x59],param_1[0x57]);
    FUN_005f5110(iVar5 * param_1[0x10] + param_1[0x55],iVar4);
  }
  if (bVar1) {
    (**(code **)(*param_1 + 0xac))();
  }
  return;
}

