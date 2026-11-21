// FUN_0062f360  0062f360

void __fastcall FUN_0062f360(int *param_1)

{
  int iVar1;
  size_t sVar2;
  char local_20c [512];
  uint local_c;
  char *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*param_1 + 0x34))((int)(char)param_1[0xf],local_20c,0x200);
  if (iVar1 != 0) {
    sVar2 = strlen(local_20c);
    local_8 = operator_new(sVar2 + 1);
    strcpy(local_8,local_20c);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

