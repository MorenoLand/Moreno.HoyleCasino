// FUN_0065a0b0  0065a0b0

void __thiscall FUN_0065a0b0(int param_1,char *param_2)

{
  FILE *_File;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_414;
  char local_40c;
  undefined1 local_40b [1027];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_40c = '\0';
  memset(local_40b,0,0x3ff);
  sprintf(&local_40c,"%s%s%s",&DAT_00795fc0,&DAT_006d61f8,param_2);
  _File = (FILE *)FUN_005ea9c0(&local_40c,&DAT_006c2d28);
  if (_File != (FILE *)0x0) {
    fread((void *)(*(int *)(param_1 + 0x1dc) + 0x10),0x4c,1,_File);
    fclose(_File);
    for (local_414 = 0; local_414 < 0xc; local_414 = local_414 + 1) {
    }
    FUN_00657500(*(undefined4 *)(param_1 + 0x278));
    FUN_00664630();
    FUN_006595e0((int)*(char *)(*(int *)(param_1 + 0x1dc) + 0x40));
    iVar1 = FUN_005fb5e0(0x400);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005fb5e0(0x400);
      iVar1 = FUN_00665800(param_2,1);
      (**(code **)(*piVar2 + 0xf0))(iVar1 + 0x186bf);
    }
    strcpy((char *)(param_1 + 0x1bc),param_2);
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1dc) + 0x10);
    puVar4 = (undefined4 *)(param_1 + 0x1e0);
    for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    memset((void *)(param_1 + 0x22c),0,0x4c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

