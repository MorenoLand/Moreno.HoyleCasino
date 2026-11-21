// FUN_005e79e0  005e79e0

void FUN_005e79e0(void)

{
  FILE *_File;
  undefined4 extraout_var;
  undefined4 uVar1;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  uVar1 = extraout_var;
  strcpy(&local_40c,".\\hof9.dat");
  FUN_005e7ac0(uVar1);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
  if (_File == (FILE *)0x0) {
    FUN_005e9f20("hFile","..\\Casino\\hof.cpp",0x1dd);
  }
  else {
    fwrite(&DAT_00794930,0x73c,1,_File);
    fclose(_File);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

