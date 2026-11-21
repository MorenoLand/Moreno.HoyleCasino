// FUN_00465d90  00465d90

void __fastcall FUN_00465d90(int param_1)

{
  char *_Format;
  undefined1 local_194 [64];
  undefined1 local_154 [68];
  int local_110;
  char local_10c [256];
  uint local_c;
  undefined1 local_8 [4];
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0047ce00(&local_110,local_8);
  FUN_0047bc40(local_110 / 2);
  FUN_0047bc80(local_110 / 2);
  FUN_0047bcc0(local_110);
  FUN_0047bd40(local_110);
  FUN_0047bd80(local_110);
  FUN_0047bd00(local_110 << 1);
  FUN_0047bdc0(local_110 << 1);
  FUN_006311e0(local_110,local_194);
  FUN_006311e0(local_110 << 1,local_154);
  _Format = (char *)FUN_00630f40("SID_POKER_EARLYLATE_FORMAT",local_194,local_154);
  sprintf(local_10c,_Format);
  (**(code **)(**(int **)(param_1 + 0x1e8) + 0xb4))(local_10c);
  FUN_005f85d0();
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

