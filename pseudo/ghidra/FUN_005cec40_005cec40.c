// FUN_005cec40  005cec40

void __fastcall FUN_005cec40(undefined4 param_1)

{
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_3c,"%d/%d",*(undefined4 *)(DAT_007947e0 + 0x4ef8),
          *(undefined4 *)(DAT_007947e0 + 0x4ef0),param_1);
  FUN_005ceca0(local_3c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

