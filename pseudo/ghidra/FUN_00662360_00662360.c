// FUN_00662360  00662360

int * __thiscall
FUN_00662360(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c8;
  undefined4 *local_3c4;
  undefined4 local_3c0;
  undefined1 local_3b8 [8];
  void *local_3b0;
  undefined4 local_3ac;
  undefined4 *local_3a8;
  undefined4 *local_3a4;
  void *local_3a0;
  undefined4 local_39c;
  undefined4 *local_398;
  undefined4 local_394;
  int local_390;
  undefined1 local_38c [8];
  int local_384;
  int local_37c;
  undefined1 local_378 [4];
  int aiStack_374 [102];
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  undefined4 local_1c8;
  char local_1c1;
  undefined1 local_1c0 [412];
  int *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aca49;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = FUN_00661500(param_5);
  (**(code **)*param_4)(&local_1dc,uVar2);
  local_24 = (int *)0x0;
  if (param_3 == (undefined4 *)0x0) {
    (**(code **)(*param_1 + 0x48))(param_2,&local_1d4);
  }
  else {
    local_1d4 = *param_3;
    local_1d0 = param_3[1];
    local_1cc = param_3[2];
    local_1c8 = param_3[3];
  }
  if ((-1 < local_1cc) &&
     (cVar1 = (**(code **)(*param_1 + 0x44))(local_1cc,local_1c0), cVar1 == '\0')) {
    FUN_005e9f20("0 && \"Goto submenu requested without proper menu definition (see GetGameMenus)\""
                 ,"..\\Shared\\MainNavigation.cpp",0x260);
    local_1cc = -1;
  }
  local_1c1 = '\0';
  if (-1 < local_1cc) {
    (**(code **)(*param_1 + 0x44))(local_1cc,local_378);
    for (local_37c = 0; aiStack_374[local_37c] != -1; local_37c = local_37c + 1) {
      (**(code **)(*param_1 + 0x48))(aiStack_374[local_37c],local_38c);
      if (-1 < local_384) {
        local_1c1 = '\x01';
        break;
      }
    }
  }
  local_1c = 0x30d5f5;
  local_18 = param_1[0x24];
  local_14 = 0;
  local_390 = 0;
  do {
    if (*(int *)(&DAT_0075dfd0 + local_390 * 0x10) == 0) {
LAB_00662579:
      if (local_1c1 == '\0') {
        if (local_1cc < 0) {
          local_3a8 = operator_new(0x1e8);
          local_8 = 1;
          if (local_3a8 == (undefined4 *)0x0) {
            local_3c4 = (undefined4 *)0x0;
          }
          else {
            FUN_00603120(0,0,0);
            *local_3a8 = NavButton::vftable;
            local_3c4 = local_3a8;
          }
          local_3a4 = local_3c4;
          local_8 = 0xffffffff;
          local_398 = local_3c4;
          uVar9 = 0xffffffff;
          uVar8 = 0xffffffff;
          uVar7 = 0xffffffff;
          uVar6 = 0x4d;
          uVar5 = local_1d0;
          uVar4 = (**(code **)(*DAT_015e55e8 + 0x14))
                            (local_1d0,0x4d,0xffffffff,0xffffffff,0xffffffff,0);
          local_24 = (int *)FUN_005f9de0(local_398,param_2,local_1c,local_1dc,local_1d8,
                                         param_5 * 4 + 3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
          FUN_00603190(param_1[0x24] * 2 + 0x30d5f4,param_1[0x24] * 2 + 0x30d5f5,0);
        }
        else {
          local_3a0 = operator_new(0x208);
          local_8 = 0;
          if (local_3a0 == (void *)0x0) {
            local_3c0 = 0;
          }
          else {
            local_3c0 = FUN_006612a0(local_1cc,2,0,2);
          }
          local_39c = local_3c0;
          local_8 = 0xffffffff;
          local_394 = local_3c0;
          uVar8 = 0xffffffff;
          uVar7 = 0xffffffff;
          uVar6 = 0x4d;
          uVar5 = local_1d0;
          uVar4 = (**(code **)(*DAT_015e55e8 + 0x14))
                            (local_1d0,0x4d,0xffffffff,0xffffffff,0xffffffff);
          local_24 = (int *)FUN_005faee0(local_394,-param_2,local_1c,local_1dc,local_1d8,
                                         param_5 * 4 + 3,param_2,0,uVar4,uVar5,uVar6,uVar7,uVar8);
          FUN_00661300(param_1[0x24] * 2 + 0x30d5f4,param_1[0x24] * 2 + 0x30d5f5,0);
        }
      }
      else {
        local_3b0 = operator_new(0x1e8);
        local_8 = 2;
        if (local_3b0 == (void *)0x0) {
          local_3c8 = 0;
        }
        else {
          local_3c8 = FUN_00603120(0,0,0);
        }
        local_3ac = local_3c8;
        local_8 = 0xffffffff;
        uVar9 = 0xffffffff;
        uVar8 = 0xffffffff;
        uVar7 = 0xffffffff;
        uVar6 = 0x4d;
        uVar5 = local_1d0;
        uVar4 = (**(code **)(*DAT_015e55e8 + 0x14))
                          (local_1d0,0x4d,0xffffffff,0xffffffff,0xffffffff,0);
        local_24 = (int *)FUN_005f9de0(local_3ac,param_2,local_1c,local_1dc,local_1d8,
                                       param_5 * 4 + 3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
        FUN_00603190(param_1[0x24] * 2 + 0x30d5f4,param_1[0x24] * 2 + 0x30d5f5,0);
      }
      FUN_005ff5a0(local_24);
      FUN_00602e00(0x11);
      FUN_00602e30(0x1c,0xffffffff);
      FUN_005eb000(local_18);
      iVar3 = (**(code **)(*local_24 + 0x4c))();
      (**(code **)(*local_24 + 0x48))(iVar3 + local_20);
      param_1[0x24] = param_1[0x24] + 1;
      if (param_1[0x25] <= param_1[0x24]) {
        param_1[0x24] = 0;
      }
      FUN_006630e0(local_3b8);
      ExceptionList = local_10;
      return local_24;
    }
    if (*(int *)(&DAT_0075dfd0 + local_390 * 0x10) == param_2) {
      iVar3 = local_390 * 0x10;
      local_1c = *(undefined4 *)(&DAT_0075dfd4 + iVar3);
      local_18 = *(int *)(&DAT_0075dfd8 + iVar3);
      local_14 = *(undefined4 *)(&DAT_0075dfdc + iVar3);
      goto LAB_00662579;
    }
    local_390 = local_390 + 1;
  } while( true );
}

