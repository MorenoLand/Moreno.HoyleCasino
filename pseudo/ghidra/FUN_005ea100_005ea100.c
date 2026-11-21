// FUN_005ea100  005ea100

void FUN_005ea100(char *param_1)

{
  char local_47c [520];
  char local_274 [520];
  uint local_6c;
  _PROCESS_INFORMATION local_68;
  char *local_58;
  _STARTUPINFOA local_54;
  char *local_8;
  
  local_6c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_1[1] == ':') {
    strcpy(local_274,param_1);
  }
  else {
    strcpy(local_274,".\\");
    strcat(local_274,param_1);
    FUN_005eaa40(local_274);
  }
  strcpy(local_47c,local_274);
  local_8 = strrchr(local_47c,0x5c);
  local_58 = strrchr(local_47c,0x2f);
  if (local_8 == (char *)0x0) {
    local_8 = local_58;
  }
  if ((local_58 != (char *)0x0) && (local_8 < local_58)) {
    local_8 = local_58;
  }
  if (local_8 != (char *)0x0) {
    *local_8 = '\0';
  }
  GetStartupInfoA(&local_54);
  CreateProcessA(local_274,(LPSTR)0x0,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0x20,
                 (LPVOID)0x0,local_47c,&local_54,&local_68);
  __security_check_cookie(local_6c ^ (uint)&stack0xfffffffc);
  return;
}

