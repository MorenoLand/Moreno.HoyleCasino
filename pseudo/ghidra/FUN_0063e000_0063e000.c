// FUN_0063e000  0063e000

void __thiscall FUN_0063e000(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *_Format;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)FUN_0063aac0();
  if ((((*piVar2 != 1) ||
       (*(int *)(*(int *)(*(int *)(param_1 + 0x1bc) + *(int *)(param_1 + 0x1c4) * 4) + 8) != param_2
       )) && (cVar1 = (**(code **)(*DAT_0162ee84 + 0x160))(), cVar1 == '\0')) &&
     (cVar1 = FUN_0063df70(param_2), cVar1 != '\0')) {
    uVar3 = (**(code **)(*DAT_0162ee84 + 0x3b8))(param_2);
    _Format = (char *)FUN_00630f40("SID_SHELL_ALREADYINGAME_FORMAT",uVar3);
    sprintf(local_74,_Format);
    uVar3 = FUN_00630f40("SID_SHELL_ALREADYINGAME_TITLE",0);
    FUN_0062ff10(local_74,uVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

