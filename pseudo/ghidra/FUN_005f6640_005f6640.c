// FUN_005f6640  005f6640

void __fastcall FUN_005f6640(int param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = *(undefined3 *)(param_1 + 0x4d);
  uVar2 = FUN_005f63f0();
  local_18 = CONCAT13(uVar2,uVar1);
  if (*(char *)(param_1 + 0x59) == '\0') {
    local_24 = *(int *)(param_1 + 0x10);
    local_c = *(int *)(param_1 + 0x14);
    local_20 = *(int *)(param_1 + 0x18);
    local_14 = *(int *)(param_1 + 0x1c);
  }
  else {
    local_24 = *(int *)(param_1 + 0x18);
    local_c = *(int *)(param_1 + 0x14);
    local_20 = *(int *)(param_1 + 0x10);
    local_14 = *(int *)(param_1 + 0x1c);
  }
  local_8 = local_14 - local_c;
  local_28 = local_20 - local_24;
  if (local_8 < 0) {
    local_8 = -local_8;
    local_1c = -1;
  }
  else {
    local_1c = 1;
  }
  if (local_28 < 0) {
    local_28 = -local_28;
    local_10 = -1;
  }
  else {
    local_10 = 1;
  }
  iVar5 = local_8 * 2;
  iVar3 = local_28 * 2;
  uVar4 = FUN_005f6620();
  FUN_005f9330(local_24,local_c,local_18,uVar4);
  if (iVar5 < iVar3) {
    local_2c = -(iVar3 >> 1);
    while (local_2c = iVar5 + local_2c, local_24 != local_20) {
      if (-1 < local_2c) {
        local_c = local_c + local_1c;
        local_2c = local_2c + local_28 * -2;
      }
      local_24 = local_24 + local_10;
      uVar4 = FUN_005f6620();
      FUN_005f9330(local_24,local_c,local_18,uVar4);
    }
  }
  else {
    local_30 = -(iVar5 >> 1);
    while (local_30 = iVar3 + local_30, local_c != local_14) {
      if (-1 < local_30) {
        local_24 = local_24 + local_10;
        local_30 = local_30 + local_8 * -2;
      }
      local_c = local_c + local_1c;
      uVar4 = FUN_005f6620();
      FUN_005f9330(local_24,local_c,local_18,uVar4);
    }
  }
  return;
}

