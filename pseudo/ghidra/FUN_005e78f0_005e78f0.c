// FUN_005e78f0  005e78f0

void FUN_005e78f0(void)

{
  FILE *_File;
  size_t sVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  uVar2 = extraout_var;
  strcpy(&local_40c,".\\hof9.dat");
  FUN_005ea5b0(&local_40c,uVar2);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    sVar1 = fread(&DAT_00794930,0x73c,1,_File);
    fclose(_File);
    if (sVar1 == 1) {
      FUN_005e7ac0();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

