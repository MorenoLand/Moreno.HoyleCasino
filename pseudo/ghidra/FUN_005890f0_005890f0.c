// FUN_005890f0  005890f0

void __thiscall FUN_005890f0(int param_1,int param_2)

{
  char *_Format;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  _Format = (char *)FUN_00630f40("SID_KENO_GAMETIME_FORMAT",param_2 / 0xe10,(param_2 % 0xe10) / 0x3c
                                );
  sprintf(local_10c,_Format);
  if (*(int *)(param_1 + 0x3b80) != 0) {
    (**(code **)(**(int **)(param_1 + 0x3b80) + 0xb4))(local_10c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

