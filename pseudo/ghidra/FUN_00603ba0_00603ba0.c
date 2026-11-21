// FUN_00603ba0  00603ba0

void FUN_00603ba0(char *param_1,undefined4 param_2,undefined1 param_3)

{
  size_t sVar1;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sVar1 = strlen(param_1);
  if (sVar1 < 5) {
    memset(&local_10,0x20,4);
    local_c = 0;
    sVar1 = strlen(param_1);
    memcpy(&local_10,param_1,sVar1);
    _strupr(&local_10);
    FUN_00603c50(local_d * 0x1000000 + local_e * 0x10000 + local_f * 0x100 + (int)local_10,param_2,
                 param_3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

