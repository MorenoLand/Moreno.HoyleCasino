// FUN_0057a1b0  0057a1b0

undefined4 FUN_0057a1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined **_Source;
  
  FUN_0063ab10(param_1);
  puVar1 = (undefined4 *)FUN_0063aac0();
  *puVar1 = param_2;
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 == 2) {
    _Source = &PTR_006b27f8;
    iVar3 = FUN_0063aac0();
    strcpy((char *)(iVar3 + 0x38),(char *)_Source);
    iVar3 = FUN_0063aac0();
    *(undefined4 *)(iVar3 + 0x54) = param_3;
  }
  else {
    iVar3 = FUN_0063aac0(param_4,**(undefined4 **)(DAT_0162ee84 + 0x58));
    strcpy((char *)(iVar3 + 0x38),param_4);
  }
  FUN_0063b0a0();
  return 0;
}

