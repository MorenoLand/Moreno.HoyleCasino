// FUN_0047ffe0  0047ffe0

void FUN_0047ffe0(void)

{
  int iVar1;
  undefined4 extraout_var;
  int local_44 [14];
  int local_c;
  undefined4 local_8;
  
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    local_8 = FUN_0047e390(local_c);
    iVar1 = FUN_004c6a70(extraout_var);
    local_44[local_c * 2] = iVar1;
    local_44[local_c * 2 + 1] = local_c;
  }
  FUN_00480070(local_44,7);
  for (local_c = 6; -1 < local_c; local_c = local_c + -1) {
    FUN_00480580(local_44[local_c * 2 + 1]);
  }
  return;
}

