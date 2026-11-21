// FUN_00661a40  00661a40

void __thiscall FUN_00661a40(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *local_290;
  undefined4 local_28c;
  int *local_288;
  int local_250;
  int local_240;
  undefined4 local_234;
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  undefined4 local_218;
  int *local_214;
  undefined1 local_210 [4];
  int aiStack_20c [102];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined **local_5c [7];
  int *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aca01;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = FUN_005fb4c0(0x67);
  local_18 = FUN_00606490(uVar1);
  if (param_2 != 100) {
    if (param_2 == 0x65) {
      (**(code **)(*(int *)param_1[0x21] + 0x70))();
      (**(code **)(*(int *)param_1[0x22] + 0x70))();
      local_214 = (int *)FUN_005fb2b0(local_18 + 0x14);
      piVar2 = CPropertySection::Get((CPropertySection *)param_1[0x20],local_18 + 1,(ulong *)0x67);
      local_234 = (**(code **)(*piVar2 + 0x4c))();
      local_230 = (**(code **)(*piVar2 + 0x54))();
      iVar4 = FUN_005f8550();
      iVar5 = (**(code **)(*local_214 + 0x4c))();
      iVar6 = FUN_005eb470();
      local_22c = iVar4 - (iVar5 + iVar6);
      local_228 = 0;
      local_224 = (**(code **)(*piVar2 + 0x4c))();
      local_224 = local_224 + -500;
      local_220 = 0;
      local_21c = (**(code **)(*piVar2 + 0x4c))();
      local_21c = local_21c + 300;
      local_218 = 0;
      piVar2[0x61] = 1;
      pvVar3 = operator_new(0x4c);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_288 = (int *)0x0;
      }
      else {
        local_288 = (int *)FUN_006632a0(param_1[1],&local_234,1);
      }
      local_8 = 0xffffffff;
      iVar4 = (int)(0x1e / (longlong)piVar2[0x61]);
      local_288[0x12] = iVar4;
      local_288[0x11] = (int)(1.0 / (float)iVar4);
      (**(code **)(*local_288 + 4))(piVar2);
      FUN_005f6050(local_288);
    }
    else if (-1 < param_2) {
      FUN_0062fde0("Click on %d\n",param_2);
      local_18 = local_18 + 1;
      local_64 = FUN_00661500(local_18);
      pvVar3 = operator_new(0x220);
      local_8 = 1;
      if (pvVar3 == (void *)0x0) {
        local_28c = 0;
      }
      else {
        local_28c = FUN_00625bf0();
      }
      local_8 = 0xffffffff;
      FUN_005fa3c0(local_28c,local_60,local_18 + 1,0x67,0,0,0,local_18 * 4 + 2,0,0xffffffff,
                   0xffffffff,0xffffffff,0xffffffff);
      local_40 = CPropertySection::Get((CPropertySection *)param_1[0x20],local_18 + 1,(ulong *)0x67)
      ;
      FUN_00625c30(1);
      local_1c = (int *)FUN_005f9ce0(0,local_18 + 0x14,0x30d5f7,local_64,0,local_18 * 4 + 2,0,0xff,0
                                    );
      FUN_005eb000(1);
      FUN_005ff5a0(local_1c);
      local_14 = local_1c;
      for (local_240 = 0; *(int *)(&DAT_0075db00 + local_240 * 0x10) != 0; local_240 = local_240 + 1
          ) {
        if (*(int *)(&DAT_0075db00 + local_240 * 0x10) == param_2) {
          local_1c = (int *)FUN_005f9ce0(0,0,*(undefined4 *)(&DAT_0075db04 + local_240 * 0x10),
                                         local_64,0,local_18 * 4 + 3,0,0xff,0);
          FUN_005eb000(*(undefined4 *)(&DAT_0075db08 + local_240 * 0x10));
          (**(code **)(*local_1c + 0xb0))(*(undefined4 *)(&DAT_0075db0c + local_240 * 0x10));
          FUN_005ff5a0(local_1c);
          iVar4 = (**(code **)(*local_14 + 0x4c))();
          iVar5 = FUN_005eb470();
          iVar6 = FUN_005f8550();
          iVar5 = iVar4 + iVar5 + 0x1e;
          iVar4 = FUN_005f5550();
          (**(code **)(*local_1c + 0x48))(((iVar6 - iVar5) / 2 + iVar5) - iVar4 / 2);
          break;
        }
      }
      uVar7 = FUN_005f9ce0(0,0,0x30d5fa,local_64,0,local_18 * 4 + 3,1,0xff,0);
      FUN_005ff5a0(uVar7);
      if (local_18 == 1) {
        local_1c = (int *)FUN_005f9ce0(0,100,0x30d5f7,0,0,4,0,0xff,0);
        FUN_005eb000(0);
        FUN_005f9de0(0,0x65,0x30d5f9,0,0,local_18 * 4 + 1,&PTR_006b27f8,0xffffffff,0xffffffff,
                     0xffffffff,0xffffffff,0);
      }
      (**(code **)(*param_1 + 0x44))(param_2,local_210);
      local_74 = 0x30d5f5;
      local_70 = 0;
      local_6c = 0;
      FUN_00662ef0();
      local_5c[0] = SubScreenLayoutManager::vftable;
      FUN_00663060(&DAT_00770b08);
      FUN_00662f30(&local_74);
      for (local_250 = 0; aiStack_20c[local_250] != -1; local_250 = local_250 + 1) {
        if (aiStack_20c[local_250] != -2) {
          FUN_00662360(aiStack_20c[local_250],0,local_5c,local_18,local_40);
        }
      }
      FUN_006064e0(local_18);
      FUN_00662ce0();
      FUN_00625e00(1);
      param_1[0x23] = 0;
      iVar4 = FUN_005f8550();
      iVar5 = (**(code **)(*local_14 + 0x4c))();
      iVar6 = FUN_005eb470();
      local_3c = iVar4 - (iVar5 + iVar6);
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      iVar4 = FUN_005f8550();
      iVar5 = (**(code **)(*local_14 + 0x4c))();
      iVar6 = FUN_005eb470();
      local_2c = (iVar4 - (iVar5 + iVar6)) + -200;
      local_28 = 0;
      local_24 = 300;
      local_20 = 0;
      (**(code **)(*local_40 + 0x44))(local_3c,local_38);
      local_40[0x61] = 1;
      pvVar3 = operator_new(0x4c);
      local_8 = 2;
      if (pvVar3 == (void *)0x0) {
        local_290 = (int *)0x0;
      }
      else {
        local_290 = (int *)FUN_006632a0(0,&local_3c,1);
      }
      local_8 = 0xffffffff;
      local_68 = local_290;
      iVar4 = (int)(0x1e / (longlong)local_40[0x61]);
      local_290[0x12] = iVar4;
      local_290[0x11] = (int)(1.0 / (float)iVar4);
      (**(code **)(*local_290 + 4))(local_40);
      FUN_005f6050(local_68);
    }
  }
  ExceptionList = local_10;
  return;
}

