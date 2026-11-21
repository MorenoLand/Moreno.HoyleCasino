// FUN_0068ac10  0068ac10

void __thiscall FUN_0068ac10(int param_1,char *param_2,char *param_3,FILE *param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  FILE *pFVar4;
  char *local_25c;
  char *local_258;
  char local_254 [264];
  char local_14c [20];
  char local_138 [20];
  fpos_t local_124;
  fpos_t local_11c;
  char local_114 [264];
  uint local_c;
  char *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_138,"%%%i[^\n\r]",0x104);
  sprintf(local_14c,"%%%i[\n\r]",0x104);
  memset(local_254,0,0x105);
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (char *)0x0)) &&
     (param_4 != (FILE *)0x0)) {
    do {
      fgetpos(*(FILE **)(param_1 + 0x208),&local_124);
      fgetpos(param_4,&local_11c);
      iVar1 = fscanf(*(FILE **)(param_1 + 0x208),local_138,local_254);
      if ((iVar1 == 0) || (iVar1 == -1)) break;
      pFVar4 = param_4;
      sVar3 = strlen(local_254);
      fwrite(local_254,1,sVar3,pFVar4);
      iVar1 = fscanf(*(FILE **)(param_1 + 0x208),local_14c,local_114);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        pFVar4 = param_4;
        sVar3 = strlen(local_114);
        fwrite(local_114,1,sVar3,pFVar4);
      }
      FUN_0068afc0(local_254);
      if (local_254[0] != ';') {
        if (local_254[0] == '[') {
          fsetpos(*(FILE **)(param_1 + 0x208),&local_124);
          fsetpos(param_4,&local_11c);
          break;
        }
        local_8 = strchr(local_254,0x3d);
        if (local_8 != (char *)0x0) {
          *local_8 = '\0';
          local_25c = local_8;
          while (local_25c = local_25c + -1, *local_25c == ' ') {
            *local_25c = '\0';
          }
          local_258 = param_2;
          for (local_25c = local_254; (*local_258 != '\0' && (*local_25c != '\0'));
              local_25c = local_25c + 1) {
            iVar1 = toupper((int)*local_258);
            iVar2 = toupper((int)*local_25c);
            if (iVar1 != iVar2) break;
            local_258 = local_258 + 1;
          }
          if ((*local_258 == '\0') && (*local_25c == '\0')) {
            fsetpos(param_4,&local_11c);
            break;
          }
        }
      }
      iVar1 = feof(*(FILE **)(param_1 + 0x208));
    } while (iVar1 == 0);
    pFVar4 = param_4;
    sVar3 = strlen(param_2);
    fwrite(param_2,1,sVar3,pFVar4);
    fwrite(&DAT_006e5658,1,1,param_4);
    if (*param_3 != '\0') {
      pFVar4 = param_4;
      sVar3 = strlen(param_3);
      fwrite(param_3,1,sVar3,pFVar4);
    }
    sVar3 = strlen("\r\n");
    fwrite(&DAT_006d8c14,1,sVar3,param_4);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

