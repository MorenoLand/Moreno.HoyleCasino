// FUN_005a9010  005a9010

void __thiscall FUN_005a9010(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7a50;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005cca50(param_2,param_3,param_4,param_5);
  if (param_1[0x330] != 0x65) {
    iVar3 = FUN_005eb220(uVar2);
    uVar2 = ((iVar3 < 0x21) - 1 & 0xd) + 0x21;
    cVar1 = FUN_005b60a0(param_2,param_3);
    if (cVar1 != '\0') {
      iVar3 = FUN_005b4e50(param_2);
      if ((iVar3 == 0) || (iVar3 = FUN_005b4e50(param_2), iVar3 == 2)) {
        iVar3 = (**(code **)(*param_1 + 0xd8))(param_2,param_3);
        iVar4 = (**(code **)(*param_1 + 0xe0))(param_2,param_3);
        iVar3 = (**(code **)(*param_1 + 0xd4))(param_2,param_3,iVar3 + iVar4 * param_4);
        (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0x44))
                  (iVar3 - uVar2 / 2);
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0xd8))(param_2,param_3);
        iVar4 = (**(code **)(*param_1 + 0xe0))(param_2,param_3);
        uVar6 = (**(code **)(*param_1 + 0xd4))(param_2,param_3,iVar3 + iVar4 * param_4);
        (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0x44))
                  (uVar6);
      }
      pvVar5 = operator_new(400);
      local_8 = 0;
      if (pvVar5 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_005f5f50();
      }
      local_8 = 0xffffffff;
      param_1[param_3 * 0x1e + param_4 + 0x2b8] = local_24;
      uVar9 = 0xffffffff;
      uVar6 = FUN_005f53c0(0xffffffff);
      uVar7 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0x54)
              )(uVar6);
      iVar3 = (**(code **)(*(int *)param_1[param_2 * 0x78 + param_3 * 0x1e + param_4 + 0x5f] + 0x4c)
              )(uVar7);
      iVar3 = iVar3 + uVar2;
      uVar8 = (**(code **)(*param_1 + 0xcc))(iVar3);
      FUN_005eae80(uVar8,iVar3,uVar7,uVar6,uVar9);
      iVar3 = FUN_0062fbf0(3);
      (**(code **)(*(int *)param_1[param_3 * 0x1e + param_4 + 0x2b8] + 0xb0))
                ((0x10 - param_5) * 3 + iVar3);
      FUN_005eb700(1);
      (**(code **)(*(int *)param_1[param_3 * 0x1e + param_4 + 0x2b8] + 0x74))();
    }
  }
  ExceptionList = local_10;
  return;
}

