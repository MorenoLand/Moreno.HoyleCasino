// FUN_00665800  00665800

void FUN_00665800(char *param_1)

{
  undefined4 local_418;
  FILE *local_414;
  char *local_410;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  if (*param_1 != '\0') {
    sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_1);
    local_410 = strstr(&local_40c,".fac");
    if (local_410 != (char *)0x0) {
      strcpy(local_410,".voc");
      local_414 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
      if (local_414 == (FILE *)0x0) {
        local_414 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
        if (local_414 == (FILE *)0x0) {
          FUN_005e9f20("false","..\\casinoShell\\face.cpp",0x373);
          goto LAB_006659c3;
        }
        local_418 = 0x21;
        fwrite(&local_418,4,1,local_414);
        fclose(local_414);
        local_414 = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
      }
      if (local_414 == (FILE *)0x0) {
        FUN_005e9f20("false","..\\casinoShell\\face.cpp",0x37e);
      }
      else {
        fread(&local_418,4,1,local_414);
        fclose(local_414);
      }
    }
  }
LAB_006659c3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

