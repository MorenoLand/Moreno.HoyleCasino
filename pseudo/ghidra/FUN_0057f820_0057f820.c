// FUN_0057f820  0057f820

CMFCToolBarsToolsPropertyPage * __fastcall FUN_0057f820(CMFCToolBarsToolsPropertyPage *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  CVSToolsListBox *pCVar8;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_34;
  int local_30;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6a7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005eaaf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *(undefined ***)param_1 = KenoTicketHand::vftable;
  *(undefined4 *)(param_1 + 0x4078) = 0;
  *(undefined4 *)(param_1 + 0x407c) = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    strcpy((char *)(param_1 + local_14 * 0x10 + 0x39b8),(char *)&PTR_006b27f8);
    *(undefined4 *)(param_1 + local_14 * 4 + 0x4068) = 0;
    *(undefined4 *)(param_1 + local_14 * 4 + 0x39f8) = 0;
    *(undefined4 *)(param_1 + local_14 * 4 + 0x3a08) = 0;
    *(undefined4 *)(param_1 + local_14 * 4 + 0x3a18) = 0;
  }
  for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
    for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
      *(undefined4 *)(param_1 + local_14 * 4 + local_34 * 400 + 0x3a28) = 0;
    }
  }
  local_14 = 0;
  do {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_14) {
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0x4078); local_14 = local_14 + 1) {
        FUN_005e2b90(param_1 + local_14 * 0x10 + 0x39b8,param_1 + local_14 * 0xe10 + 0x178,
                     0xffffffff);
      }
      iVar3 = *(int *)(DAT_007947e0 + 0x98);
      for (local_14 = 0; local_14 < *(int *)(param_1 + 0x4078); local_14 = local_14 + 1) {
        for (local_34 = 0; local_34 < 100; local_34 = local_34 + 1) {
          if ((*(int *)(param_1 + local_34 * 0x24 + local_14 * 0xe10 + 0x194) != 0) &&
             (param_1[local_34 * 0x24 + local_14 * 0xe10 + 0x17c] ==
              (CMFCToolBarsToolsPropertyPage)0x0)) {
            *(int *)(param_1 + local_14 * 4 + 0x3a08) =
                 *(int *)(param_1 + local_14 * 4 + 0x3a08) + 1;
            iVar6 = *(int *)(param_1 + local_34 * 0x24 + local_14 * 0xe10 + 0x194);
            if (((iVar6 <= iVar3) &&
                (iVar3 <= iVar6 + -1 +
                          (int)(char)param_1[local_34 * 0x24 + local_14 * 0xe10 + 0x17a])) ||
               ((iVar6 <= iVar3 + 1000 &&
                (iVar3 + 1000 <=
                 iVar6 + -1 + (int)(char)param_1[local_34 * 0x24 + local_14 * 0xe10 + 0x17a])))) {
              *(int *)(param_1 +
                      *(int *)(param_1 + local_14 * 4 + 0x3a18) * 4 + local_14 * 400 + 0x3a28) =
                   local_34;
              *(int *)(param_1 + local_14 * 4 + 0x3a18) =
                   *(int *)(param_1 + local_14 * 4 + 0x3a18) + 1;
            }
          }
        }
      }
      FUN_00581610(0);
      FUN_005f5300(10);
      FUN_005eacb0();
      FUN_005eb570();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 1;
      if (pvVar7 == (void *)0x0) {
        local_dc = 0;
      }
      else {
        local_dc = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4080) = local_dc;
      (**(code **)(**(int **)(param_1 + 0x4080) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x4080) + 0x40))();
      FUN_005ecc60(0x52);
      FUN_005eccb0(0x14);
      (**(code **)(**(int **)(param_1 + 0x4080) + 0x44))(0x159,0x104);
      (**(code **)(**(int **)(param_1 + 0x4080) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4080) + 0x74))();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 2;
      if (pvVar7 == (void *)0x0) {
        local_e0 = 0;
      }
      else {
        local_e0 = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4084) = local_e0;
      (**(code **)(**(int **)(param_1 + 0x4084) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x34,0xffffffff,CONCAT13(extraout_var_00,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x4084) + 0x40))();
      FUN_005ecc60(0x82);
      FUN_005eccb0(0x19);
      (**(code **)(**(int **)(param_1 + 0x4084) + 0x44))(0x176,0x17a);
      (**(code **)(**(int **)(param_1 + 0x4084) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4084) + 0x74))();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 3;
      if (pvVar7 == (void *)0x0) {
        local_e4 = 0;
      }
      else {
        local_e4 = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4088) = local_e4;
      (**(code **)(**(int **)(param_1 + 0x4088) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var_01,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x4088) + 0x40))();
      FUN_005ecc60(0x1e);
      FUN_005eccb0(0x1a);
      (**(code **)(**(int **)(param_1 + 0x4088) + 0x44))(0x13a,0x10a);
      (**(code **)(**(int **)(param_1 + 0x4088) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4088) + 0x70))();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 4;
      if (pvVar7 == (void *)0x0) {
        local_e8 = 0;
      }
      else {
        local_e8 = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x408c) = local_e8;
      (**(code **)(**(int **)(param_1 + 0x408c) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var_02,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x408c) + 0x40))();
      FUN_005ecc60(0x1e);
      FUN_005eccb0(0x1a);
      (**(code **)(**(int **)(param_1 + 0x408c) + 0x44))(0x169,0x11c);
      (**(code **)(**(int **)(param_1 + 0x408c) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x408c) + 0x70))();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 5;
      if (pvVar7 == (void *)0x0) {
        local_ec = 0;
      }
      else {
        local_ec = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4090) = local_ec;
      (**(code **)(**(int **)(param_1 + 0x4090) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var_03,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x4090) + 0x40))();
      FUN_005ecc60(100);
      FUN_005eccb0(0x1a);
      (**(code **)(**(int **)(param_1 + 0x4090) + 0x44))(0x1b6,0x104);
      (**(code **)(**(int **)(param_1 + 0x4090) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4090) + 0x70))();
      pvVar7 = operator_new(0x1d0);
      local_8._0_1_ = 6;
      if (pvVar7 == (void *)0x0) {
        local_f0 = 0;
      }
      else {
        local_f0 = FUN_005ec5a0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4094) = local_f0;
      (**(code **)(**(int **)(param_1 + 0x4094) + 0xb4))(&PTR_006b27f8);
      FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var_04,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      (**(code **)(**(int **)(param_1 + 0x4094) + 0x40))();
      FUN_005ecc60(100);
      FUN_005eccb0(0x1a);
      (**(code **)(**(int **)(param_1 + 0x4094) + 0x44))(0x1b6,0x11c);
      (**(code **)(**(int **)(param_1 + 0x4094) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4094) + 0x70))();
      pCVar8 = operator_new(0x1e0);
      local_8._0_1_ = 7;
      if (pCVar8 == (CVSToolsListBox *)0x0) {
        local_f4 = 0;
      }
      else {
        local_f4 = CVSToolsListBox::CVSToolsListBox(pCVar8,param_1);
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4320) = local_f4;
      (**(code **)(**(int **)(param_1 + 0x4320) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x4320) + 200))(0x30dfbd);
      (**(code **)(**(int **)(param_1 + 0x4320) + 0x44))(0x1a2,0x101);
      (**(code **)(**(int **)(param_1 + 0x4320) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      FUN_005f53e0(0);
      (**(code **)(**(int **)(param_1 + 0x4320) + 0x74))();
      pCVar8 = operator_new(0x1e0);
      local_8._0_1_ = 8;
      if (pCVar8 == (CVSToolsListBox *)0x0) {
        local_f8 = 0;
      }
      else {
        local_f8 = CVSToolsListBox::CVSToolsListBox(pCVar8,param_1);
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4324) = local_f8;
      (**(code **)(**(int **)(param_1 + 0x4324) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x4324) + 200))(0x30dfbe);
      (**(code **)(**(int **)(param_1 + 0x4324) + 0x44))(0x1a2,0x113);
      (**(code **)(**(int **)(param_1 + 0x4324) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      FUN_005f53e0(1);
      (**(code **)(**(int **)(param_1 + 0x4324) + 0x74))();
      FUN_00602420();
      pvVar7 = operator_new(0x178);
      local_8._0_1_ = 9;
      if (pvVar7 == (void *)0x0) {
        local_fc = 0;
      }
      else {
        local_fc = FUN_005eaaf0();
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4318) = local_fc;
      (**(code **)(**(int **)(param_1 + 0x4318) + 0x40))();
      FUN_005eaf00(0x30dfef);
      (**(code **)(**(int **)(param_1 + 0x4318) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x4318) + 0x70))();
      pvVar7 = operator_new(0x178);
      local_8._0_1_ = 10;
      if (pvVar7 == (void *)0x0) {
        local_100 = 0;
      }
      else {
        local_100 = FUN_005eaaf0();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(param_1 + 0x431c) = local_100;
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x40))();
      FUN_005eaf00(0x30dfea);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x44))(0x13f,0xec);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      (**(code **)(**(int **)(param_1 + 0x431c) + 0x70))();
      for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
        pvVar7 = operator_new(0x1d0);
        local_8._0_1_ = 0xb;
        if (pvVar7 == (void *)0x0) {
          local_104 = 0;
        }
        else {
          local_104 = FUN_005ec5a0();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)(param_1 + local_14 * 4 + 0x4098) = local_104;
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x4098) + 0xb4))(&DAT_006cc040);
        FUN_005ecd00(0x2d,0xffffffff,CONCAT13(extraout_var_05,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x4098) + 0x40))();
        FUN_005ecc60(0x19);
        FUN_005eccb0(0x1a);
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x4098) + 0x6c))
                  (*(int *)(param_1 + 0x20) + 0x32);
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x4098) + 0x70))();
      }
      local_1c = 0x12d;
      for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
            (**(code **)(**(int **)(param_1 +
                                   (local_34 * 10 + local_14 * 0x28 + local_30) * 4 + 0x4098) + 0x44
                        ))(local_30 * 0x15 + 0x134,local_34 * 0x13 + local_1c);
          }
        }
        local_1c = 0x185;
      }
      for (local_14 = 0; local_14 < 0x50; local_14 = local_14 + 1) {
        pvVar7 = operator_new(0x178);
        local_8._0_1_ = 0xc;
        if (pvVar7 == (void *)0x0) {
          local_108 = 0;
        }
        else {
          local_108 = FUN_005eaaf0();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        *(undefined4 *)(param_1 + local_14 * 4 + 0x41d8) = local_108;
        FUN_005eaf00(0x30dfee);
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x41d8) + 0x40))();
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x41d8) + 0x6c))
                  (*(int *)(param_1 + 0x20) + 0x32);
        (**(code **)(**(int **)(param_1 + local_14 * 4 + 0x41d8) + 0x70))();
      }
      local_1c = 0x131;
      for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
        for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
          for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
            (**(code **)(**(int **)(param_1 +
                                   (local_34 * 10 + local_14 * 0x28 + local_30) * 4 + 0x41d8) + 0x44
                        ))(local_30 * 0x15 + 0x132,local_34 * 0x13 + local_1c);
          }
        }
        local_1c = 0x189;
      }
      pCVar8 = operator_new(0x1e0);
      local_8._0_1_ = 0xd;
      if (pCVar8 == (CVSToolsListBox *)0x0) {
        local_10c = 0;
      }
      else {
        local_10c = CVSToolsListBox::CVSToolsListBox(pCVar8,param_1);
      }
      local_8._0_1_ = 0;
      *(undefined4 *)(param_1 + 0x4328) = local_10c;
      (**(code **)(**(int **)(param_1 + 0x4328) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x4328) + 200))(0x30dfeb);
      (**(code **)(**(int **)(param_1 + 0x4328) + 0x44))(0x11d,0xf1);
      (**(code **)(**(int **)(param_1 + 0x4328) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      FUN_005f53e0(2);
      (**(code **)(**(int **)(param_1 + 0x4328) + 0x74))();
      pCVar8 = operator_new(0x1e0);
      local_8._0_1_ = 0xe;
      if (pCVar8 == (CVSToolsListBox *)0x0) {
        local_110 = 0;
      }
      else {
        local_110 = CVSToolsListBox::CVSToolsListBox(pCVar8,param_1);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined4 *)(param_1 + 0x432c) = local_110;
      (**(code **)(**(int **)(param_1 + 0x432c) + 0x40))();
      (**(code **)(**(int **)(param_1 + 0x432c) + 200))(0x30dfec);
      (**(code **)(**(int **)(param_1 + 0x432c) + 0x44))(0x20f,0xf1);
      (**(code **)(**(int **)(param_1 + 0x432c) + 0x6c))(*(int *)(param_1 + 0x20) + 0x32);
      FUN_005f53e0(3);
      (**(code **)(**(int **)(param_1 + 0x432c) + 0x74))();
      *(undefined4 *)(param_1 + 0x4078) = 0;
      local_18 = -1;
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        if ((*(int *)(param_1 + local_14 * 4 + 0x3a18) != 0) &&
           (*(int *)(param_1 + 0x4078) = *(int *)(param_1 + 0x4078) + 1, local_18 == -1)) {
          local_18 = local_14;
        }
      }
      if (*(int *)(param_1 + 0x4078) == 0) {
        FUN_005815a0();
        FUN_005dc610();
      }
      else {
        FUN_00581610(local_18);
        FUN_005822e0();
        FUN_00581b70();
      }
      ExceptionList = local_10;
      return param_1;
    }
    FUN_005dcb00(local_14);
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 2) {
LAB_0057f9f5:
      bVar1 = true;
    }
    else {
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 3) goto LAB_0057f9f5;
      bVar1 = false;
    }
    if (bVar1) {
      if (*(int *)(param_1 + 0x4078) < 3) {
        FUN_005dcb00(local_14);
        uVar5 = FUN_005d5780();
        *(uint *)(param_1 + *(int *)(param_1 + 0x4078) * 4 + 0x4068) = uVar5 & 0xff;
      }
      FUN_005dcb00(local_14);
      iVar3 = FUN_0063aac0();
      iVar3 = strcmp((char *)(param_1 + *(int *)(param_1 + 0x4078) * 0x10 + 0x39b8),
                     (char *)(iVar3 + 4));
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x4078);
        *(int *)(param_1 + 0x4078) = *(int *)(param_1 + 0x4078) + 1;
        FUN_005dcb00(local_14);
        iVar6 = FUN_0063aac0();
        strcpy((char *)(param_1 + iVar3 * 0x10 + 0x39b8),(char *)(iVar6 + 4));
      }
      FUN_005dcb00(local_14);
      uVar2 = FUN_005d5780();
      FUN_0062fde0("Gender:%d \n",uVar2);
    }
    local_14 = local_14 + 1;
  } while( true );
}

