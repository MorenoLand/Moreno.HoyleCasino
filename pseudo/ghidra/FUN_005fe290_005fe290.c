// FUN_005fe290  005fe290

void __thiscall FUN_005fe290(undefined4 param_1,int *param_2,int param_3,int param_4,char param_5)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_7c;
  undefined4 local_78;
  int local_54;
  undefined1 local_4c [52];
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aa707;
  local_10 = ExceptionList;
  local_18 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((param_2 != (int *)0x0) && (*param_2 != -1)) {
    if (param_3 == -1) {
      param_3 = FUN_005fe7f0(local_18);
    }
    pvVar1 = operator_new(0x204);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = FUN_005fc850(*param_2,param_1);
    }
    local_8 = 0xffffffff;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar2 = (**(code **)(*DAT_015e55e8 + 0x5c))(0xffffffff,0);
    uVar3 = (**(code **)(*DAT_015e55e8 + 0x58))(uVar2);
    uVar4 = (**(code **)(*DAT_015e55e8 + 0x54))(uVar3);
    uVar5 = (**(code **)(*DAT_015e55e8 + 0x14))(param_2[1],uVar4);
    piVar6 = (int *)FUN_005f9de0(local_78,*param_2,param_3,0,0,1,uVar5,uVar4,uVar3,uVar2,uVar8,uVar9
                                );
    if (*param_2 == -2) {
      (**(code **)(*piVar6 + 0xb0))(6);
    }
    if (param_5 == '\0') {
      piVar6[0x7b] = -1;
    }
    else {
      if (param_2[2] != -1) {
        pvVar1 = operator_new(0x178);
        local_8 = 1;
        if (pvVar1 == (void *)0x0) {
          local_7c = 0;
        }
        else {
          local_7c = FUN_005eaaf0();
        }
        local_8 = 0xffffffff;
        piVar6[0x7d] = local_7c;
        *(undefined4 *)(piVar6[0x7d] + 4) = param_1;
        uVar8 = 0xffffffff;
        uVar5 = 2;
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = (**(code **)(*DAT_015e55e8 + 0x60))(0,0,2,0xffffffff);
        FUN_005eae80(uVar2,uVar3,uVar4,uVar5,uVar8);
      }
      piVar6[0x7b] = param_2[2];
    }
    FUN_005ef340(10,0);
    FUN_005ef310(0x11);
    if ((char)param_2[3] != '\0') {
      FUN_005fe770(CONCAT31((char)param_2[3] >> 7,(char)param_2[3]),local_4c);
      FUN_005fd730(local_4c);
    }
    if (param_4 != -2) {
      if (param_4 == -1) {
        FUN_0060c890(piVar6);
        FUN_0060c7d0(piVar6);
      }
      else {
        local_54 = -2;
        iVar7 = abs(param_4);
        iVar7 = FUN_005ff060(iVar7);
        if ((iVar7 != 0) && (local_54 = FUN_0060cac0(iVar7), param_4 < 0)) {
          local_54 = local_54 + -1;
        }
        if (local_54 < -1) {
          FUN_0060c890(piVar6);
          if (piVar6 != (int *)0x0) {
            (**(code **)*piVar6)(1);
          }
          goto LAB_005fe618;
        }
        if (local_54 == -1) {
          FUN_0060c890(piVar6);
          FUN_0060c7d0(piVar6);
        }
        else {
          FUN_0060c890(piVar6);
          uVar2 = FUN_0060ca40(local_54);
          FUN_0060cb20(uVar2,piVar6);
        }
      }
    }
    if ((param_5 != '\0') && (param_2[2] != -1)) {
      FUN_005f2370(param_2[2],0,1);
    }
    FUN_005fdd10();
  }
LAB_005fe618:
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

