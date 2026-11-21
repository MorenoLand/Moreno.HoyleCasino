// FUN_00664300  00664300

void __thiscall FUN_00664300(int param_1,undefined4 param_2)

{
  FILE *_File;
  int local_414;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_2);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    fread((void *)(param_1 + 0x10),0x4c,1,_File);
    fclose(_File);
    for (local_414 = 0; local_414 < 0xc; local_414 = local_414 + 1) {
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

