// FUN_0065b1b0  0065b1b0

void __thiscall FUN_0065b1b0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  uVar4 = *(undefined4 *)(DAT_016306a4 + 0x1dc);
  param_1[0x84] = param_3;
  param_1[0x85] = param_2;
  for (local_8 = 0; iVar2 = FUN_006647c0(param_1[0x85]), local_8 < iVar2; local_8 = local_8 + 1) {
    if ((local_8 == 1) && (((param_1[0x85] == 5 || (param_1[0x85] == 0)) || (param_1[0x85] == 2))))
    {
      if (param_1[0x85] == 5) {
        uVar3 = FUN_006651e0(0);
        uVar3 = FUN_00675b40(param_1[0x85],param_1[0x84],uVar3);
        FUN_005eaf00(uVar3);
        (**(code **)(*(int *)param_1[0x88] + 0xb0))(1);
      }
      else {
        uVar3 = FUN_006651e0(0);
        uVar3 = FUN_00675b40(param_1[0x85],param_1[0x84],uVar3);
        FUN_005eaf00(uVar3);
        (**(code **)(*(int *)param_1[0x87] + 0xb0))(4);
      }
    }
    else if (param_1[0x85] == 5) {
      uVar3 = FUN_006651e0(0);
      uVar3 = FUN_00675b40(param_1[0x85],param_1[0x84],uVar3);
      FUN_005eaf00(uVar3);
      if (local_8 == 2) {
        (**(code **)(*(int *)param_1[0x88] + 0xb0))(1);
      }
    }
    else {
      uVar3 = FUN_006651e0(0);
      iVar2 = FUN_00675b40(param_1[0x85],param_1[0x84],uVar3);
      FUN_005eaf00(iVar2 + local_8);
      if ((param_1[0x85] == 0) || (param_1[0x85] == 2)) {
        cVar1 = FUN_00664cb0();
        (**(code **)(*(int *)param_1[local_8 + 0x86] + 0xb0))((int)cVar1);
      }
      else if (param_1[0x85] == 3) {
        uVar3 = FUN_006651e0(0);
        iVar2 = FUN_00675b40(4,param_1[0x84],uVar3);
        FUN_005eaf00(iVar2 + local_8);
      }
      else if (param_1[0x85] == 8) {
        uVar3 = FUN_006651e0(0);
        iVar2 = FUN_00675b40(9,param_1[0x84],uVar3);
        FUN_005eaf00(iVar2 + local_8);
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x54))();
    iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 1);
    (**(code **)(*(int *)param_1[local_8 + 0x86] + 0x44))(iVar2 + 1);
    (**(code **)(*(int *)param_1[local_8 + 0x86] + 0x74))();
    if ((local_8 == 1) && (param_1[0x85] == 5)) {
      (**(code **)(*(int *)param_1[0x87] + 0x70))();
      (**(code **)(*(int *)param_1[0x88] + 0x74))();
    }
    if ((param_1[0x85] == 3) || (param_1[0x85] == 8)) {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 1);
      (**(code **)(*(int *)param_1[local_8 + 0x89] + 0x44))(iVar2 + 1);
      (**(code **)(*(int *)param_1[local_8 + 0x89] + 0x74))();
    }
    else {
      (**(code **)(*(int *)param_1[local_8 + 0x89] + 0x70))();
    }
  }
  if (param_1[0x85] == 0) {
    uVar3 = 0xffffffff;
    iVar2 = FUN_005f53c0(0xffffffff);
    iVar2 = iVar2 + 10;
    uVar4 = (**(code **)(*param_1 + 0x54))(iVar2);
    iVar5 = (**(code **)(*param_1 + 0x4c))(uVar4);
    FUN_005eae80(0x1e84cc,iVar5 + 1,uVar4,iVar2,uVar3);
    (**(code **)(*(int *)param_1[0x8c] + 0xb0))(0);
    (**(code **)(*(int *)param_1[0x8c] + 0x74))();
    uVar3 = 0xffffffff;
    iVar2 = FUN_005f53c0(0xffffffff);
    iVar2 = iVar2 + 4;
    uVar4 = (**(code **)(*param_1 + 0x54))(iVar2);
    iVar5 = (**(code **)(*param_1 + 0x4c))(uVar4);
    FUN_005eae80(0x1e84cc,iVar5 + 1,uVar4,iVar2,uVar3);
    (**(code **)(*(int *)param_1[0x8d] + 0xb0))(1);
    (**(code **)(*(int *)param_1[0x8d] + 0x74))();
    uVar3 = 0xffffffff;
    iVar2 = FUN_005f53c0(0xffffffff);
    iVar2 = iVar2 + 9;
    iVar5 = (**(code **)(*param_1 + 0x54))(iVar2);
    iVar5 = iVar5 + 1;
    iVar6 = (**(code **)(*param_1 + 0x4c))(iVar5);
    iVar6 = iVar6 + 1;
    uVar4 = FUN_005eafc0(iVar6);
    uVar4 = FUN_00675b40(1,0,uVar4);
    FUN_005eae80(uVar4,iVar6,iVar5,iVar2,uVar3);
    (**(code **)(*(int *)param_1[0x8e] + 0x74))();
  }
  else {
    (**(code **)(*(int *)param_1[0x8c] + 0x70))(param_1,uVar4);
    (**(code **)(*(int *)param_1[0x8d] + 0x70))();
    (**(code **)(*(int *)param_1[0x8e] + 0x70))();
  }
  return;
}

