// FUN_004c7360  004c7360

void __fastcall FUN_004c7360(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_3b;
  char local_3a;
  undefined1 local_38;
  char local_37;
  undefined1 local_35;
  char local_34;
  undefined1 local_32;
  char local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  bool local_1d;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a225e;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  while (iVar2 = FUN_0060c9a0(uVar1), local_24 < iVar2) {
    local_28 = 0;
    while (iVar2 = FUN_0060c9a0(uVar1), local_28 < iVar2 + -1) {
      local_18 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_28);
      local_14 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_28 + 1);
      local_30 = *(int *)(local_18 + 0xc);
      local_2c = *(int *)(local_14 + 0xc);
      iVar2 = FUN_0047d6f0();
      if (iVar2 == 1) {
        uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
        local_8 = 0;
        FUN_004dd940(&local_32,local_18);
        local_8._0_1_ = 1;
        local_31 = FUN_00464500(uVar3);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00464210();
        local_8 = 0xffffffff;
        FUN_00464210();
        if (local_31 != '\0') {
          local_30 = local_30 + 100;
        }
        uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
        local_8 = 2;
        FUN_004dd940(&local_35,local_14);
        local_8._0_1_ = 3;
        local_34 = FUN_00464500(uVar3);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00464210();
        local_8 = 0xffffffff;
        FUN_00464210();
        if (local_34 != '\0') {
          local_2c = local_2c + 100;
        }
      }
      else {
        iVar2 = FUN_0047d6f0();
        if (iVar2 == 2) {
          uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
          local_8 = 4;
          FUN_004ddb10(&local_38,local_18);
          local_8._0_1_ = 5;
          local_37 = FUN_00464500(uVar3);
          local_8 = CONCAT31(local_8._1_3_,4);
          FUN_00464210();
          local_8 = 0xffffffff;
          FUN_00464210();
          if (local_37 != '\0') {
            local_30 = local_30 + 100;
          }
          uVar3 = FUN_00464130(DAT_0079077c,DAT_00790780);
          local_8 = 6;
          uVar4 = FUN_004ddb10(&local_3b,local_14);
          local_8._0_1_ = 7;
          local_3a = FUN_00464500(uVar3);
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_00464210(uVar1,uVar4);
          local_8 = 0xffffffff;
          FUN_00464210();
          if (local_3a != '\0') {
            local_2c = local_2c + 100;
          }
        }
      }
      iVar2 = FUN_0047ce60();
      if ((iVar2 == 6) || (iVar2 = FUN_0047ce60(), iVar2 == 0xd)) {
        local_1d = local_2c < local_30;
      }
      else {
        local_1d = local_30 < local_2c;
      }
      if (local_1d != false) {
        local_1c = local_14;
        FUN_0060c890(local_14);
        FUN_0060c7d0(local_1c);
      }
      local_28 = local_28 + 1;
    }
    local_24 = local_24 + 1;
  }
  ExceptionList = local_10;
  return;
}

