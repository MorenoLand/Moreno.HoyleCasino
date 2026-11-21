// FUN_0068a710  0068a710

void __thiscall FUN_0068a710(int param_1,char *param_2,FILE *param_3)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  FILE *pFVar4;
  char local_244;
  char local_243 [263];
  char local_13c [20];
  char local_128 [20];
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  memset(&local_244,0,0x105);
  memset(local_114,0,0x105);
  sprintf(local_128,"%%%i[^\n\r]",0x104);
  sprintf(local_13c,"%%%i[\n\r]",0x104);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    fseek(*(FILE **)(param_1 + 0x208),0,0);
    do {
      iVar1 = fscanf(*(FILE **)(param_1 + 0x208),local_128,&local_244);
      if ((iVar1 == 0) || (iVar1 == -1)) break;
      if (param_3 != (FILE *)0x0) {
        pFVar4 = param_3;
        sVar2 = strlen(&local_244);
        fwrite(&local_244,1,sVar2,pFVar4);
      }
      iVar1 = fscanf(*(FILE **)(param_1 + 0x208),local_13c,local_114);
      if (((param_3 != (FILE *)0x0) && (iVar1 != 0)) && (iVar1 != -1)) {
        pFVar4 = param_3;
        sVar2 = strlen(local_114);
        fwrite(local_114,1,sVar2,pFVar4);
      }
      FUN_0068afc0(&local_244);
      if (((local_244 != ';') && (local_244 == '[')) &&
         (pcVar3 = strchr(local_243,0x5d), pcVar3 != (char *)0x0)) {
        *pcVar3 = '\0';
        iVar1 = _stricmp(local_243,param_2);
        if (iVar1 == 0) break;
      }
      iVar1 = feof(*(FILE **)(param_1 + 0x208));
    } while (iVar1 == 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

