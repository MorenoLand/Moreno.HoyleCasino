// FUN_005234d0  005234d0

void FUN_005234d0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 extraout_var;
  
  cVar2 = FUN_005f54c0();
  if (((cVar2 == '\0') && (*(char *)(param_1 + 4) == '\0')) &&
     ((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 1 || (iVar1 == 4)))) {
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_005229b0(iVar1,extraout_var);
  }
  return;
}

