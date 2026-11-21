// FUN_00662e40  00662e40

void __fastcall FUN_00662e40(undefined4 param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_0063aac0(param_1);
  *puVar1 = 2;
  pcVar2 = (char *)FUN_00630f40("SID_GENERIC_HOYLEPLAYER");
  iVar3 = FUN_0063aac0();
  strcpy((char *)(iVar3 + 4),pcVar2);
  iVar3 = FUN_0063aac0();
  *(undefined4 *)(iVar3 + 0x54) = 0;
  pcVar2 = (char *)FUN_00630f40("SID_CASINO_DEFAULTUSERFILENAME");
  strcpy((char *)(**(int **)(DAT_0162ee84 + 0x58) + 0x10),pcVar2);
  return;
}

