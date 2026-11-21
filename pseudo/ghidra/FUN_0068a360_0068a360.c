// FUN_0068a360  0068a360

void __thiscall FUN_0068a360(int param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  FILE *pFVar4;
  char local_624 [266];
  char local_51a;
  undefined1 local_519;
  FILE *local_518;
  char local_514 [264];
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_518 = (FILE *)0x0;
  if ((((*(char *)(param_1 + 0x107) != '\0') && (param_2 != (char *)0x0)) && (*param_2 != '\0')) &&
     (param_3 != 0)) {
    if (*(char *)(param_1 + 0x20c) == '\0') {
      strcpy(local_514,(char *)(param_1 + 8));
      FUN_005ea5b0(local_514);
      local_40c = '\0';
      memset(local_40b,0,0x3ff);
      strcat(&local_40c,local_514);
      if (*(int *)(param_1 + 0x208) == 0) {
        uVar2 = FUN_005ea9c0(&local_40c,&DAT_006c2d2c);
        *(undefined4 *)(param_1 + 0x208) = uVar2;
        if (*(int *)(param_1 + 0x208) == 0) goto LAB_0068a6f7;
        fclose(*(FILE **)(param_1 + 0x208));
        uVar2 = FUN_005ea9c0(&local_40c,&DAT_006c2d28);
        *(undefined4 *)(param_1 + 0x208) = uVar2;
        if (*(int *)(param_1 + 0x208) == 0) goto LAB_0068a6f7;
      }
      strcpy(local_624,&local_40c);
      strcat(local_624,".tmp");
      local_518 = (FILE *)FUN_005ea9c0(local_624,&DAT_006c2d2c);
      if (local_518 != (FILE *)0x0) {
        cVar1 = FUN_0068a710(param_1 + 0x107,local_518);
        if (cVar1 == '\0') {
          fwrite(&DAT_006e5634,1,1,local_518);
          pFVar4 = local_518;
          sVar3 = strlen((char *)(param_1 + 0x107));
          fwrite((void *)(param_1 + 0x107),1,sVar3,pFVar4);
          fwrite(&DAT_006e5630,1,1,local_518);
          pFVar4 = local_518;
          sVar3 = strlen("\r\n");
          fwrite(&DAT_006d8c14,1,sVar3,pFVar4);
        }
        cVar1 = FUN_0068ac10(param_2,param_3,local_518);
        if (cVar1 != '\0') {
          local_51a = '\0';
          while (local_51a == '\0') {
            sVar3 = fread(&local_519,1,1,*(FILE **)(param_1 + 0x208));
            local_51a = '\x01' - (sVar3 != 0);
            if (local_51a == '\0') {
              fwrite(&local_519,1,1,local_518);
            }
          }
          fclose(local_518);
          fclose(*(FILE **)(param_1 + 0x208));
          remove(&local_40c);
          rename(local_624,&local_40c);
          uVar2 = FUN_005ea9c0(&local_40c,&DAT_006c2d28);
          *(undefined4 *)(param_1 + 0x208) = uVar2;
          goto LAB_0068a6f7;
        }
      }
      if (local_518 != (FILE *)0x0) {
        fclose(local_518);
        remove(local_624);
      }
    }
    else {
      FUN_0068b050(param_2,param_3);
    }
  }
LAB_0068a6f7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

