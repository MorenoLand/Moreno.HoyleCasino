// FUN_00674960  00674960

void FUN_00674960(void)

{
  intptr_t _FindHandle;
  int iVar1;
  char local_754 [520];
  char local_54c [520];
  _finddata64i32_t local_344;
  intptr_t local_21c;
  char *local_218;
  char local_214 [524];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_218 = "FaceCreator";
  _mkdir(&DAT_00795fc0);
  strcpy(local_754,&DAT_00795fc0);
  strcat(local_754,"\\");
  strcat(local_754,"*");
  local_21c = _findfirst64i32(local_754,&local_344);
  if (-1 < local_21c) {
    _findclose(local_21c);
    strcpy(local_754,local_218);
    FUN_005ea770(local_754);
    strcat(local_754,"\\");
    strcat(local_754,"*");
    _FindHandle = _findfirst64i32(local_754,&local_344);
    if (-1 < _FindHandle) {
      strcpy(local_754,local_218);
      FUN_005ea770(local_754);
      strcat(local_754,"\\");
      do {
        strcpy(local_54c,local_754);
        strcat(local_54c,local_344.name);
        strcpy(local_214,&DAT_00795fc0);
        strcat(local_214,"\\");
        strcat(local_214,local_344.name);
        FUN_005ea040(local_54c,local_214,1);
        iVar1 = _findnext64i32(_FindHandle,&local_344);
      } while (iVar1 == 0);
      _findclose(_FindHandle);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

