// FUN_005f38b0  005f38b0

void __thiscall FUN_005f38b0(int *param_1,int param_2)

{
  char *_Format;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == 0) {
    (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x1c))(&DAT_00795738);
  }
  else {
    _Format = (char *)(**(code **)(*param_1 + 0x20))(&DAT_00795738,param_2);
    sprintf(local_10c,_Format);
    (**(code **)(**(int **)(DAT_007960d8 + 0x10) + 0x1c))(local_10c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

