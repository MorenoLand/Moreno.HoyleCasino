// FUN_00491870  00491870

short __fastcall FUN_00491870(int param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 local_1a;
  undefined1 local_19;
  void *local_18;
  short local_14;
  short local_10;
  void *local_c;
  byte local_5;
  
  local_10 = 0;
  local_18 = operator_new((*DAT_007913e0 + 1) * 2);
  for (local_5 = 0; local_5 <= *DAT_007913e0; local_5 = local_5 + 1) {
    *(undefined2 *)((int)local_18 + (uint)local_5 * 2) = 0;
  }
  local_c = local_18;
  for (local_14 = 0; local_14 < *(short *)(param_1 + 4); local_14 = local_14 + 1) {
    puVar3 = &local_1a;
    FUN_00464480(&local_19);
    pbVar2 = (byte *)FUN_00463fd0(puVar3);
    psVar1 = (short *)((int)local_c + (uint)*pbVar2 * 2);
    *psVar1 = *psVar1 + 1;
  }
  for (local_5 = *DAT_007913b4; local_5 <= *DAT_00791410; local_5 = local_5 + 1) {
    if (0 < *(short *)((int)local_c + (uint)local_5 * 2)) {
      local_10 = local_10 + 1;
    }
  }
  operator_delete(local_c);
  return local_10;
}

