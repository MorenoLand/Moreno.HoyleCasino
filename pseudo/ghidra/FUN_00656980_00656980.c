// FUN_00656980  00656980

void __fastcall FUN_00656980(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *local_88;
  undefined4 local_78 [5];
  int local_64 [10];
  char local_3c [4];
  undefined4 local_38;
  int local_34;
  void *local_30 [9];
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac659;
  local_30[8] = ExceptionList;
  ExceptionList = local_30 + 8;
  local_30[0] = (void *)0x1e84da;
  local_30[1] = (void *)0x1e84db;
  local_30[2] = (void *)0x1e84dc;
  local_30[3] = (void *)0x1e84dd;
  local_30[4] = (void *)0x1e8499;
  local_30[5] = (void *)0x1e849a;
  local_30[6] = (void *)0x1e849b;
  local_30[7] = (void *)0x1e849c;
  local_64[0] = 0;
  local_64[1] = 1;
  local_64[2] = 2;
  local_64[3] = 3;
  local_64[4] = 5;
  local_64[5] = 6;
  local_64[6] = 7;
  local_64[7] = 8;
  local_64[8] = 10;
  local_64[9] = 0xb;
  local_38 = FUN_005f9de0(0,1000,0x1e84a3,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3e9,0x1e84a4,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3ea,0x1e8495,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3eb,0x1e848a,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3ec,0x1e84bb,0,0,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3ee,0x1e848d,0,0,4,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3ed,0x1e8490,0,0,3,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  local_38 = FUN_005f9de0(0,0x3ef,0x1e8485,0,0,5,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                          0xffffffff,0);
  uVar2 = FUN_005f9de0(0,0x3f0,0x1e84aa,0,0,3,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                       0xffffffff,0);
  *(undefined4 *)(param_1 + 0x284) = uVar2;
  FUN_00602ef0(10,10);
  uVar2 = FUN_005f9de0(0,0x3f1,0x1e84ab,0,0,3,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                       0xffffffff,0);
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  FUN_00602ef0(10,10);
  local_78[0] = 1;
  local_78[1] = 2;
  local_78[2] = 3;
  local_78[3] = 4;
  for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
    uVar2 = FUN_005f9de0(0,local_34 + 0x3f2,local_30[local_34],0,0xfffffff6,local_34 + 2,
                         &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x28c + local_34 * 4) = uVar2;
    FUN_006026f0(*(undefined1 *)(local_78 + local_34));
    (**(code **)(**(int **)(param_1 + 0x28c + local_34 * 4) + 0xd0))();
    FUN_00602ef0(10,10);
  }
  for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
    if (*(int *)(param_1 + 0x414 + local_34 * 4) == 0) {
      uVar2 = FUN_005f9de0(0,local_34 + 0x3f6,local_30[local_34 + 4],0,0,2,&PTR_006b27f8,0xffffffff,
                           0xffffffff,0xffffffff,0xffffffff,0);
      *(undefined4 *)(param_1 + 0x414 + local_34 * 4) = uVar2;
      (**(code **)(**(int **)(param_1 + 0x414 + local_34 * 4) + 0x44))(0,0xfffffff6);
    }
  }
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    uVar2 = FUN_005f9ff0(0,0,local_64[local_34] + 0x403,0x3fa,local_34 + 0x1e85ac,0,0,6,
                         &PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x14,0);
    *(undefined4 *)(param_1 + 0x424) = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x29c) + 0x98))(param_1);
  FUN_005eae80(0x1e84de,0,0,5,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x29c) + 0xb0))(DAT_0077089c);
  (**(code **)(*(int *)(param_1 + 0x29c) + 0x74))();
  for (local_34 = 0; local_34 < 0x15; local_34 = local_34 + 1) {
    sprintf(local_3c,"%d",local_34 + 1);
    local_88 = operator_new(0x210);
    local_8 = 0;
    if (local_88 == (undefined4 *)0x0) {
      local_88 = (undefined4 *)0x0;
    }
    else {
      FUN_006060a0();
      *local_88 = FaceMakerDialogPageRadioButton::vftable;
    }
    local_8 = 0xffffffff;
    uVar2 = FUN_005f9ff0(local_88,0,local_34 + 0x473,0x3fc,0x1e84cd,local_34 * 0x1c + 0x1a,0xb2,2,
                         local_3c,0x50,0xffffffff,0xffffffff,0xffffffff,0x14,0);
    *(undefined4 *)(param_1 + 0x428) = uVar2;
  }
  (**(code **)(*(int *)(param_1 + 0x42c) + 0x98))(param_1);
  FUN_005ec8f0(&PTR_006b27f8,0x50,0x62,0x12,0x10f,0xca,3,0x30,0xffffffff);
  (**(code **)(*(int *)(param_1 + 0x42c) + 0x74))();
  uVar2 = FUN_005f9ce0(0,0xffffffff,0x1e84df,0,0,1,0,0xff,0);
  *(undefined4 *)(param_1 + 0x604) = uVar2;
  for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
    uVar2 = FUN_005f9ff0(0,0,local_34 + 0x3fd,0x402,0x1e84e0,0,0,2,&PTR_006b27f8,4,0xffffffff,
                         0xffffffff,0xffffffff,0x14,0);
    *(undefined4 *)(param_1 + 0x600) = uVar2;
  }
  piVar3 = (int *)FUN_00606350(0);
  (**(code **)(*piVar3 + 200))(0x1e84e0);
  piVar3 = (int *)FUN_00606350(1);
  (**(code **)(*piVar3 + 200))(0x1e84e1);
  piVar3 = (int *)FUN_00606350(2);
  (**(code **)(*piVar3 + 200))(0x1e84e2);
  FUN_006064e0(2);
  cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
  if (cVar1 != '\0') {
    local_78[4] = FUN_005faee0(0,0x400,0x231ae1,0x104,0x1a1,1,0x1390,1,&PTR_006b27f8,0x1f,0x1f,0x1f,
                               0x1f);
    FUN_005f9de0(0,0x401,0x231ae0,0xeb,0x185,2,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,
                 0xffffffff,0);
    FUN_00602e30(5,0);
    if (DAT_00795f95 != '\0') {
      for (local_34 = 0x186e1; local_34 < 0x186e5; local_34 = local_34 + 1) {
        FUN_005f2ba0(local_34);
      }
      for (local_34 = 0x186e6; local_34 < 0x186ea; local_34 = local_34 + 1) {
        FUN_005f2ba0(local_34);
      }
    }
  }
  ExceptionList = local_30[8];
  return;
}

