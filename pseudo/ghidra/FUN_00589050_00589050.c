// FUN_00589050  00589050

void __thiscall FUN_00589050(int param_1,int param_2)

{
  char *_Format;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    param_2 = *(int *)(DAT_007947e0 + 0x98);
  }
  _Format = (char *)FUN_00630f40("SID_KENO_NEXTGAME_FORMAT",param_2);
  sprintf(local_10c,_Format);
  if (*(int *)(param_1 + 0x3b7c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x3b7c) + 0xb4))(local_10c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

