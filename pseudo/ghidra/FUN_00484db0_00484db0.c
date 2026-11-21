// FUN_00484db0  00484db0

short __fastcall FUN_00484db0(int param_1)

{
  short *psVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  void *local_24;
  short local_20;
  void *local_1c;
  short local_18;
  short local_14;
  byte local_d;
  short local_c;
  byte local_5;
  
  local_24 = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_5 = 0; local_5 <= *DAT_007913c8; local_5 = local_5 + 1) {
    *(undefined2 *)((int)local_24 + (uint)local_5 * 2) = 0;
  }
  local_1c = local_24;
  for (local_20 = 0; local_20 < *(short *)(param_1 + 4); local_20 = local_20 + 1) {
    puVar4 = &local_26;
    FUN_00464480(&local_25);
    pbVar3 = (byte *)FUN_00463f80(puVar4);
    psVar1 = (short *)((int)local_1c + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
    uVar5 = DAT_007907a4;
    FUN_00464480(&local_27);
    cVar2 = FUN_00464050(uVar5);
    if (cVar2 != '\0') {
      puVar4 = &local_29;
      FUN_00464480(&local_28);
      pbVar3 = (byte *)FUN_00463fd0(puVar4);
      psVar1 = (short *)((int)local_1c + (uint)*pbVar3 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  local_18 = 0;
  local_d = 0;
  for (local_5 = *DAT_007913f0; local_5 <= *DAT_007913c8; local_5 = local_5 + 1) {
    if (0 < *(short *)((int)local_1c + (uint)local_5 * 2)) {
      if (local_d != 0) {
        local_18 = local_18 + ((local_5 - 1) - (ushort)local_d);
      }
      local_d = local_5;
    }
  }
  local_c = 0;
  local_d = 0;
  for (local_5 = *DAT_007913b4; local_5 <= *DAT_007913e0; local_5 = local_5 + 1) {
    if (0 < *(short *)((int)local_1c + (uint)local_5 * 2)) {
      if (local_d != 0) {
        local_c = local_c + ((local_5 - 1) - (ushort)local_d);
      }
      local_d = local_5;
    }
  }
  if (local_c < local_18) {
    local_14 = local_c;
  }
  else {
    local_14 = local_18;
  }
  if ((local_14 == 0) && (0 < *(short *)((int)local_1c + (uint)*DAT_007913b4 * 2))) {
    local_14 = 1;
  }
  operator_delete(local_1c);
  return local_14;
}

