// FUN_00688f10  00688f10

void __thiscall FUN_00688f10(int param_1,char *param_2,FILE *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  FILE *pFVar7;
  char *local_248;
  char local_244;
  char local_243 [263];
  char local_13c [20];
  char local_128 [20];
  char local_114 [268];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x210) == 0) {
    memset(&local_244,0,0x105);
    memset(local_114,0,0x105);
    sprintf(local_128,"%%[^\n\r]",0x104);
    sprintf(local_13c,"%%[\n\r]",0x104);
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x208) + 4))();
      *(undefined4 *)(param_1 + 0x20c) = uVar1;
      do {
        local_244 = '\0';
        local_248 = &local_244;
        iVar2 = (**(code **)(**(int **)(param_1 + 0x208) + 4))();
        iVar3 = FUN_0061ed80();
        while (((**(char **)(param_1 + 0x20c) != '\n' && (**(char **)(param_1 + 0x20c) != '\r')) &&
               (*(uint *)(param_1 + 0x20c) < (uint)(iVar2 + iVar3)))) {
          *local_248 = **(char **)(param_1 + 0x20c);
          local_248 = local_248 + 1;
          *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
        }
        *local_248 = '\0';
        iVar6 = (int)local_248 - (int)&local_244;
        if ((local_248 == &local_244) || (iVar6 == -1)) break;
        if (param_3 != (FILE *)0x0) {
          pFVar7 = param_3;
          sVar4 = strlen(&local_244);
          fwrite(&local_244,1,sVar4,pFVar7);
        }
        local_114[0] = '\0';
        while ((**(char **)(param_1 + 0x20c) == '\n' ||
               ((**(char **)(param_1 + 0x20c) == '\r' &&
                (*(uint *)(param_1 + 0x20c) < (uint)(iVar2 + iVar3)))))) {
          *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
        }
        if (((param_3 != (FILE *)0x0) && (local_248 != &local_244)) && (iVar6 != -1)) {
          pFVar7 = param_3;
          sVar4 = strlen(local_114);
          fwrite(local_114,1,sVar4,pFVar7);
        }
        FUN_006896c0(&local_244);
        if (((local_244 != ';') && (local_244 == '[')) &&
           (pcVar5 = strchr(local_243,0x5d), pcVar5 != (char *)0x0)) {
          *pcVar5 = '\0';
          iVar2 = _stricmp(local_243,param_2);
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0x20c);
            break;
          }
        }
        iVar2 = (**(code **)(**(int **)(param_1 + 0x208) + 4))();
        iVar3 = FUN_0061ed80();
      } while (*(uint *)(param_1 + 0x20c) < (uint)(iVar2 + iVar3));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x210);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

