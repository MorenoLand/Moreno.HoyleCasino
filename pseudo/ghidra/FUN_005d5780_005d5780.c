// FUN_005d5780  005d5780

undefined4 __fastcall FUN_005d5780(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_3c [14];
  
  local_3c[0] = 0;
  local_3c[1] = 2;
  local_3c[2] = 4;
  local_3c[3] = 6;
  local_3c[4] = 8;
  local_3c[5] = 10;
  local_3c[6] = 0xc;
  local_3c[7] = 0xe;
  local_3c[8] = 0x10;
  local_3c[9] = 0x12;
  local_3c[10] = 0x14;
  local_3c[0xb] = 0x16;
  local_3c[0xc] = 0xc;
  piVar1 = (int *)FUN_0063aac0(param_1);
  if (*piVar1 == 3) {
    uVar2 = 1;
  }
  else {
    for (local_3c[0xd] = 0; local_3c[0xd] < local_3c[0xc]; local_3c[0xd] = local_3c[0xd] + 1) {
      iVar3 = FUN_004842b0();
      if (iVar3 == local_3c[local_3c[0xd]]) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

