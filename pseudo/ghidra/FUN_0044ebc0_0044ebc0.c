// FUN_0044ebc0  0044ebc0

void FUN_0044ebc0(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  byte local_19;
  char local_18 [3];
  char local_15;
  char local_10;
  char local_f;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  local_19 = 0;
  uVar2 = (undefined2)((uint)local_18 >> 0x10);
  FUN_00452fd0(CONCAT22(uVar2,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar2,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),local_18);
  uVar2 = (undefined2)((uint)&local_10 >> 0x10);
  uVar5 = extraout_var;
  FUN_004530b0(param_1,CONCAT22(uVar2,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar2,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),&local_10);
  if ((local_18[0] == '\x01') && (local_15 < '\r')) {
    bVar1 = true;
  }
  uVar3 = (uint)local_10;
  if (((int)uVar3 < 3) && (local_f < '\n')) {
    local_19 = 1;
  }
  if ((bVar1) && (uVar3 = (uint)local_19, uVar3 != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar3,uVar4,uVar5);
  return;
}

