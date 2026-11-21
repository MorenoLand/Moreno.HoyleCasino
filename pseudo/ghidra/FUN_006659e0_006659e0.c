// FUN_006659e0  006659e0

void FUN_006659e0(char *param_1)

{
  char *_Dest;
  FILE *_File;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  if (*param_1 != '\0') {
    sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_1);
    _Dest = strstr(&local_40c,".fac");
    if (_Dest == (char *)0x0) {
      FUN_005e9f20("false","..\\casinoShell\\face.cpp",0x392);
    }
    else {
      strcpy(_Dest,".voc");
      _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
      if (_File == (FILE *)0x0) {
        FUN_005e9f20("false","..\\casinoShell\\face.cpp",0x398);
      }
      else {
        fwrite(&stack0x00000008,4,1,_File);
        fclose(_File);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

