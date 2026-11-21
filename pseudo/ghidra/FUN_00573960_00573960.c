// FUN_00573960  00573960

void __fastcall FUN_00573960(int param_1)

{
  void *pvVar1;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  short local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a629d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00574c60(DAT_00781870 ^ (uint)&stack0xfffffffc);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (*(int *)(param_1 + 0xc) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0;
    if (pvVar1 == (void *)0x0) {
      local_a4 = 0;
    }
    else {
      local_a4 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = local_a4;
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x44))(0,0);
  FUN_005eaf00(0x16021);
  (**(code **)(**(int **)(param_1 + 0xc) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(2);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x74))();
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 1;
    if (pvVar1 == (void *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = local_a8;
  }
  (**(code **)(**(int **)(param_1 + 0x10) + 0x44))(0,0);
  FUN_005eaf00(0x16020);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x6c))(10);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x178) = 6;
  pvVar1 = operator_new(0x1c);
  local_8 = 2;
  if (pvVar1 == (void *)0x0) {
    local_ac = 0;
  }
  else {
    local_ac = FUN_00600a70(0);
  }
  local_8 = 0xffffffff;
  FUN_005f5d50(local_ac);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x74))();
  if (*(int *)(param_1 + 0x14) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 3;
    if (pvVar1 == (void *)0x0) {
      local_b0 = 0;
    }
    else {
      local_b0 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x14) = local_b0;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(0,0);
  FUN_005eaf00(0x1602c);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(5);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x44 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x1dc);
      local_8 = 4;
      if (pvVar1 == (void *)0x0) {
        local_b4 = 0;
      }
      else {
        local_b4 = FUN_00576e80();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x44 + local_14 * 4) = local_b4;
    }
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 200))
              (((3 < local_14) - 1 & 0xffffffe1) + 0x16041);
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x44))(0,0);
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x6c))(0x5dc);
    FUN_005f53e0((int)local_14);
    if (local_14 < 4) {
      FUN_006023d0(local_14 * 3,local_14 * 3 + 2,local_14 * 3,local_14 * 3 + 1);
    }
    else {
      FUN_006023d0(1,2,0,1);
    }
    if (local_14 < 3) {
      (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0xcc))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0xd0))();
    }
    (**(code **)(**(int **)(param_1 + 0x44 + local_14 * 4) + 0x74))();
  }
  if (*(int *)(param_1 + 8) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 5;
    if (pvVar1 == (void *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = local_b8;
    FUN_005eaf00(0x15f97);
    (**(code **)(**(int **)(param_1 + 8) + 0x6c))(0x5a);
    (**(code **)(**(int **)(param_1 + 8) + 0x44))(0x78,0x80);
    (**(code **)(**(int **)(param_1 + 8) + 0x40))();
    (**(code **)(**(int **)(param_1 + 8) + 0x70))();
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x178) = 4;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    pvVar1 = operator_new(0x1dc);
    local_8 = 6;
    if (pvVar1 == (void *)0x0) {
      local_bc = 0;
    }
    else {
      local_bc = FUN_005770e0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = local_bc;
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x58) + 200))(0x16042);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x44))(0,0);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x6c))(1);
  (**(code **)(**(int **)(param_1 + 0x58) + 0xcc))();
  (**(code **)(**(int **)(param_1 + 0x58) + 0x74))();
  if (*(int *)(param_1 + 0x5c) == 0) {
    pvVar1 = operator_new(400);
    local_8 = 7;
    if (pvVar1 == (void *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = FUN_00577150(9);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x5c) = local_c0;
  }
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x44))(0x1f,0x5f);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x74))();
  if (*(int *)(param_1 + 0x60) == 0) {
    pvVar1 = operator_new(400);
    local_8 = 8;
    if (pvVar1 == (void *)0x0) {
      local_c4 = 0;
    }
    else {
      local_c4 = FUN_00577150(5);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = local_c4;
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x44))(99,0xaf);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 0x60) + 0x74))();
  if (*(int *)(param_1 + 100) == 0) {
    pvVar1 = operator_new(400);
    local_8 = 9;
    if (pvVar1 == (void *)0x0) {
      local_c8 = 0;
    }
    else {
      local_c8 = FUN_00577150(1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 100) = local_c8;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x40))();
  FUN_005eaf00(0);
  (**(code **)(**(int **)(param_1 + 100) + 0x44))(0x30,0xaf);
  (**(code **)(**(int **)(param_1 + 100) + 0x6c))(10);
  (**(code **)(**(int **)(param_1 + 100) + 0x74))();
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x38 + local_14 * 4) == 0) {
      local_cc = operator_new(0x184);
      local_8 = 10;
      if (local_cc == (undefined4 *)0x0) {
        local_cc = (undefined4 *)0x0;
      }
      else {
        FUN_005f5bf0();
        *local_cc = SultanIcon::vftable;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x38 + local_14 * 4) = local_cc;
    }
    (**(code **)(**(int **)(param_1 + 0x38 + local_14 * 4) + 0x44))
              (*(undefined4 *)(&DAT_007493c0 + local_14 * 8),
               *(undefined4 *)(&DAT_007493c4 + local_14 * 8));
    FUN_005eaf00(0x16024);
    (**(code **)(**(int **)(param_1 + 0x38 + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x38 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x38 + local_14 * 4) + 0x6c))(0xf);
    *(undefined4 *)(*(int *)(param_1 + 0x38 + local_14 * 4) + 0x178) = 2;
    FUN_005eb5d0(0);
    (**(code **)(**(int **)(param_1 + 0x38 + local_14 * 4) + 0x70))();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xb;
    if (pvVar1 == (void *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = local_d0;
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(0,0);
  FUN_005eaf00(0x16025);
  (**(code **)(**(int **)(param_1 + 0x18) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(0xf);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x178) = 4;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x70))();
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xc;
    if (pvVar1 == (void *)0x0) {
      local_d4 = 0;
    }
    else {
      local_d4 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = local_d4;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x44))(0,0);
  FUN_005eaf00(0x16027);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x6c))(0x14);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x178) = 4;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x70))();
  if (*(int *)(param_1 + 0x20) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0xd;
    if (pvVar1 == (void *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = local_d8;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x44))(0,0);
  FUN_005eaf00(0x16028);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(0x14);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x70))();
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar1 = operator_new(0x178);
    local_8 = 0xe;
    if (pvVar1 == (void *)0x0) {
      local_dc = 0;
    }
    else {
      local_dc = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = local_dc;
  }
  (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(0,0);
  FUN_005eaf00(0x16029);
  (**(code **)(**(int **)(param_1 + 0x24) + 0xb0))(*(undefined4 *)(param_1 + 0x6c));
  (**(code **)(**(int **)(param_1 + 0x24) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x24) + 0x6c))(0x14);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x74))();
  if (*(int *)(param_1 + 0x34) == 0) {
    pvVar1 = operator_new(0x184);
    local_8 = 0xf;
    if (pvVar1 == (void *)0x0) {
      local_e0 = 0;
    }
    else {
      local_e0 = FUN_005f5bf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = local_e0;
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x44))(0,0);
  FUN_005eaf00(0x1602b);
  (**(code **)(**(int **)(param_1 + 0x34) + 0xb0))(0);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x40))();
  (**(code **)(**(int **)(param_1 + 0x34) + 0x6c))(0x19);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x178) = 6;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x70))();
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x28 + local_14 * 4) == 0) {
      pvVar1 = operator_new(0x184);
      local_8 = 0x10;
      if (pvVar1 == (void *)0x0) {
        local_e4 = 0;
      }
      else {
        local_e4 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x28 + local_14 * 4) = local_e4;
    }
    (**(code **)(**(int **)(param_1 + 0x28 + local_14 * 4) + 0x44))(0,0);
    FUN_005eaf00((-(uint)(local_14 != 0) & 0xfffffffd) + 0x1602d);
    (**(code **)(**(int **)(param_1 + 0x28 + local_14 * 4) + 0xb0))(0);
    (**(code **)(**(int **)(param_1 + 0x28 + local_14 * 4) + 0x40))();
    (**(code **)(**(int **)(param_1 + 0x28 + local_14 * 4) + 0x6c))(0x14);
    *(undefined4 *)(*(int *)(param_1 + 0x28 + local_14 * 4) + 0x178) = 10;
  }
  FUN_00576160();
  (**(code **)(**(int **)(DAT_00793458 + 4) + 4))(1);
  (**(code **)(**(int **)(DAT_00793458 + 4) + 0x1c))(0);
  FUN_0057ab80(5,&DAT_00749848);
  ExceptionList = local_10;
  return;
}

