// FUN_0066c5c0  0066c5c0

void __fastcall FUN_0066c5c0(undefined4 param_1)

{
  undefined4 *puVar1;
  char *_Source;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_0063aac0(param_1);
  *puVar1 = 2;
  _Source = (char *)FUN_00630f40("SID_SHELL_HOST");
  uVar5 = **(undefined4 **)(DAT_0162ee84 + 0x58);
  pcVar4 = _Source;
  iVar2 = FUN_0063aac0();
  strcpy((char *)(iVar2 + 4),_Source);
  uVar3 = **(undefined4 **)(DAT_0162ee84 + 0x58);
  iVar2 = FUN_0063aac0();
  *(undefined4 *)(iVar2 + 0x54) = 0;
  iVar2 = **(int **)(DAT_0162ee84 + 0x58);
  strcpy((char *)(iVar2 + 0x10),"user99.log");
  if (DAT_007960ce == '\0') {
    FUN_0063b0a0(param_1,iVar2,uVar3,pcVar4,uVar5);
  }
  return;
}

