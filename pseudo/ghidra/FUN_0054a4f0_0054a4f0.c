// FUN_0054a4f0  0054a4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0054a4f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float10 fVar5;
  char local_34;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  char local_19;
  int local_18;
  uint local_14;
  uint local_10;
  double local_c;
  
  local_18 = FUN_0054a180(param_2);
  local_10 = 0;
  local_14 = 0;
  fVar5 = (float10)FUN_0054a660(local_18);
  local_c = (double)fVar5;
  uVar4 = *(uint *)(param_1 + 0x50 + param_2 * 4);
  if (local_18 != 4) {
    if ((local_18 == 5) || (local_18 == 3)) {
      local_34 = '\x01';
    }
    else {
      local_34 = '\0';
    }
    local_19 = local_34;
    local_14 = uVar4;
    if (local_34 == '\0') {
      iVar2 = FUN_00686cc0();
      local_10 = iVar2 + local_14;
      if (_DAT_006c70b8 == local_c) {
        uVar4 = local_14 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        if (uVar4 != 0) {
          FUN_0054a480();
        }
      }
    }
    uVar4 = local_10;
    if (((param_2 == 1) && (cVar1 = FUN_0054a6c0(0), uVar4 = local_10, cVar1 != '\0')) &&
       (*(char *)(param_1 + 0x25) != '\0')) {
      local_10 = local_14;
      puVar3 = (undefined4 *)FUN_00548ef0(local_2c);
      local_24 = *puVar3;
      local_20 = puVar3[1];
      FUN_005d1420(local_24,local_20);
      uVar4 = local_10;
    }
  }
  return uVar4;
}

