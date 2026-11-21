// FUN_00442850  00442850

void __fastcall FUN_00442850(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_90;
  char local_8c [36];
  undefined8 local_68;
  int local_60 [8];
  undefined4 local_40;
  undefined4 local_3c;
  char local_38 [28];
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069eab4;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_60[0] = 0x130;
  local_60[1] = 0x141;
  local_60[2] = 0x152;
  local_60[3] = 0x163;
  local_60[4] = 0x174;
  local_60[5] = 0;
  local_60[6] = 0;
  local_1c = uVar1;
  FUN_005f1ad0(0x1d4d6);
  FUN_00443300(uVar1);
  local_14 = 0;
  do {
    if (2 < local_14) {
      for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 0x114 + local_14 * 4) == 0) {
          pvVar2 = operator_new(0x178);
          local_8 = 1;
          if (pvVar2 == (void *)0x0) {
            local_fc = 0;
          }
          else {
            local_fc = FUN_005eaaf0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x114 + local_14 * 4) = local_fc;
          FUN_005eae80(local_14 + 0x1d4fd,local_14 * 0x1cf + 0x25,0x43,2,0xffffffff);
        }
        (**(code **)(**(int **)(param_1 + 0x114 + local_14 * 4) + 0x74))();
      }
      iVar3 = FUN_005fb300(3);
      if (iVar3 == 0) {
        FUN_005f9de0(0,3,0x1d4f3,0x1e8,0x1b2,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                     0xffffffff,0);
      }
      piVar4 = (int *)FUN_005fb300(3);
      (**(code **)(*piVar4 + 0x74))();
      iVar3 = FUN_005fb300(4);
      if (iVar3 == 0) {
        FUN_005f9de0(0,4,0x1d4f2,0x1ac,0x18c,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                     0xffffffff,0);
      }
      piVar4 = (int *)FUN_005fb300(4);
      (**(code **)(*piVar4 + 0x74))();
      if (DAT_00795f94 == '\0') {
        if (*(int *)(param_1 + 0x110) == 0) {
          pvVar2 = operator_new(0x184);
          local_8 = 2;
          if (pvVar2 == (void *)0x0) {
            local_108 = 0;
          }
          else {
            local_108 = FUN_005f5bf0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 0x110) = local_108;
          FUN_005eae80(0x1d4f8,0,0xffffff74,3,0xffffffff);
        }
        (**(code **)(**(int **)(param_1 + 0x110) + 0x74))();
        pvVar2 = operator_new(0x1c);
        local_8 = 3;
        if (pvVar2 == (void *)0x0) {
          local_10c = 0;
        }
        else {
          local_10c = FUN_00600a70(0);
        }
        local_8 = 0xffffffff;
        FUN_005f5d50(local_10c);
      }
      for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
        if (*(int *)(param_1 + 200 + local_14 * 4) == 0) {
          pvVar2 = operator_new(0x178);
          local_8 = 4;
          if (pvVar2 == (void *)0x0) {
            local_110 = 0;
          }
          else {
            local_110 = FUN_005eaaf0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 200 + local_14 * 4) = local_110;
          FUN_005eae80(0x1d4d7,0x8b,local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)],1,
                       0xffffffff);
        }
        (**(code **)(**(int **)(param_1 + 200 + local_14 * 4) + 0x44))
                  (0x8b,local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)]);
        (**(code **)(**(int **)(param_1 + 200 + local_14 * 4) + 0xb0))(4 - local_14);
        (**(code **)(**(int **)(param_1 + 200 + local_14 * 4) + 0x74))();
        if (*(int *)(param_1 + 0xdc + local_14 * 4) == 0) {
          pvVar2 = operator_new(0x1d0);
          local_8 = 5;
          if (pvVar2 == (void *)0x0) {
            local_114 = 0;
          }
          else {
            local_114 = FUN_005ec5a0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 0xdc + local_14 * 4) = local_114;
          FUN_005ec8f0(&PTR_006b27f8,0x6a,100,0xf,0x154,
                       local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)],1,0x30,0xffffffff);
        }
        strcpy(local_38,(char *)&PTR_006b27f8);
        sprintf(local_38,"%d",*(undefined4 *)(DAT_007906f0 + 0x70 + local_14 * 0x78));
        (**(code **)(**(int **)(param_1 + 0xdc + local_14 * 4) + 0xb4))(local_38);
        (**(code **)(**(int **)(param_1 + 0xdc + local_14 * 4) + 0x44))
                  (0x154,local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)]);
        (**(code **)(**(int **)(param_1 + 0xdc + local_14 * 4) + 0x74))();
        if (*(int *)(param_1 + 0xf0 + local_14 * 4) == 0) {
          pvVar2 = operator_new(0x1d0);
          local_8 = 6;
          if (pvVar2 == (void *)0x0) {
            local_118 = 0;
          }
          else {
            local_118 = FUN_005ec5a0();
          }
          local_8 = 0xffffffff;
          *(undefined4 *)(param_1 + 0xf0 + local_14 * 4) = local_118;
          FUN_005ec8f0("$0.00",0x6a,0xb9,0xf,0x1bd,
                       local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)],2,0x30,0xffffffff);
        }
        local_60[5] = FUN_00445ff0(local_8c,local_14);
        local_18 = local_18 + local_60[5];
        strcpy(local_8c,"$");
        FUN_0064c8d0(local_60[5],local_60[6],local_8c,1,1,1);
        (**(code **)(**(int **)(param_1 + 0xf0 + local_14 * 4) + 0x44))
                  (0x1bd,local_60[*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78)]);
        (**(code **)(**(int **)(param_1 + 0xf0 + local_14 * 4) + 0xb4))(local_8c);
        (**(code **)(**(int **)(param_1 + 0xf0 + local_14 * 4) + 0x74))();
      }
      uVar5 = FUN_0064c8a0(local_18,0);
      local_68 = uVar5;
      FUN_005dcb00(0,uVar5);
      FUN_005d5fb0(uVar5);
      uVar5 = local_68;
      FUN_005dcb00(0,local_68);
      FUN_005d5cf0(uVar5);
      FUN_0043d7a0(local_60[7],local_40,local_3c);
      ExceptionList = local_10;
      __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(param_1 + 0x104 + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x178);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x104 + local_14 * 4) = local_f8;
      FUN_005eae80(local_14 + 0x1d4f5,0,0,2,0xffffffff);
    }
    local_60[local_14 + 7] = -1;
    for (local_90 = 0; local_90 < 5; local_90 = local_90 + 1) {
      if (*(int *)(DAT_007906f0 + 0x6c + local_90 * 0x78) == local_14) {
        (**(code **)(**(int **)(param_1 + 0x104 + local_14 * 4) + 0xb0))(4 - local_90);
        local_60[local_14 + 7] = local_90;
        break;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x104 + local_14 * 4) + 0x74))();
    local_14 = local_14 + 1;
  } while( true );
}

