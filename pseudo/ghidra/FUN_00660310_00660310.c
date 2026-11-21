// FUN_00660310  00660310

void __thiscall
FUN_00660310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_244 [268];
  intptr_t local_138;
  _finddata64i32_t local_134;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_244,"%s\\%s%s",param_2,param_3,param_4,param_1);
  local_138 = _findfirst64i32(local_244,&local_134);
  if (local_138 != -1) {
    sprintf(local_244,"%s\\%s",param_2,local_134.name);
    remove(local_244);
    while( true ) {
      iVar1 = _findnext64i32(local_138,&local_134);
      if (iVar1 != 0) break;
      sprintf(local_244,"%s\\%s",param_2,local_134.name);
      remove(local_244);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

