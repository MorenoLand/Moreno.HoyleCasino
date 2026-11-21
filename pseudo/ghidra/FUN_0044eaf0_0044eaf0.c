// FUN_0044eaf0  0044eaf0

void FUN_0044eaf0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  char local_18 [8];
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = (undefined2)((uint)local_18 >> 0x10);
  FUN_00452fd0(CONCAT22(uVar1,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar1,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),local_18);
  uVar1 = (undefined2)((uint)local_10 >> 0x10);
  uVar3 = extraout_var;
  FUN_004530b0(param_1,CONCAT22(uVar1,*(undefined2 *)(DAT_00790738 + 0xa2 + param_1 * 2)),
               CONCAT22(uVar1,*(undefined2 *)(DAT_00790738 + 0xac + param_1 * 2)),local_10);
  if ((local_18[0] == '\x02') && ('\x02' < local_10[0])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,local_18[0] == '\x02',uVar2,uVar3);
  return;
}

