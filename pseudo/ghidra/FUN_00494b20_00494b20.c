// FUN_00494b20  00494b20

void __thiscall
FUN_00494b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,short *param_11,short *param_12,short *param_13)

{
  short *psVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  void *local_14;
  short local_10;
  void *local_c;
  byte local_5;
  
  FUN_00492430(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  *param_11 = 0;
  *param_12 = 0;
  *param_13 = 0;
  local_14 = operator_new((*DAT_007913c8 + 1) * 2);
  for (local_5 = 0; local_5 <= *DAT_007913c8; local_5 = local_5 + 1) {
    *(undefined2 *)((int)local_14 + (uint)local_5 * 2) = 0;
  }
  local_c = local_14;
  for (local_10 = 0; local_10 < *(short *)(param_1 + 4); local_10 = local_10 + 1) {
    puVar4 = &local_16;
    FUN_00464480(&local_15);
    pbVar3 = (byte *)FUN_00463f80(puVar4);
    psVar1 = (short *)((int)local_c + (uint)*pbVar3 * 2);
    *psVar1 = *psVar1 + 1;
    uVar5 = DAT_007907a4;
    FUN_00464480(&local_17);
    cVar2 = FUN_00464050(uVar5);
    if (cVar2 != '\0') {
      puVar4 = &local_19;
      FUN_00464480(&local_18);
      pbVar3 = (byte *)FUN_00463fd0(puVar4);
      psVar1 = (short *)((int)local_c + (uint)*pbVar3 * 2);
      *psVar1 = *psVar1 + 1;
    }
  }
  for (local_5 = *DAT_007913b4; local_5 <= *DAT_00791410; local_5 = local_5 + 1) {
    if (0 < *(short *)((int)local_c + (uint)local_5 * 2)) {
      *param_11 = *param_11 + 1;
      if (*param_12 == 0) {
        *param_12 = ((ushort)local_5 - (ushort)*DAT_007913f0) + 2;
      }
      else if (*param_13 == 0) {
        *param_13 = ((ushort)local_5 - (ushort)*DAT_007913f0) + 2;
      }
    }
  }
  if (*param_11 < 2) {
    *param_12 = 0;
    *param_11 = 0;
  }
  operator_delete(local_c);
  return;
}

