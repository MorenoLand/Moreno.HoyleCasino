// FUN_0056c370  0056c370

void __fastcall FUN_0056c370(int param_1)

{
  void *pvVar1;
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
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5e17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0056d9d0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x99) = 0;
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    *(undefined4 *)(param_1 + 0xbc + local_14 * 4) = 0xffffffff;
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 8 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x1dc);
      local_8 = 0;
      if (pvVar1 == (void *)0x0) {
        local_bc = 0;
      }
      else {
        local_bc = FUN_0056f9b0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 8 + local_14 * 4) = local_bc;
    }
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 200))((uint)(local_14 < 4) * 4 + 0x16041);
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x44))(0,0);
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x6c))(0x5dc);
    FUN_005f53e0((int)local_14);
    if (local_14 < 4) {
      FUN_006023d0((int)local_14 << 2,local_14 * 4 + 1,local_14 * 4 + 2,local_14 * 4 + 3);
    }
    else {
      FUN_006023d0(1,2,0,1);
    }
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0xd0))();
    (**(code **)(**(int **)(param_1 + 8 + local_14 * 4) + 0x74))();
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x34 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x178);
      local_8 = 1;
      if (pvVar1 == (void *)0x0) {
        local_c0 = 0;
      }
      else {
        local_c0 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34 + local_14 * 4) = local_c0;
    }
    (**(code **)(**(int **)(param_1 + 0x34 + local_14 * 4) + 0x44))
              (*(undefined4 *)(&DAT_00748898 + local_14 * 8),
               *(undefined4 *)(&DAT_0074889c + local_14 * 8));
    FUN_005eaf00(0x1602f);
    (**(code **)(**(int **)(param_1 + 0x34 + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x34 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x34 + local_14 * 4) + 0x6c))(0x14);
    (**(code **)(**(int **)(param_1 + 0x34 + local_14 * 4) + 0x70))();
    if (*(int *)(param_1 + 0x44 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x184);
      local_8 = 2;
      if (pvVar1 == (void *)0x0) {
        local_c4 = 0;
      }
      else {
        local_c4 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44 + local_14 * 4) = local_c4;
    }
    if (local_14 < 2) {
      (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x44))(-(local_14 != 0) & 0x45,0);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x44))
                ((-(uint)(local_14 != 2) & 0x45) + 0xff,0);
    }
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x6c))(10);
    FUN_005eaf00(0x16040);
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x70))();
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 3;
    if (pvVar1 == (void *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x30) = local_c8;
    FUN_005eaf00(0x15f97);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x6c))(0x5a);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x44))(0x78,0x80);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x30) + 0x70))();
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x178) = 4;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar1 = operator_new(0x1dc);
    local_8 = 4;
    if (pvVar1 == (void *)0x0) {
      local_cc = 0;
    }
    else {
      local_cc = FUN_0056fc10();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = local_cc;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x1c) + 200))(0x16042);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(0,0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x6c))(1);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x74))();
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x54 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x178);
      local_8 = 5;
      if (pvVar1 == (void *)0x0) {
        local_d0 = 0;
      }
      else {
        local_d0 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54 + local_14 * 4) = local_d0;
    }
    (**(code **)(**(int **)(param_1 + 0x54 + local_14 * 4) + 0x44))
              (-(uint)(local_14 != 0) & 0x189,0);
    FUN_005eaf00(0x16030);
    (**(code **)(**(int **)(param_1 + 0x54 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x54 + local_14 * 4) + 0x6c))(10);
    (**(code **)(**(int **)(param_1 + 0x54 + local_14 * 4) + 0x70))();
    if (*(int *)(param_1 + 0x5c + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x184);
      local_8 = 6;
      if (pvVar1 == (void *)0x0) {
        local_d4 = 0;
      }
      else {
        local_d4 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c + local_14 * 4) = local_d4;
    }
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0x44))(0,0);
    FUN_005eaf00(0x16049);
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0xb0))((int)local_14);
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0x6c))(10);
    (**(code **)(**(int **)(param_1 + 0x5c + local_14 * 4) + 0x74))();
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar1 = operator_new(0x194);
    local_8 = 7;
    if (pvVar1 == (void *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = FUN_005702e0(9);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = local_d8;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0x20f,0xec);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x74))();
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar1 = operator_new(0x194);
    local_8 = 8;
    if (pvVar1 == (void *)0x0) {
      local_dc = 0;
    }
    else {
      local_dc = FUN_005702e0(9);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = local_dc;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0x1e,0xec);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar1 = operator_new(0x194);
    local_8 = 9;
    if (pvVar1 == (void *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = FUN_005702e0(1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = local_e0;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x44))(0x25f,0x111);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar1 = operator_new(0x194);
    local_8 = 10;
    if (pvVar1 == (void *)0x0) {
      local_e4 = 0;
    }
    else {
      local_e4 = FUN_00570d50();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2c) = local_e4;
  }
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x74))();
  if (*(int *)(param_1 + 100) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xb;
    if (pvVar1 == (void *)0x0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 100) = local_e8;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x44))(0,0);
  FUN_005eaf00(0x1602e);
  (**(code **)(**(int **)(param_1 + 100) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 100) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 100) + 0x40))();
  *(undefined4 *)(*(int *)(param_1 + 100) + 0x178) = 8;
  (**(code **)(**(int **)(param_1 + 100) + 0x70))();
  if (*(int *)(param_1 + 0x68) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xc;
    if (pvVar1 == (void *)0x0) {
      local_ec = 0;
    }
    else {
      local_ec = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68) = local_ec;
  }
  (**(code **)(**(int **)(param_1 + 0x68) + 0x44))(0,0);
  FUN_005eaf00(0x1603c);
  (**(code **)(**(int **)(param_1 + 0x68) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x68) + 0x6c))(10);
  *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x178) = 0xb;
  pvVar1 = operator_new(0x1c);
  local_8 = 0xd;
  if (pvVar1 == (void *)0x0) {
    local_f0 = 0;
  }
  else {
    local_f0 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_f0);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x74))();
  if (*(int *)(param_1 + 0x6c) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xe;
    if (pvVar1 == (void *)0x0) {
      local_f4 = 0;
    }
    else {
      local_f4 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6c) = local_f4;
  }
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x44))(0,0);
  FUN_005eaf00(0x1603d);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x6c))(10);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x178) = 0xd;
  pvVar1 = operator_new(0x1c);
  local_8 = 0xf;
  if (pvVar1 == (void *)0x0) {
    local_f8 = 0;
  }
  else {
    local_f8 = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_f8);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x74))();
  if (*(int *)(param_1 + 0x70) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0x10;
    if (pvVar1 == (void *)0x0) {
      local_fc = 0;
    }
    else {
      local_fc = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = local_fc;
  }
  (**(code **)(**(int **)(param_1 + 0x70) + 0x44))(0,0);
  FUN_005eaf00(0x1603f);
  (**(code **)(**(int **)(param_1 + 0x70) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x70) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x74))();
  if (*(int *)(param_1 + 0x74) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0x11;
    if (pvVar1 == (void *)0x0) {
      local_100 = 0;
    }
    else {
      local_100 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74) = local_100;
  }
  (**(code **)(**(int **)(param_1 + 0x74) + 0x44))(0,0);
  FUN_005eaf00(0x1603b);
  (**(code **)(**(int **)(param_1 + 0x74) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x74) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x74) + 0x6c))(2);
  (**(code **)(**(int **)(param_1 + 0x74) + 0x74))();
  if (*(int *)(param_1 + 0x78) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0x12;
    if (pvVar1 == (void *)0x0) {
      local_104 = 0;
    }
    else {
      local_104 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x78) = local_104;
  }
  (**(code **)(**(int **)(param_1 + 0x78) + 0x44))(0,0);
  FUN_005eaf00(0x16047);
  (**(code **)(**(int **)(param_1 + 0x78) + 0xb0))(*(undefined4 *)(param_1 + 0x9c));
  (**(code **)(**(int **)(param_1 + 0x78) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x78) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x78) + 0x74))();
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x7c + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x178);
      local_8 = 0x13;
      if (pvVar1 == (void *)0x0) {
        local_108 = 0;
      }
      else {
        local_108 = FUN_005eaaf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x7c + local_14 * 4) = local_108;
    }
    (**(code **)(**(int **)(param_1 + 0x7c + local_14 * 4) + 0x44))(0,0);
    FUN_005eaf00(0x1603e);
    (**(code **)(**(int **)(param_1 + 0x7c + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x7c + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x7c + local_14 * 4) + 0x6c))(10);
    (**(code **)(**(int **)(param_1 + 0x7c + local_14 * 4) + 0x70))();
  }
  (**(code **)(**(int **)(DAT_0079344c + 4) + 4))(1);
  (**(code **)(**(int **)(DAT_0079344c + 4) + 0x1c))(0);
  FUN_0057ab80(5,&DAT_00749848);
  ExceptionList = local_10;
  return;
}

