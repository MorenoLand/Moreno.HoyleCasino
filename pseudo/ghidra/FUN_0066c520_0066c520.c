// FUN_0066c520  0066c520

void FUN_0066c520(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **_Source;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0063ab10("guest.log");
  uVar5 = **(undefined4 **)(DAT_0162ee84 + 0x58);
  uVar3 = extraout_var;
  puVar1 = (undefined4 *)FUN_0063aac0(extraout_var);
  *puVar1 = 2;
  uVar4 = **(undefined4 **)(DAT_0162ee84 + 0x58);
  _Source = &PTR_006b27f8;
  iVar2 = FUN_0063aac0();
  strcpy((char *)(iVar2 + 0x38),(char *)_Source);
  iVar2 = FUN_0063aac0(uVar3,**(undefined4 **)(DAT_0162ee84 + 0x58),uVar4,uVar5);
  *(undefined4 *)(iVar2 + 0x54) = 0;
  FUN_0063b0a0();
  return;
}

