// FUN_005b9ab0  005b9ab0

void __thiscall FUN_005b9ab0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_41c;
  int local_418;
  int local_414;
  char local_40c [1004];
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  FUN_005b9320(0);
  local_c = FUN_005f8550();
  local_c = local_c + -0x28;
  local_8 = FUN_005f8570();
  local_8 = local_8 + -0x28;
  local_18 = 0x28;
  local_14 = 0x28;
  local_418 = 0x28;
  local_414 = 0x28;
  local_10 = 0;
  uVar13 = 0xf0;
  uVar12 = 0xf0;
  uVar11 = 0xf0;
  uVar10 = 0xf0;
  uVar9 = 0xf0;
  uVar8 = 0xf0;
  uVar7 = 0;
  uVar6 = 0;
  iVar4 = param_2;
  uVar1 = FUN_005f8570(0,0,param_2,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0);
  uVar2 = FUN_005f8550(uVar1);
  FUN_005fa880(0,local_1c + 900,uVar2,uVar1,uVar6,uVar7,iVar4,uVar8,uVar9,uVar10,uVar11,uVar12,
               uVar13);
  FUN_005b9440(local_1c + 900,local_1c);
  *(int *)(param_1 + 0x24) = param_2 + 2;
  local_41c = 0;
  do {
    if (0x9b < local_41c) {
      FUN_005b94f0();
      __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(&DAT_00770028 + local_41c * 0xc) != 0) {
      sprintf(local_40c,"%03d: %s",local_41c,param_3);
      piVar3 = (int *)FUN_005fa5b0(0,local_41c + 1000,local_40c,local_41c,10,10,local_418,local_414,
                                   param_2 + 1,5,0xffffffff);
      FUN_005ef180();
      iVar4 = (**(code **)(*piVar3 + 0x54))();
      iVar5 = FUN_005f5590();
      if (local_8 < iVar4 + iVar5) {
        local_418 = local_10 + 0x14;
        local_414 = local_14;
        local_10 = 0;
        (**(code **)(*piVar3 + 0x44))(local_418,local_14);
      }
      iVar4 = FUN_005f5550();
      if (iVar4 < local_c - local_18) {
        iVar4 = (**(code **)(*piVar3 + 0x4c))();
        iVar5 = FUN_005f5550();
        if (local_c < iVar4 + iVar5) {
          FUN_005fbd40(piVar3,0xffffffff);
          local_1c = local_1c + 1;
          FUN_005b9320(local_1c);
          local_418 = local_18;
          local_414 = local_14;
          uVar13 = 0xff;
          uVar12 = 0xff;
          uVar11 = 0xff;
          uVar10 = 0xff;
          uVar9 = 0xff;
          uVar8 = 0xff;
          uVar7 = 0;
          uVar6 = 0;
          iVar4 = param_2;
          uVar1 = FUN_005f8570(0,0,param_2,0xff,0xff,0xff,0xff,0xff,0xff);
          uVar2 = FUN_005f8550(uVar1);
          FUN_005fa880(0,local_1c + 900,uVar2,uVar1,uVar6,uVar7,iVar4,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13);
          FUN_005b9440(local_1c + 900,local_1c);
          local_41c = local_41c + -1;
          goto LAB_005b9bb7;
        }
      }
      FUN_005b9440(local_41c + 1000,local_1c);
      iVar4 = FUN_005f5590();
      local_414 = iVar4 + local_414;
      iVar4 = (**(code **)(*piVar3 + 0x4c))();
      iVar5 = FUN_005f5550();
      if (local_10 < iVar4 + iVar5) {
        iVar4 = (**(code **)(*piVar3 + 0x4c))();
        local_10 = FUN_005f5550();
        local_10 = iVar4 + local_10;
      }
    }
LAB_005b9bb7:
    local_41c = local_41c + 1;
  } while( true );
}

