// FUN_006892b0  006892b0

void __thiscall FUN_006892b0(int param_1,char *param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t local_268;
  char *local_258;
  char *local_254;
  char *local_250;
  char local_24c [264];
  char local_144 [20];
  char local_130 [20];
  undefined1 local_11c;
  uint local_10;
  char *local_c;
  char *local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  sprintf(local_130,"%%[^\n\r]",0x104);
  sprintf(local_144,"%%[\n\r]",0x104);
  memset(local_24c,0,0x105);
  if ((((param_2 != (char *)0x0) && (*param_2 != '\0')) && (param_3 != (void *)0x0)) &&
     (param_4 != 0)) {
    do {
      local_24c[0] = '\0';
      local_250 = local_24c;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x208) + 4))();
      iVar2 = FUN_0061ed80();
      while (((**(char **)(param_1 + 0x20c) != '\n' && (**(char **)(param_1 + 0x20c) != '\r')) &&
             (*(uint *)(param_1 + 0x20c) < (uint)(iVar1 + iVar2)))) {
        *local_250 = **(char **)(param_1 + 0x20c);
        local_250 = local_250 + 1;
        *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
      }
      *local_250 = '\0';
      if ((local_250 == local_24c) || ((int)local_250 - (int)local_24c == -1)) break;
      local_11c = 0;
      while ((**(char **)(param_1 + 0x20c) == '\n' ||
             ((**(char **)(param_1 + 0x20c) == '\r' &&
              (*(uint *)(param_1 + 0x20c) < (uint)(iVar1 + iVar2)))))) {
        *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
      }
      FUN_006896c0(local_24c);
      if (local_24c[0] != ';') {
        if (local_24c[0] == '[') break;
        local_c = strchr(local_24c,0x3d);
        if (local_c != (char *)0x0) {
          *local_c = '\0';
          local_8 = local_c + 1;
          local_258 = local_c;
          while (local_258 = local_258 + -1, *local_258 == ' ') {
            *local_258 = '\0';
          }
          local_254 = param_2;
          for (local_258 = local_24c; (*local_254 != '\0' && (*local_258 != '\0'));
              local_258 = local_258 + 1) {
            iVar1 = toupper((int)*local_254);
            iVar2 = toupper((int)*local_258);
            if (iVar1 != iVar2) break;
            local_254 = local_254 + 1;
          }
          if ((*local_254 == '\0') && (*local_258 == '\0')) {
            FUN_006896c0(local_8);
            sVar3 = strlen(local_8);
            if (sVar3 + 1 < param_4 - 1U) {
              local_268 = strlen(local_8);
              local_268 = local_268 + 1;
            }
            else {
              local_268 = param_4 - 1;
            }
            memmove(param_3,local_8,local_268);
            *(undefined1 *)((int)param_3 + param_4 + -1) = 0;
            break;
          }
        }
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x208) + 4))();
      iVar2 = FUN_0061ed80();
    } while (*(uint *)(param_1 + 0x20c) < (uint)(iVar1 + iVar2));
  }
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

