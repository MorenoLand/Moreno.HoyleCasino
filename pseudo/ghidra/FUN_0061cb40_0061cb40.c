// FUN_0061cb40  0061cb40

void FUN_0061cb40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char local_35c [268];
  intptr_t local_250;
  char local_24c [268];
  void *local_140;
  FILE *local_13c;
  size_t local_138;
  _finddata64i32_t local_134;
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_35c,"%s*.tex",param_1);
  local_250 = _findfirst64i32(local_35c,&local_134);
  if (local_250 != -1) {
    do {
      if ((local_134.attrib & 0x10) == 0) {
        sprintf(local_24c,"%s%s",param_1,local_134.name);
        FUN_0062fde0(&DAT_006d8b94,local_24c);
        local_13c = (FILE *)FUN_005ea9c0(local_24c,&DAT_006c2d28);
        if (local_13c == (FILE *)0x0) {
          FUN_005e9f20("false","..\\scilib\\platform\\texture.cpp",0x8f2);
        }
        else {
          local_138 = FUN_005e9fd0(local_13c);
          local_140 = operator_new(local_138);
          fread(local_140,local_138,1,local_13c);
          fclose(local_13c);
          FUN_0061cd70(local_140,param_2,param_3);
          local_13c = (FILE *)FUN_005ea9c0(local_24c,&DAT_006c2d2c);
          if (local_13c == (FILE *)0x0) {
            FUN_005e9f20("false","..\\scilib\\platform\\texture.cpp",0x8ee);
          }
          else {
            fwrite(local_140,local_138,1,local_13c);
            fclose(local_13c);
          }
          operator_delete(local_140);
        }
      }
      iVar1 = _findnext64i32(local_250,&local_134);
    } while (iVar1 != -1);
    _findclose(local_250);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

