// FUN_00668d30  00668d30

void FUN_00668d30(char *param_1)

{
  char cVar1;
  char *_Source;
  FILE *_File;
  int iVar2;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  _Source = (char *)FUN_00673cb0();
  strcpy(&local_40c,_Source);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    fread(param_1,0x21496,1,_File);
    fclose(_File);
    cVar1 = *param_1;
    iVar2 = FUN_005f3bf0();
    if (cVar1 != iVar2) {
      FUN_005e9f20("header->whichGame == shell->GetCurrentRoomNum()","..\\casinoShell\\savegame.cpp"
                   ,0x12f);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

