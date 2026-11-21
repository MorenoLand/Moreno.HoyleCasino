// FUN_005f3130  005f3130

void __fastcall FUN_005f3130(int param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined *local_c4;
  undefined8 local_88;
  undefined4 *local_80;
  char local_7c [108];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = FUN_005f3e70();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  if (((*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) && (DAT_00795fa1 == '\0')) ||
     ((DAT_015e55d3 == '\0' && (DAT_015e55d4 == '\0')))) {
    (**(code **)(*DAT_007960d8 + 0x10))();
  }
  else {
    local_c = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    if (local_c < 1) {
      local_c = 1;
    }
    if (0x3c < local_c) {
      local_c = 1;
    }
    if (2 < local_c) {
      local_c = 2;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) - local_c;
    while (iVar6 = local_c + -1, local_c != 0) {
      DAT_00795094 = DAT_00795094 + 1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      local_c = iVar6;
      if (*(int *)(param_1 + 0x2c) != -1) {
        FUN_005f3c30(*(undefined4 *)(param_1 + 0x2c));
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_005fc250();
      }
      if (DAT_015e55e4 != (int *)0x0) {
        iVar6 = FUN_005f3fe0();
        if ((iVar6 == 0) || (iVar6 = FUN_005f3fe0(), *(char *)(iVar6 + 0x1b1) != '\0')) {
          if (DAT_015e55ec == '\0') {
            (**(code **)(*DAT_015e55e4 + 0xc))();
          }
        }
        else {
          piVar4 = (int *)FUN_005f3fe0();
          (**(code **)(*piVar4 + 8))();
          (**(code **)(*DAT_015e55e4 + 0x10))();
        }
      }
      if ((DAT_007960d8 != (int *)0x0) && (DAT_007960d8[2] != 0)) {
        FUN_0060acc0();
      }
      local_8 = 0;
      while (iVar6 = FUN_0060c9a0(), local_8 < iVar6) {
        local_80 = (undefined4 *)FUN_0060ca40(local_8);
        if (((local_80[0x69] == 0) && (cVar2 = FUN_005f8910(), cVar2 != '\0')) &&
           (DAT_00795fa5 != '\0')) {
          FUN_005f9a80();
        }
        FUN_00613e70();
        local_8 = local_8 + 1;
      }
      local_8 = 0;
      local_80 = (undefined4 *)FUN_0060ca40(0);
      while (iVar6 = FUN_0060c9a0(), local_8 < iVar6) {
        cVar2 = FUN_005f89b0();
        if (cVar2 == '\0') {
          local_8 = local_8 + 1;
        }
        else {
          if (local_80 != (undefined4 *)0x0) {
            (**(code **)*local_80)(1);
          }
          local_8 = 0;
        }
        local_80 = (undefined4 *)FUN_0060ca40(local_8);
      }
    }
    DAT_00795090 = *(int *)(param_1 + 0x1c);
    local_c = iVar6;
    if (DAT_0079508c + 0x3c <= DAT_00795090) {
      if (DAT_00795078 != (int *)0x0) {
        DAT_00795fac = DAT_00795fac * 100;
        if (DAT_00795fa5 == '\0') {
          local_c4 = &DAT_006d67e8;
        }
        else {
          local_c4 = &DAT_006d67ec;
        }
        uVar5 = DAT_00795fac / DAT_00795fa8;
        DAT_00795fa8 = DAT_00795fa8 + 1;
        uVar3 = FUN_00686cc0(local_c4,uVar5,DAT_00795090 - DAT_0079508c);
        sprintf(local_7c,"%d doits.   OD%s %li",uVar3);
        (**(code **)(*DAT_00795078 + 0xb4))(local_7c);
        iVar6 = FUN_005ef050();
        FUN_005ecc60(iVar6 + 8);
        iVar6 = FUN_005ef130();
        FUN_005eccb0(iVar6 + 2);
        DAT_00795fa8 = 0;
        DAT_00795fac = 0;
      }
      DAT_0079508c = DAT_00795090;
      DAT_00795094 = 0;
    }
    if (((DAT_0079507c != (int *)0x0) && (DAT_00795080 != (int *)0x0)) &&
       (DAT_00795084 != (int *)0x0)) {
      local_88 = FUN_005ea470();
      uVar1 = (ulonglong)local_88 >> 0x20;
      uVar3 = (undefined4)local_88;
      FUN_005ea400(&local_88);
      local_88._0_4_ = (int)local_88 - *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1a8) + 0x28);
      local_88._4_4_ = local_88._4_4_ - *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1a8) + 0x2c);
      sprintf(local_7c," Screen: %i,%i",uVar3,(int)uVar1);
      (**(code **)(*DAT_0079507c + 0xb4))(local_7c);
      sprintf(local_7c," Client: %i,%i",(int)local_88,local_88._4_4_);
      (**(code **)(*DAT_00795080 + 0xb4))(local_7c);
      iVar6 = FUN_005f3fe0();
      if (iVar6 == 0) {
        sprintf(local_7c," Dialog: %i,%i",(int)local_88,local_88._4_4_);
      }
      else {
        FUN_005f3fe0();
        iVar6 = FUN_005f84f0();
        iVar6 = FUN_005f84d0(local_88._4_4_ - iVar6);
        sprintf(local_7c," Dialog: %i,%i",(int)local_88 - iVar6);
      }
      (**(code **)(*DAT_00795084 + 0xb4))(local_7c);
    }
    (**(code **)(*DAT_007960d8 + 0x10))();
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

