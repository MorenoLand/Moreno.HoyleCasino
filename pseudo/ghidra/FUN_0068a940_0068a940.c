// FUN_0068a940  0068a940

void __thiscall FUN_0068a940(int param_1,char *param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t local_260;
  char *local_254;
  char *local_250;
  char local_24c [264];
  char local_144 [20];
  char local_130 [20];
  undefined1 local_11c [268];
  uint local_10;
  char *local_c;
  char *local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_130,"%%%i[^\n\r]",0x104);
  sprintf(local_144,"%%%i[\n\r]",0x104);
  memset(local_24c,0,0x105);
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (void *)0x0)) &&
     (param_4 != 0)) {
    do {
      iVar1 = fscanf(*(FILE **)(param_1 + 0x208),local_130,local_24c);
      if ((iVar1 == 0) || (iVar1 == -1)) break;
      fscanf(*(FILE **)(param_1 + 0x208),local_144,local_11c);
      FUN_0068afc0(local_24c);
      if (local_24c[0] != ';') {
        if (local_24c[0] == '[') break;
        local_c = strchr(local_24c,0x3d);
        if (local_c != (char *)0x0) {
          *local_c = '\0';
          local_8 = local_c + 1;
          local_254 = local_c;
          while (local_254 = local_254 + -1, *local_254 == ' ') {
            *local_254 = '\0';
          }
          local_250 = param_2;
          for (local_254 = local_24c; (*local_250 != '\0' && (*local_254 != '\0'));
              local_254 = local_254 + 1) {
            iVar1 = toupper((int)*local_250);
            iVar2 = toupper((int)*local_254);
            if (iVar1 != iVar2) break;
            local_250 = local_250 + 1;
          }
          if ((*local_250 == '\0') && (*local_254 == '\0')) {
            FUN_0068afc0(local_8);
            sVar3 = strlen(local_8);
            if (sVar3 + 1 < param_4 - 1U) {
              local_260 = strlen(local_8);
              local_260 = local_260 + 1;
            }
            else {
              local_260 = param_4 - 1;
            }
            memmove(param_3,local_8,local_260);
            *(undefined1 *)((int)param_3 + param_4 + -1) = 0;
            break;
          }
        }
      }
      iVar1 = feof(*(FILE **)(param_1 + 0x208));
    } while (iVar1 == 0);
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

