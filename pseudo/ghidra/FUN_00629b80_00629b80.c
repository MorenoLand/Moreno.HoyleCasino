// FUN_00629b80  00629b80

void __thiscall FUN_00629b80(int param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if ((((param_3 != -1) || (*(int *)(param_1 + 4) == 0)) || (param_2 == (char *)0x0)) ||
     (iVar1 = strcmp(*(char **)(param_1 + 4),param_2), iVar1 != 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      operator_delete(*(void **)(param_1 + 4));
    }
    if (param_2 != (char *)0x0) {
      FUN_005eed70(local_10c,param_2,param_3);
      sVar2 = strlen(local_10c);
      pvVar3 = operator_new(sVar2 + 1);
      *(void **)(param_1 + 4) = pvVar3;
      strcpy(*(char **)(param_1 + 4),local_10c);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

