// FUN_005ca3f0  005ca3f0

void __fastcall FUN_005ca3f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_5c;
  int local_58;
  int local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  local_44 = 100000000;
  local_40 = &DAT_00989680;
  local_3c = 1000000;
  local_38 = 500000;
  local_34 = 100000;
  local_30 = 50000;
  local_2c = 25000;
  local_28 = 10000;
  local_24 = 5000;
  local_20 = 1000;
  local_1c = 500;
  local_18 = 100;
  local_8 = (**(code **)(*DAT_007947e4 + 0x25c))();
  (**(code **)(*DAT_007947e4 + 0x26c))(local_c,&local_14);
  if (local_14 == 0) {
    local_5c = FUN_005d5a50();
  }
  else {
    iVar1 = FUN_005d5a50();
    if (iVar1 < local_14) {
      local_58 = FUN_005d5a50();
    }
    else {
      local_58 = local_14;
    }
    local_5c = local_58;
  }
  iVar1 = FUN_005d5f30();
  iVar2 = FUN_005d5a50();
  if (iVar2 < iVar1) {
    uVar3 = FUN_0064c8a0(0,0);
    FUN_005d5e10(uVar3);
  }
  *(undefined4 *)(param_1 + 0x30) = 0x32;
  local_10 = 0;
  do {
    if (0xb < local_10) {
LAB_005ca539:
      FUN_005ca570();
      while ((double)*(int *)(param_1 + 0x30) < *(double *)(*(int *)(param_1 + 0x10) + 0x1e0)) {
        FUN_005ca640(0);
      }
      return;
    }
    if ((&local_44)[local_10] <= local_5c) {
      *(int *)(param_1 + 0x30) = (&local_44)[local_10];
      goto LAB_005ca539;
    }
    local_10 = local_10 + 1;
  } while( true );
}

